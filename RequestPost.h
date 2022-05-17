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
            landArea=0.0;
            strcpy(address,"default");
           };

 RequestPost(float rprice,float rlandArea,const char raddress[100],int pid,const char title[30],const char locate[30],const char descript[100],const char city[30]
 ,const char district[30],const char province[30],Photo rphotos[5],Date rdate,Complaint *rcomplaint[2],PostType *rpostType[1],User *ruser)
            : Post( pid, title, locate, descript,city, district,province,rphotos,rdate,rcomplaint,rpostType,ruser)
           {
            price=rprice;
            landArea=rlandArea;
            strcpy(address,raddress);
           };
      void setSPdetails (float rprice , float rlandarea, const char raddress  , int rpostId , User *ruser ,  Date  rdate, Photo rphotos[10]);
	void displaySPdetails();
      ~RequestPost();
};

