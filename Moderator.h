#include "Date.h"
#include "Complaint.h"
#include "PostType.h"
#include "User.h"
#include "Photo.h"
#include <cstring>

Class Moderator : public User{
protected:
	int modId;
	char modName[30];
	
public:
	Moderator(){
		modId="0";
		strcpy(modName,"Default");
	};
	Moderator(int mid,const char mname[30], int uID, const char uName[30], const char pword[30]) : User(uID,uname,pword)
	{
		modId=mid;
		strcpy(modName,mname);
	}
	void setModId(int mid);
	int getModId();
	void setModName(const char mName[30]);
	string getModName();
	void manageUser(User user);
	void reviewComplaint(Complaint comp);
	~Moderator();
}


