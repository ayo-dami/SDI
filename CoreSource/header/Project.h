#pragma once
#include <vector>
#include <string>

struct Crew
{
	std::string name;
	std::string job;
};


class Material
{
public:
	std::string type, idNumber, materialTitle, format, audioFormat, materialRuntime, retailPrice, frameAspect;

	// VHS only
	std::string packaging, vhsLanguage, vhsSubtitleLanguage;

	// Other types
	std::vector<std::string> languageTracks, subtitles;
	std::vector<std::vector<std::string>> featuresPerDisc;
};


class Project
{
public:
	std::string title, summary, genre, releaseDate, language, runtime, state;
	std::vector<Crew> crewMembers;
	std::vector<std::string> filmingLocations, keywords, weeklyTicketSales;

	std::vector<Material> listOfMaterials;

	Project(std::string stringRepresentation = std::string());
	~Project();

	std::string convertToString();

private:
	std::string projectString; // used for writing project to file
	bool edited;
};
