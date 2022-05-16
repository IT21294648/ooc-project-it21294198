class Admin : public Moderator
{
private:
	int adminID;
	char adminName[25];
	
public:
	admin()
	{
		adminID=0000;
		strcpy(adminID, "Default");
	};
	
	admin(int pUid), const char pName[25], const char pEmail[50]
	const char pass[50]) : User(pUid, pName, pEmail, pass)
	{
		adminID = pUid;
		strcpy(adminName, aName);
	};
	
	void addModerator();
	void removeModerator();
	void getDetails();
	void manageModerator(moderator moderator);
	~Admin();
};
