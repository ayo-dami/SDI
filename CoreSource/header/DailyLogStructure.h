#pragma once
#include "LogEntry.h"
#include <fstream>
#include <vector>

class DailyLogStructure
{
public:
	DailyLogStructure(std::tm* now);
	~DailyLogStructure();
	void dequeue();
	void enqueue(std::string newEntryName, int creationDay, int creationHour);
	void clearOldEntries(std::tm* now);
	void writeToFile();
	std::vector<std::string> getAllEntries();

private:
	int queueLength;
	LogEntry* nextElement;
	LogEntry* lastElement;
};

