#pragma once
#include <cstring>
#include "Photo.h"
#include "Payment.h"
#include "Post.h"
class User{
Protected:
	int id;
	char name[100];
	char address[100];
	char email[100];
	char password[100];
	char about[500];
	char status[50];
	Photo* profilePhoto;

public:
	User(){
		id = 0;
		strcpy(name,"default");
		strcpy(address,"default");
		strcpy(email,"default");
		strcpy(password,"default");
		strcpy(about,"default");
		strcpy(status,"default");
		profilePhoto = new Photo();
	}
	User( int pId, const char pName[], const char pAddress[], const char pEmail[], const char pPassword[], const char pAbout[], const char pStatus[],  Photo* pProfilephoto)
	{
		id = pId;
		strcpy(name,pName);
		strcpy(address,pAddress);
		strcpy(email,pEmail);
		strcpy(password,pPassword);
		strcpy(about,pAbout);
		strcpy(status,pStatus);
		profilePhoto = pProfilephoto;
	}
	
	
	void setDetails( int pId, const char pName[], const char pAddress[], const char pEmail[], const char pPassword[], const char pAbout[], const char pStatus[],  Photo* pProfilephoto);
	void makePayment(Payment payments);
	void getUserDetails();
	void viewPost(Post post);
	
	//~User();
};
