#pragma once
#include "Date.h"
#include "Post.h"
#include "User.h"
#include <cstring>

class Complaint
{
	private:
		int complaintID;
		char complaintType[20];
		char description[500];
		Date *date;
		bool reviewed;
		User* owner;
		Post* post;

	public:
		Complaint()
		{
			complaintID = 0;
			strcpy(complaintType, "Default");
			strcpy(description, "Default");
			date = new Date();
			reviewed = false;
		};

		Complaint(int pComplaintID, const char pComplaintType[], const char pDescription[], Date* pDate, bool pReviewed, User* pOwner, Post* pPost)
		{
			complaintID = pComplaintID;
			strcpy(complaintType, pComplaintType);
			strcpy(description, pDescription);
			date = pDate;
			reviewed = pReviewed;
			owner = pOwner;
			post = pPost;
		};

		void setDetails(int pComplaintID, const char pComplaintType[], const char pDescription[], Date* pDate, bool pReviewed, int pOwnerID, int pPostID);
		void showDetails();
		User* getOwner();
		Post* getComplainedPost();
		~Complaint();
};









