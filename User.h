#include "Photo.h"
#include "Post.h"
#include "Payment.h"
#include <cstring>

#pragma once

class User
{
protected:
	int userID;
	char name[25];
	char address[100];
	char email[50];
	char password[50];
	char about[400];
	char status[10];
	Photo*image;
	
public:
	User()
	{
		userID = 00000;
		strcpy(name, "Default");
		strcpy(address, "Default");
		strcpy(email, "Default");
		strcpy(password, "Default");
		strcpy(about, "Default");
		strcpy(status, "Default");
		image = new Photo();
	};
	
	User(int pUid, const char pName[25], const char pAddress[100], const char pEmail[50], const char pass[50], const char pAbout[400], const
char pStatus[10], Photo*pImage)
{
				userID = pUid;
				strcpy(name, pName);
				strcpy(address, pAddress);
				strcpy(email, pEmail);
				strcpy(password, pass);
				strcpy(about, pAbout);
				strcpy(status, pStatus);
				image = pImage;
  };
			
	void setDetails(int pUid, const char pName[25], const char pAddress[100], const char pEmail[50], const char pass[50], const char pAbout[400], const char pStatus[10], Photo*pImage);
	void makePayment(Payment payment);
	void getUserDetails();
	void viewPost(Post post);
	~User();
	
};
