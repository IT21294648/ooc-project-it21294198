#include <cstring>
class PostType
{
	private:
		int typeID;
		float price;
		char name[30];
		char description[500];
	public:
		PostType()
		{
			typeID = 0;
			price = 0.0;
			strcpy(name, "default");
			strcpy(description, "default");
		};
		PostType(int pTypeID, float pPrice, const char pName[], const char pDescription[])
		{
			typeID = pTypeID;
			price = pPrice;
			strcpy(name, pName);
			strcpy(description, pDescription);
		};
		void setDetails(int pTypeID, float pPrice, const char pNamep[], const char pDescription[]);
		void showDetails();
		float calculatePrice();
		~PostType();
};

