#pragma once
#include <cstring>
class Photo{
private:
	int id;
	char location[100];
	float size;

public:
	Photo(){
		id = 0;
		strcpy(location,"default");
		size = 0.0;
	}
	Photo(int pId, const char pLocation[], float pSize)
	{
		id = pId;
		strcpy(location,pLocation);
		size = pSize;
	}

	void displayPhoto();
	void showDetails();
	~Photo(){}
};