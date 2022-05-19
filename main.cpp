
#include "Post.h"
#include "SalePost.h"
#include "RequestPost.h"
#include "User.h"
#include "Moderator.h"
#include "Admin.h"
#include "Complaint.h"
#include "PostType.h"
#include "Date.h"
#include "Photo.h"
#include "Payment.h"

int main()
{
	SalePost salepost;
	RequestPost requestPost;
	User user;
	
	Admin admin;
	Complaint complaint;
	PostType postType;
	Date date;
	Photo photo;
	
	Payment payment1;
  	Payment payment2(1001,'B',"Card",500.00,new Date());
	
	User user1;
  	User user2(00000, "Nimal", "No 44 Kandy Road, Kandy", "nimal007@gmail.com", "n1m4Lr0X", "I am nimal", "valid", new Photo());

	Post post1;
	Post post2(1,"Land for sale in Maharagama","7.2906N,80.6337E","Maharagama","Colombo","Western Province","Land available for sale in the heart of Maharagama. Price Negotiable", new PostType(), new Date(), new User());

	Moderator moderator1;
	Moderator moderator2(3,"Sunil Perera","27 Kandy Road Katugasthota","sunilp@gmail.com","password@123","Hello World","Available", new Photo());
	
}


