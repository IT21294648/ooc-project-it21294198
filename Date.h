#pragma once
class Date
{
	private:
		int day;
		int month;
		int year;

	public:
		Date()
		{
			day = 1;
			month = 1;
			year = 1970;
		};

		Date(int pDay, int pMonth, int pYear)
		{
			day = pDay;
			month = pMonth;
			year = pYear;
		};
		
		void setDetails(int pDay, int pMonth, int pYear);
		char* getDateString();
		Date* calculateDate(int days);
		int getDay();
		int getMonth();
		int getYear();
		~Date();
};

