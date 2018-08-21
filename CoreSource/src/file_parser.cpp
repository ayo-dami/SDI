#include "file_parser.h"


void readProjectsFile(std::string fileName)
{
	/// reads projects txt file and adds all entries to vector given in parameter

	std::ifstream projectFile;
	std::string line; // line of text file
	std::vector<std::string> lineContents; // temporary string to store each substring of 'line'

	try
	{
		projectFile.open(fileName, std::ios::in);

		if (projectFile.is_open())
		{
			while (std::getline(projectFile, line))
			{
				// Project constructor saves the input string for potential reuse later
				Project thisProject(line);
				lineContents.clear();

				// split input string at commas
				splitLineIntoVector(line, lineContents, ',');

				// sort through lineContents
				thisProject.title = lineContents[0];
				thisProject.summary = lineContents[1];
				thisProject.genre = lineContents[2];
				thisProject.releaseDate = lineContents[3];
				thisProject.language = lineContents[5];
				thisProject.runtime = lineContents[6];
				thisProject.state = lineContents[10];

				// substrings which need splitting into vectors
				splitLineIntoVector(lineContents[4], thisProject.filmingLocations, ';');
				splitLineIntoVector(lineContents[7], thisProject.keywords, ';');
				splitLineIntoVector(lineContents[9], thisProject.weeklyTicketSales, ';');

				std::vector<std::string> crewMembersString;
				splitLineIntoVector(lineContents[8], crewMembersString, ';');
				for each (std::string crewMember in crewMembersString)
				{
					Crew newCrewMember;
					int split = crewMember.find(':');
					newCrewMember.name = crewMember.substr(0, split);
					newCrewMember.job = crewMember.substr(split + 1);
					thisProject.crewMembers.push_back(newCrewMember);
				}

				// add additional materials if project is released
				if (thisProject.state == "released")
				{
					Material newMaterial;

					int currentIndex = 11;

					// loop until end of file is reached
					while (currentIndex < lineContents.size())
					{
						newMaterial.type = lineContents[currentIndex];
						currentIndex++;
						newMaterial.idNumber = lineContents[currentIndex];
						currentIndex++;
						newMaterial.materialTitle = lineContents[currentIndex];
						currentIndex++;
						newMaterial.format = lineContents[currentIndex];
						currentIndex++;
						newMaterial.audioFormat = lineContents[currentIndex];
						currentIndex++;
						newMaterial.materialRuntime = lineContents[currentIndex];
						currentIndex++;
						newMaterial.retailPrice = lineContents[currentIndex];
						currentIndex++;
						newMaterial.frameAspect = lineContents[currentIndex];
						currentIndex++;

						if (newMaterial.type == "VHS")
						{
							newMaterial.packaging = lineContents[currentIndex];
							currentIndex++;
							newMaterial.vhsLanguage = lineContents[currentIndex];
							currentIndex++;
							newMaterial.vhsSubtitleLanguage = lineContents[currentIndex];
							currentIndex++;
						}
						else
						{
							std::vector<std::string> discs;

							splitLineIntoVector(lineContents[currentIndex], newMaterial.languageTracks, ';');
							currentIndex++;
							splitLineIntoVector(lineContents[currentIndex], newMaterial.subtitles, ';');
							currentIndex++;
							splitLineIntoVector(lineContents[currentIndex], discs, '|');

							for each(std::string discContents in discs)
							{
								std::vector<std::string> listOfFeatures;
								splitLineIntoVector(discContents, listOfFeatures, ';');
								newMaterial.featuresPerDisc.push_back(listOfFeatures);
							}
							currentIndex++;
						}

						thisProject.listOfMaterials.push_back(newMaterial);
					}

				}

				DataStore::allProjects.push_back(thisProject);
			}
			projectFile.close();
		}
	}
	catch (std::ifstream::failure& e)
	{
		std::cout << "Error reading projects file.\n";
	}
}

void writeProjectsFile(std::string fileName)
{
	/// overwrite file with name 'fileName' with data in 'allProjects'
	std::ofstream projectFile;
	projectFile.open(fileName, std::ios::out);
	projectFile.clear();

	for each (Project project in DataStore::allProjects)
	{
		if (project.title != "")
		{
			projectFile << project.convertToString() << '\n';
		}
	}

	projectFile.close();
}

void splitLineIntoVector(std::string line, std::vector<std::string>& newVector, char splitChar)
{
	/// splits 'line' parameter into a vector of strings (newVector), separating line by 'splitChat'

	std::string substring; //temporary string used to store substring of line
	bool midstring = false;

	for (char c : line)
	{
		// if entry is in quotation marks, don't seperate values at commas. This allows commas to be used in film data
		if (c == '"')
		{
			// open quotation marks
			if (midstring == false)
			{
				midstring = true;
			}

			// close quotation marks
			else if (midstring == true)
			{
				midstring = false;
			}
		}
		else
		{
			// seperate values if comma is reached
			if (c == splitChar && !midstring)
			{
				newVector.push_back(substring);
				substring = "";
			}
			// else add character to current substring
			else
			{
				substring += c;
			}
		}
	}

	// push final substring to vector
	newVector.push_back(substring);
}

/*
	test project for testing file writing. Can be deleted.
*/
//Project createTestProject()
//{
//	Project testProject;
//
//	testProject.title = "Fast and Furious";
//	testProject.summary = "It's about street racing I think? Maybe drag racing, more specifically";
//	testProject.genre = "VroomVroom";
//	testProject.releaseDate = "Like, 2002 or something?";
//	testProject.filmingLocations.push_back("Somewhere in the US");
//	testProject.filmingLocations.push_back("Another place in the US");
//	testProject.language = "English";
//	testProject.runtime = "2 hours maybe";
//	testProject.keywords.push_back("Cars");
//	testProject.keywords.push_back("FastCars");
//	Crew VD;
//	VD.name = "Is this the one with Vin Diesel in it?";
//	VD.job = "Cast";
//	Crew guy;
//	guy.name = "That guy who died";
//	guy.job = "Cast";
//	testProject.crewMembers.push_back(VD);
//	testProject.crewMembers.push_back(guy);
//	testProject.weeklyTicketSales.push_back("first week sales");
//	testProject.weeklyTicketSales.push_back("second week sales");
//	testProject.state = "released";
//
//	Material doubleSidedDVD;
//	doubleSidedDVD.type = "Double-Sided DVD";
//	doubleSidedDVD.idNumber = "001";
//	doubleSidedDVD.materialTitle = "F&F: DVD";
//	doubleSidedDVD.format = "F&F Format";
//	doubleSidedDVD.audioFormat = "F&F Audio Format";
//	doubleSidedDVD.materialRuntime = "A bit over 2 hours";
//	doubleSidedDVD.retailPrice = "A Fiver";
//	doubleSidedDVD.frameAspect = "16:9";
//	doubleSidedDVD.languageTracks.push_back("English");
//	doubleSidedDVD.languageTracks.push_back("Italian");
//	doubleSidedDVD.subtitles.push_back("English");
//	doubleSidedDVD.subtitles.push_back("Italian");
//	doubleSidedDVD.subtitles.push_back("Spanish");
//	doubleSidedDVD.subtitles.push_back("French");
//
//	std::vector<std::string> disc;
//	disc.push_back("Disc1Feature1");
//	disc.push_back("Disc1Feature2");
//
//	std::vector<std::string> disc2;
//	disc2.push_back("Disc2Feature1");
//	disc2.push_back("Disc2Feature2");
//
//	doubleSidedDVD.featuresPerDisc.push_back(disc);
//	doubleSidedDVD.featuresPerDisc.push_back(disc2);
//
//	testProject.listOfMaterials.push_back(doubleSidedDVD);
//
//	return testProject;
//}



///*
//	Lists all data in console. Needs to be replaced with function which sends data to controller.
//*/
//void Project::displayProjectData()
//{
//	/// displays each project detail on a new line in console app
//	std::cout << title << std::endl << summary << std::endl << genre << std::endl << releaseDate << std::endl << language << std::endl << runtime << std::endl << state << std::endl;
//	for each (Crew crew in crewMembers)
//	{
//		std::cout << crew.name << ": " << crew.job << std::endl;
//	}
//	for each (std::string location in filmingLocations)
//	{
//		std::cout << location << " - ";
//	}
//	std::cout << std::endl;
//	for each (std::string keyword in keywords)
//	{
//		std::cout << keyword << " - ";
//	}
//	std::cout << std::endl;
//	for each (std::string ticketSales in weeklyTicketSales)
//	{
//		std::cout << ticketSales << " - ";
//	}
//	std::cout << std::endl;
//
//	for each (Material material in listOfMaterials)
//	{
//		std::cout << '\t' << material.type << std::endl;
//		std::cout << '\t' << material.idNumber << std::endl;
//		std::cout << '\t' << material.materialTitle << std::endl;
//		std::cout << '\t' << material.format << std::endl;
//		std::cout << '\t' << material.audioFormat << std::endl;
//		std::cout << '\t' << material.materialRuntime << std::endl;
//		std::cout << '\t' << material.retailPrice << std::endl;
//		std::cout << '\t' << material.frameAspect << std::endl;
//
//		if (material.type == "VHS")
//		{
//			std::cout << '\t' << material.packaging << std::endl;
//			std::cout << '\t' << material.vhsLanguage << std::endl;
//			std::cout << '\t' << material.vhsSubtitleLanguage << std::endl;
//		}
//		else
//		{
//			std::cout << '\t';
//			for each (std::string language in material.languageTracks)
//			{
//				std::cout << language << " - ";
//			}
//			std::cout << std::endl;
//
//			std::cout << '\t';
//			for each (std::string subtitle in material.subtitles)
//			{
//				std::cout << subtitle << " - ";
//			}
//			std::cout << std::endl;
//
//			for each (std::vector<std::string> disc in material.featuresPerDisc)
//			{
//				std::cout << '\t';
//				for each(std::string feature in disc)
//				{
//					std::cout << feature << " - ";
//				}
//				std::cout << std::endl;
//			}
//		}
//	}
//
//	std::cout << std::endl << "*******************************************************************" << std::endl << std::endl;
//}

