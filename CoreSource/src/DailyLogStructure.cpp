#include "DailyLogStructure.h"
#include <iostream> // for testing 

DailyLogStructure::DailyLogStructure(std::tm* now)
{
	queueLength = 0;
	lastElement = new LogEntry("END OF QUEUE", 100, 100); // creation times for start and end of queue are set to a high number so that they'll never be deleted
	nextElement = new LogEntry("START OF QUEUE", 100, 100);
	nextElement->next = lastElement;
	lastElement->next = nextElement;

	std::ifstream entryLogFile;
	std::string line;

	entryLogFile.open("EntryLogger.txt", std::ios::in);

	if (entryLogFile.is_open())
	{
		// read in string from file which contains the entry, the day of creation, and the hour of creation all on the same line
		while (std::getline(entryLogFile, line))
		{
			// end position of entry in line read from file
			int entryEndPos = line.find(";");

			// split line to seperate entry
			std::string entryName = line.substr(0, entryEndPos);
			std::string remainingLine = line.substr(entryEndPos + 1);

			// find split between creation day and creation hour
			int creationDayEndPos = remainingLine.find(";");

			// split remainuing line into creation day and creation hour
			std::string creationDay = remainingLine.substr(0, creationDayEndPos);
			std::string creationHour = remainingLine.substr(creationDayEndPos + 1);

			// convert both from strings to ints
			int creationDayInt = std::stoi(creationDay);
			int creationHourInt = std::stoi(creationHour);

			// add entry to queue
			enqueue(entryName, creationDayInt, creationHourInt);
		}

		clearOldEntries(now);
	}
}


DailyLogStructure::~DailyLogStructure()
{
}

void DailyLogStructure::dequeue()
{
	// check queue is not empty
	if (queueLength > 0)
	{
		LogEntry* nextInQueue = nextElement->next; // find element after the next one in the queue
		nextElement->~LogEntry(); // delete next element in queue
		nextElement = nextInQueue; // move up queue
		queueLength--;
	}
}

void DailyLogStructure::enqueue(std::string newEntryName, int creationDay, int creationHour)
{
	LogEntry* newLogEntry = new LogEntry(newEntryName, creationDay, creationHour);

	if (queueLength == 0)
	{
		// queue is empty, so have both 'next element' and 'last element' point to the new entry, as it is now the only entry
		nextElement = newLogEntry;
		nextElement->next = lastElement;
		lastElement->next = nextElement;
	}
	else
	{
		// last element points to newest entry, i.e. the end of the queue
		LogEntry* previousLastElement = lastElement->next;
		previousLastElement->next = newLogEntry;
		lastElement->next = newLogEntry;
		newLogEntry->next = lastElement;
	}

	queueLength++;
}

void DailyLogStructure::clearOldEntries(std::tm* now)
{
	bool allOldEntriesCleared = false;

	// loop while queue still has entries which need removing

	while (!allOldEntriesCleared && queueLength > 0)
	{
		// if entry is over 24 hours old it should be deleted
		if (nextElement->dayOfMonthOfCreation + 1 < now->tm_mday || // over 1 day old and both 'now' and time of creation were in the same month
			((nextElement->dayOfMonthOfCreation > now->tm_mday || nextElement->dayOfMonthOfCreation + 1 == now->tm_mday) && now->tm_hour > nextElement->hourOfCreation) || // current day is the day after creation, so compare the hour it was created and the current hour
			nextElement->dayOfMonthOfCreation > now->tm_mday && now->tm_mday > 1) // over one day old, but 'now' and creation time were different months
		{
			dequeue();
		}
		// if oldest entry is less than 24 hours old, finish
		else
		{
			allOldEntriesCleared = true;
		}
	}
}

void DailyLogStructure::writeToFile()
{
	std::ofstream entryLogFile;
	LogEntry* thisElement = nextElement;

	entryLogFile.open("EntryLogger.txt", std::ios::out);
	entryLogFile.clear();

	while (thisElement != lastElement)
	{
		// separate lines with semicolons
		entryLogFile << thisElement->entryName << ";" << thisElement->dayOfMonthOfCreation << ";" << thisElement->hourOfCreation << '\n';
		// move onto next element
		thisElement = thisElement->next;
	}

	entryLogFile.close();
}

std::vector<std::string> DailyLogStructure::getAllEntries()
{
	std::vector<std::string> allEntries;

	LogEntry* thisElement = nextElement;

	while (thisElement != lastElement)
	{
		allEntries.push_back(thisElement->entryName);
		thisElement = thisElement->next;
	}
	
	return allEntries;
}