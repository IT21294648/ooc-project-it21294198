#pragma once

#include "Post.h"
#include "Date.h"
#include "PostType.h"
#include <cstring>

class SalePost: public Post
{
private:
      float maxPrice;
      float minPrice;
      float maxArea;
      float minArea;
      int distance;
public :
	SalePost()
            {
             maxPrice=0.0;
             minPrice=0.0;
             maxArea=0.0;
             minArea=0.0;
             distance=0.0;
            };

SalePost( float smaxPrice,float sminPrice,float smaxArea,float sminArea,int sdistance,int pid,const char title[30],const char locate[30],const char descript[100]
,const char city[30],const char district[30],const char province[30],Photo sphotos[5],Date sdate,Complaint *scomplaint[2],PostType *spostType[1],User *suser)
	: Post( pid, title, locate, descript,city, district,province,rphotos,rdate,rcomplaint,*rpostType,ruser)
            {
             maxPrice=smaxPrice;
             minPrice=sminPrice;
             maxArea=smaxArea;
             minArea=sminArea;
             distance=sdistance;
            };


	void setPriceRange( float smaxPrice  , float sminPrice ); 
	void setAreaRange( float smaxArea  , float sminArea ); 
	void setRPdetails ( int sdistance );
	void displayRPdetails();
      ~SalePost();
};

