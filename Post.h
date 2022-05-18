#pragma once
#include <cstring>
#include "PostType.h"
#include "Date.h"
#include "User.h"
class Post{
protected:
	int id;
	char title[100];
	char location[50];
	char city[100];
	char district[100];
	char province[100];
	char description[500];
	PostType* type;
	Date* date;
	User* owner;

public:
	Post(){
		id = 0;
		strcpy(title,"default");
		strcpy(location,"default");
		strcpy(city,"default");
		strcpy(district,"default");
		strcpy(province,"default");
		strcpy(description,"default");
		type = new PostType();
		date = new Date();
		owner = new User();
	}
	Post( int pId, const char pTitle[], const char pLocation[], const char pCity[], const char pDistrict[], const char pProvince[], const char pDescription[],  PostType* pType,  Date* pDate,  User* pOwner)
	{
		id = pId;
		strcpy(title,pTitle);
		strcpy(location,pLocation);
		strcpy(city,pCity);
		strcpy(district,pDistrict);
		strcpy(province,pProvince);
		strcpy(description,pDescription);
		type = pType;
		date = pDate;
		owner = pOwner;
	}
	void setPostId(int pid);
	int getPostId();
	void setPostDetails();
	void addComplaints(Complaint *c1,Complaint *c2);
	void addDate();
	void addpostType(PostType *pType1);
	void addPhotos(Photo *p1,Photo *p2,Photo *p3,Photo *p4,Photo *p5);
	void displayPostDetails();
	void receivePayment(Payment payment);
};




