#include "Moderator.h"
#include <cstring>
#pragma once

class Admin : public Moderator
{
private:
	int adminID;
	char adminID[25];
	
public:
	admin()
	{
		adminID=0000;
		strcpy(adminName, "Default");
	};
	
	admin(int pUid, const char pName[25], const char pAddress[100], const char pEmail[50]
		const char pass[50], const char pAbout[400], const char pStatus[10], Photo*pImage) : Moderator(pUid, pName, pAddress, pEmail, pass, pAbout, pStatus);
	{
		adminID = pUid;
		strcpy(adminName, aName);
	};
	
	void addModerator();
	void removeModerator();
	void getDetails();
	void manageModerator(Moderator moderator);
	~Admin();
};
