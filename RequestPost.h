#pragma once

#include "Post.h"
#include "Date.h"
#include "PostType.h"
#include <cstring>
class RequestPost: public Post
{
private:
      float price;
      float landArea;
      char address[100];
public:
	     RequestPost()
           {
            price=0.0;
            landArea=0.0
            strcpy(address,"default")
           };

	     RequestPost(float rprice,float rlandArea,const char raddress[100], int postId , User *user )
            : Post( postId, Title[30], location[30], Province[30], description[100], City[30], District[30], photos[5], date, *complaint[2],*postType[1],*user)
           {
            price=rprice;
            landArea=rlandArea;
            strcpy(address,raddress);
           

           };
      void setSPdetails (float rprice , float rlandarea, string raddress  , int rpostId , User *ruser ,  date  rdate, photo rphotos[10]);
	void displaySPdetails();
      ~RequestPost();
};

