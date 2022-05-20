/*Name: M.D.M.C.L Wickramarathne	IT number: IT21294648		Center: Malabe		Group:MLB_05.02_09*/

#pragma once
#include "Photo.h"
#include "Moderator.h"
class Admin : public Moderator{
private:

public:
	Admin()	:Moderator(){
	}
	Admin( int pId, const char pName[], const char pAddress[], const char pEmail[], const char pPassword[], const char pAbout[], const char pStatus[],  Photo* pProfilephoto)
	:Moderator(pId, pName, pAddress, pEmail, pPassword, pAbout, pStatus, pProfilephoto)	{
	}
	
	void addModerator();
	void removeModerator();
	void getDetails();
	void manageModerator(Moderator moderator);
	~Admin(){}
	
};
