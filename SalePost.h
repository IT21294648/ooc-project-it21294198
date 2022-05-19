#pragma once
#include <cstring>
#include "PostType.h"
#include "Date.h"
#include "Post.h"
#include "User.h"
class SalePost : public Post{
private:
	float price;
	float area;
	char address[100];

public:
	SalePost()	:Post(){
		price = 0.0;
		area = 0.0;
		strcpy(address,"default");
	}
	SalePost( float pPrice,  float pArea, const char pAddress[],  int pId, const char pTitle[], const char pLocation[], const char pCity[], const char pDistrict[], const char pProvince[], const char pDescription[],  PostType* pType,  Date* pDate,  User* pOwner)
	:Post(pId, pTitle, pLocation, pCity, pDistrict, pProvince, pDescription, pType, pDate, pOwner)	{
		price = pPrice;
		area = pArea;
		strcpy(address,pAddress);
	}
	
	void setSPdetails (float rprice , float rlandarea, const char raddress );
	void displaySPdetails();
	~SalePost(){}
};