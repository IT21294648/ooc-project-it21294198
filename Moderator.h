#pragma once
#include "Date.h"
#include "Complaint.h"
#include "PostType.h"
#include "User.h"
#include "Photo.h"
#include <cstring>

class Moderator : public User{
protected:
	int modId;
	char modName[30];
	
public:
	Moderator(){
		modId=0;
		strcpy(modName,"Default");
	};
	Moderator(int pUid, const char pName[25], const char pAddress[100], const char pEmail[50], const char pass[50], const char pAbout[400], const char pStatus[10], Photo*pImage) : User(pUid, pName, pAddress, pEmail, pass, pAbout, pStatus,pImage)
	{
		modId=pUid;
		strcpy(modName,pName);
	}
	void setModId(int mid);
	int getModId();
	void setModName(const char mName[30]);
	char getModName();
	void manageUser(User user);
	void reviewComplaint(Complaint comp);
	~Moderator();
};


