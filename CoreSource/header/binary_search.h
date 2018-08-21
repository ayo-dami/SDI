#pragma once
#include "binary_search_tree.h"
#include "DataStore.h"

typedef enum
{
	TITLE,
	CREW,
	STATE,
	KEYWORD,
}SearchField; // types of search available to user

class BinarySearch
{
private:
	BinaryTree *TitleTree;
	BinaryTree *CrewTree;
	BinaryTree *StateTree;
	BinaryTree *KeyWordTree;

	bool crewFound(std::vector<Crew> crews, std::string crewName);
	bool dataCompare(std::string data, std::string keyword);
public:
	BinarySearch();
	~BinarySearch();

	/*
	 * Load data to binary search tree
	 */
	void loadBST();
	std::vector<Project*> searchIt(std::string keyWord, SearchField field);
};
