#pragma once
#include <cstring>
#include "Date.h"
class Payment{
private:
	int id;
	char type;
	char method[30];
	float amount;
	Date* paymentDate;

public:
	Payment(){
		id = 0;
		type = 'A';
		strcpy(method,"default");
		amount = 0.0;
		paymentDate = new Date();
	}
	Payment( int pId,  char pType, const char pMethod[],  float pAmount,  Date* pPaymentdate)
	{
		id = pId;
		type = pType;
		strcpy(method,pMethod);
		amount = pAmount;
		paymentDate = pPaymentdate;
	}

public:
   
    void getAmout(float pamount);
    void enterDetails(char ptype,int pid,float pmethod);
    float calculateTotal();
    void calculateEndDate(Date edate);
    void displayDetails();
    //~Payment();
};
