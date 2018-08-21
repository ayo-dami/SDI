#include "DataStore.h"

std::vector<Project> DataStore::allProjects;

std::time_t t = std::time(0); // get current time
std::tm* now = std::localtime(&t); // convert to c++ date/time structure

DailyLogStructure DataStore::dailyLog(now);

DataStore::DataStore()
{
	
}

DataStore::~DataStore() {}
