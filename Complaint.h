#pragma once
#include <cstring>
#include "Date.h"
#include "User.h"
#include "Post.h"

class Post; //to compensate for circular dependancy

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
	Complaint(int pId, const char pType[], const char pDescription[], Date* pDate, bool pReviewed, User* pOwner)
	{
		id = pId;
		strcpy(type,pType);
		strcpy(description,pDescription);
		date = pDate;
		reviewed = pReviewed;
		owner = pOwner;
	}

	void setDetails(int pId, const char pType[], const char pDescription[], Date* pDate, bool pReviewed, User* pOwner);
	void showDetails();
	User* getOwner();
	Post* getComplainedPost();
	~Complaint(){}
};