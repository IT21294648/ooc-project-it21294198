#pragma once
#include <cstring>
class PostType{
private:
	int id;
	float price;
	char name[100];
	char description[500];

public:
	PostType(){
		id = 0;
		price = 0.0;
		strcpy(name,"default");
		strcpy(description,"default");
	}
	PostType(int pId, float pPrice, const char pName[], const char pDescription[])
	{
		id = pId;
		price = pPrice;
		strcpy(name,pName);
		strcpy(description,pDescription);
	}

	void setDetails(int pTypeID, float pPrice, const char pNamep[], const char pDescription[]);
	void showDetails();
	float calculatePrice();
	~PostType(){}
};