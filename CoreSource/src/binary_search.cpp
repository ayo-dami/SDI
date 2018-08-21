#include "binary_search.h"
#include <algorithm>

BinarySearch::BinarySearch()
{
	TitleTree = new BinaryTree;
	CrewTree = new BinaryTree;
	StateTree = new BinaryTree;
	KeyWordTree = new BinaryTree;
	loadBST();
}

BinarySearch::~BinarySearch()
{
	delete TitleTree;
	delete CrewTree;
	delete StateTree;
	delete KeyWordTree;
}

bool BinarySearch::crewFound(std::vector<Crew> crews, std::string crewName)
{
	//if crewName is empty string, that means don't care about this field
	if (crewName == "")
	{
		return true;
	}

	for each(struct Crew crew in crews)
	{
		if (crew.name == crewName)
			return true;
	}
	return false;
}

bool BinarySearch::dataCompare(std::string data, std::string keyword)
{
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

std::vector<Project*> BinarySearch::searchIt(std::string keyWord, SearchField field)
{
	std::vector<Project*> prjList;
	std::vector<Node*> nodeList;

	switch (field)
	{
	case TITLE:
		nodeList = TitleTree->findNode(keyWord);

		for each(Node *node in nodeList)
		{
			prjList.push_back(node->getlinkProject());
		}
		break;
	case STATE:
		nodeList = StateTree->findNode(keyWord);

		for each(Node *node in nodeList)
		{
			prjList.push_back(node->getlinkProject());
		}
		break;
	case CREW:
		nodeList = CrewTree->findNode(keyWord);

		for each(Node *node in nodeList)
		{
			prjList.push_back(node->getlinkProject());
		}
	case KEYWORD:
		nodeList = KeyWordTree->findNode(keyWord);

		for each(Node *node in nodeList)
		{
			prjList.push_back(node->getlinkProject());
		}
		break;
	default:
		break;
	}

	return prjList;
}

void BinarySearch::loadBST()
{
	int idx = 0;
	for each (Project project in DataStore::allProjects)
	{
		TitleTree->addNode(project.title, &DataStore::allProjects[idx]);
		StateTree->addNode(project.state, &DataStore::allProjects[idx]);

		for each (struct Crew crew in project.crewMembers)
		{
			CrewTree->addNode(crew.name, &DataStore::allProjects[idx]);
		}

		for each (std::string keyword in project.keywords)
		{
			KeyWordTree->addNode(keyword, &DataStore::allProjects[idx]);
		}

		idx++;
	}

}
