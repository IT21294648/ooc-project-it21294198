#pragma once
#include <cstring>
#include "Photo.h"
#include "User.h"
#include "Complaint.h"
class Moderator : public User{
protected:
	int modId;
	char modName[30];
	
public:
	Moderator()	:User(){
	}
	Moderator( int pId, const char pName[], const char pAddress[], const char pEmail[], const char pPassword[], const char pAbout[], const char pStatus[],  Photo* pProfilephoto)
	:User(pId, pName, pAddress, pEmail, pPassword, pAbout, pStatus, pProfilephoto)	{
	}
	void setModId(int mid);
	int getModId();
	void setModName(const char mName[30]);
	char* getModName();
	void manageUser(User user);
	void reviewComplaint(Complaint comp);
  //~Moderator();
};
