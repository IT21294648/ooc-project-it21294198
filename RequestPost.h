#pragma once
#include "PostType.h"
#include "Date.h"
#include "Post.h"
#include "User.h"
class RequestPost : public Post{
private:
	float maxPrice;
	float minPrice;
	float maxArea;
	float minArea;
	int distance;

public:
	RequestPost()	:Post(){
		maxPrice = 0.0;
		minPrice = 0.0;
		maxArea = 0.0;
		minArea = 0.0;
		distance = 0;
	}
	RequestPost( float pMaxprice,  float pMinprice,  float pMaxarea,  float pMinarea,  int pDistance,  int pId, const char pTitle[], const char pLocation[], const char pCity[], const char pDistrict[], const char pProvince[], const char pDescription[],  PostType* pType,  Date* pDate,  User* pOwner)
	:Post(pId, pTitle, pLocation, pCity, pDistrict, pProvince, pDescription, pType, pDate, pOwner)	{
		maxPrice = pMaxprice;
		minPrice = pMinprice;
		maxArea = pMaxarea;
		minArea = pMinarea;
		distance = pDistance;
	}
	void setPriceRange( float smaxPrice  , float sminPrice ); 
	void setAreaRange( float smaxArea  , float sminArea ); 
	void setRPdetails ( int sdistance );
	void displayRPdetails();
	~RequestPost(){}
};