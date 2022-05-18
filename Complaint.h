#pragma once
#include <cstring>
#include "Date.h"
#include "User.h"
#include "Post.h"

class Complaint{
private:
	int id;
	char type[50];
	char description[500];
	Date* date;
	bool reviewed;
	User* owner;

public:
	Complaint(){
		id = 0;
		strcpy(type,"default");
		strcpy(description,"default");
		date = new Date();
		reviewed = false;
		owner = new User();
	}
	Complaint(int pId, char pType[], char pDescription[], Date* pDate, bool pReviewed, User* pOwner)
	{
		id = pId;
		strcpy(type,pType);
		strcpy(description,pDescription);
		date = pDate;
		reviewed = pReviewed;
		owner = pOwner;
	}

	void setDetails(int pComplaintID, const char pComplaintType[], const char pDescription[], Date* pDate, bool pReviewed, int pOwnerID, int pPostID);
	void showDetails();
	User* getOwner();
	Post* getComplainedPost();
};