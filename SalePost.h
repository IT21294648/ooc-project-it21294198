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

	SalePost( float smaxPrice,float sminPrice,float smaxArea,float sminArea,int sdistance, int pId  ,User *suser )
      : Post( postId, Title[30], location[30], Province[30], description[100], City[30], District[30], photos[5], date, *complaint[2],*postType[1],*user)
            {
             maxPrice=smaxPrice;
             minPrice=sminPrice;
             maxArea=smaxArea;
             minArea=sminArea;
             distance=sdistance;
             
            };

	void setPriceRange( float smaxPrice  , float sminPrice ); 
	void setAreaRange( float smaxArea  , float sminArea ); 
	void setRPdetails ( int sdistance ,  int spostId  ,User *suser, date sdate , photo sphotos[10] );
	void displayRPdetails();
      ~SalePost();
};

