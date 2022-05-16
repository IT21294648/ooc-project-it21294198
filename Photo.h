#pragma once
#include <cstring>
class Photo
{
	private:
		int photoID;
		char location[50];
		float size;

	public:
		Photo()
		{
			photoID = 0;
			strcpy(location, "images/default.png");
			size = 32.0;
		};
		Photo(int pPhotoID, const char pLocation[], float pSize)
		{
			photoID = pPhotoID;
			strcpy(location, pLocation);
			size = pSize;
		};
		void displayPhoto();
		void showDetails();
		~Photo();
};

