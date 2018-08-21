#pragma once
#include "DataStore.h"

typedef enum
{
	ALL_OF_THE_WORDS,
	EXACT_PHRASE,
	AT_LEAST_ONE_WORD,
	WITHOUT_THE_WORDS,
}SearchType;

class Search
{
private:
	bool crewFound(std::vector<Crew> crews, std::string crewName);
	bool keywordFound(std::vector<std::string> keywords, std::string fkeyword);
	bool dataCompare(std::string data, std::string keyword);
public:
	Search();
	~Search();
	/*
	 * Filter with title, crew, state, keyword
	 *
	 */
	std::vector<Project*> searchIt(std::string filmName, std::string crew, std::string state, std::string keyword);
};
