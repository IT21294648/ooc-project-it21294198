
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
	Date date1;
	Date date2(1, 1, 2021);

	Photo photo1;
	Photo photo2(1, "images/photo2.png", 32);

	PostType postType1;
	PostType postType2(1, 2000.0, "Silver", "The post will be valid for 60 days");

	Complaint complaint1;
	Complaint complaint2(1, "false advertisement", "the land does not match the given details", new Date(), false, new User());

	Payment payment1;
   	Payment payment2(1001,'B',"Card",500.00,new Date());
}


