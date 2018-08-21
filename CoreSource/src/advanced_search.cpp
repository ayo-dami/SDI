#include "advanced_search.h"
#include <algorithm>





Search::Search()
{
	
}



Search::~Search()
{

}


bool Search::crewFound(std::vector<Crew> crews, std::string crewName)
{
	/// search for crew member

	//if crewName is empty string, that means don't care about this field
	if (crewName == "")
	{
		return true;
	}

	// search all crew for this crew member
	for each(struct Crew crew in crews)
	{
		if (crew.name == crewName)
			return true;
	}

	// crew member not found
	return false;
}

bool Search::keywordFound(std::vector<std::string> keywords, std::string fkeyword)
{
	/// search for keyword

	//if keyword is empty string, that means don't care about this field
	if (fkeyword == "")
	{
		return true;
	}

	// search all keywords for this keyword
	for each(std::string keyword in keywords)
	{
		if (fkeyword == keyword)
			return true;
	}

	// keyword not found
	return false;
}

bool Search::dataCompare(std::string data, std::string keyword)
{
	/// returns true if both parameters are the same
	
	//if keyword is empty string, that means don't care about this field
	if (keyword == "")
	{
		return true;
	}
	else if (data == keyword)
	{
		return true;
	}
	else
	{
		return false;
	}
}

std::vector<Project*> Search::searchIt(std::string filmName, std::string crew, std::string state, std::string keyword)
{
	std::vector<Project*> prjList;
	int idx = 0;

	//add Project to a list if all conditions are met
	for each(Project project in DataStore::allProjects)
	{
		if (dataCompare(project.title, filmName) && keywordFound(project.keywords, keyword) && 
			crewFound(project.crewMembers,crew) && dataCompare(project.state, state))
		{
			prjList.push_back(&DataStore::allProjects[idx]);
		}

		idx++;
	}

	return prjList;
}

