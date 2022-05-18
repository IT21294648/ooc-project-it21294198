#pragma once
#include "Date.h"
#include<cstring>

class Payment{

private:
      char type;
      int id;
      char method[10];
      float amount;
      Date *paymentdate;

public:
    Payment(){
        type = 'A';
        id = 0;
        strcpy(method,"Online");
        amount = 0.0;
    }
    Payment(char ptype,int pid,const char pmethod[10],float pamount){
        type = ptype;
        id = pid;
        strcpy(method,pmethod);
        amount = pamount;
    }
    void getAmout(float pamount);
    void enterDetails(char ptype,int pid,float pmethod);
    float calculateTotal();
    void calculateEndDate(Date edate);
    void displayDetails();
    ~Payment();
};
