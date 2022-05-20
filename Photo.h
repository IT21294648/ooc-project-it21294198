//Name: H.A.R.S. Hapuarachchi
//IT Number: it21296246
//Center: Malabe
//Group: MLB_05.02_09

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