#include "Project.h"

Project::Project(std::string stringRepresentation)
{
	// set project string to line read from file for this project
	projectString = stringRepresentation;
	
	if (projectString == "")
	{
		edited = true;
	}
	else
	{
		edited = false;
	}
}

Project::~Project()
{

}

std::string Project::convertToString()
{
	/// converts the project into its string representation

	// check if this project had been edited. If not, return line that was intially read in
	if (!edited)
	{
		return projectString;
	}

	// for each element of the project, surround it in quotation marks and place a comma after it
	// the quotation marks stop the code from seperating the string representation in the middle of a variable
	else
	{
		projectString += "\"" + title + "\","; // title
		projectString += "\"" + summary + "\","; // summary
		projectString += "\"" + genre + "\","; // genre
		projectString += "\"" + releaseDate + "\","; // release date

		projectString += "\""; // filming locations
		for (int i = 0; i < filmingLocations.size(); i++)
		{
			projectString += filmingLocations[i];
			if (i < filmingLocations.size() - 1)
			{
				projectString += ";"; // if not the last location to add, add a ; to seperate values
			}
		}
		projectString += "\",";

		projectString += "\"" + language + "\","; // language
		projectString += "\"" + runtime + "\","; // runtime

												 // keywords vector
												 // multiple values that belong to a single vector are split with semicolons instead of commas
		projectString += "\"";
		for (int i = 0; i < keywords.size(); i++)
		{
			projectString += keywords[i];
			if (i < keywords.size() - 1)
			{
				projectString += ";"; // if not the last keyword to add, add a ; to seperate values
			}
		}
		projectString += "\","; // comma add as usual at end of vector

								// crew vector
		projectString += "\"";
		for (int i = 0; i < crewMembers.size(); i++)
		{
			projectString += crewMembers[i].name + ":" + crewMembers[i].job;
			if (i < crewMembers.size() - 1)
			{
				projectString += ";"; // if not the last crew to add, add a ; to seperate values
			}
		}
		projectString += "\",";

		// weekly ticket sales vector
		projectString += "\"";
		for (int i = 0; i < weeklyTicketSales.size(); i++)
		{
			projectString += weeklyTicketSales[i];
			if (i < weeklyTicketSales.size() - 1)
			{
				projectString += ";"; // if not the last weekly ticket sale to add, add a ; to seperate values
			}
		}
		projectString += "\",";

		projectString += "\"" + state + "\","; // state

											   // loop through all associated materials (only exist for released projects)
		for each (Material material in listOfMaterials)
		{
			projectString += "\"" + material.type + "\","; // type
			projectString += "\"" + material.idNumber + "\","; // id number
			projectString += "\"" + material.materialTitle + "\","; // material title
			projectString += "\"" + material.format + "\","; // format
			projectString += "\"" + material.audioFormat + "\","; // audio format
			projectString += "\"" + material.materialRuntime + "\","; // runtime
			projectString += "\"" + material.retailPrice + "\","; // price
			projectString += "\"" + material.frameAspect + "\","; // frame aspect

			if (material.type == "VHS")
			{
				projectString += "\"" + material.packaging + "\","; // packaging
				projectString += "\"" + material.vhsLanguage + "\","; // language
				projectString += "\"" + material.vhsSubtitleLanguage + "\""; // subtitles
			}
			else
			{
				// disc languages vector
				projectString += "\"";
				for (int i = 0; i < material.languageTracks.size(); i++)
				{
					projectString += material.languageTracks[i];
					if (i <  material.languageTracks.size() - 1)
					{
						projectString += ";"; // if not the last language to add, add a ; to seperate values
					}
				}
				projectString += "\",";

				// disc subtitles vector
				projectString += "\"";
				for (int i = 0; i < material.subtitles.size(); i++)
				{
					projectString += material.subtitles[i];
					if (i <  material.subtitles.size() - 1)
					{
						projectString += ";"; // if not the last subtitle to add, add a ; to seperate values
					}
				}
				projectString += "\",";

				// disc features 2-dimensional vector
				projectString += "\"";
				for (int i = 0; i < material.featuresPerDisc.size(); i++) // loop through discs
				{
					for (int j = 0; j < material.featuresPerDisc[i].size(); j++) // loop through features on this disc
					{
						projectString += material.featuresPerDisc[i][j];

						// ';' used to separate features on a disc
						if (j < material.featuresPerDisc[i].size() - 1)
						{
							projectString += ";";
						}
					}

					// '|' used to separate discs
					if (i < material.featuresPerDisc.size() - 1)
					{
						projectString += "|"; // if not last disc, add | to serperate values
					}
				}
				projectString += "\"";
			}
		}
	}

	return projectString;
}