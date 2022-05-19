#pragma once
#include <cstring>
class Date{
private:
	int day;
	int month;
	int year;

public:
	Date(){
		day = 0;
		month = 0;
		year = 0;
	}
	Date(int pDay, int pMonth, int pYear)
	{
		day = pDay;
		month = pMonth;
		year = pYear;
	}

	void setDetails(int pDay, int pMonth, int pYear);
	char* getDateString();
	Date* calculateDate(int days);
	int getDay();
	int getMonth();
	int getYear();
	~Date(){}
};