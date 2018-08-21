#pragma once
//#include "stdafx.h"
#include <fstream>
#include <iostream>
#include "Project.h"
#include "DataStore.h"

void readProjectsFile(std::string fileName);
void writeProjectsFile(std::string fileName);
void splitLineIntoVector(std::string line, std::vector<std::string>& newVector, char splitChar);
