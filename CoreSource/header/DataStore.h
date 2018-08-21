#pragma once
#include "Project.h"
#include "DailyLogStructure.h"

class DataStore
{
public: 
	DataStore();
	~DataStore();

	static std::vector<Project> allProjects;
	static DailyLogStructure dailyLog;
};

