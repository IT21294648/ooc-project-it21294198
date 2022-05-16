#include "Date.h"
#include "Complaint.h"
#include "PostType.h"
#include "User.h"
#include "Photo.h"
#include <cstring>
class Post{
protected:
	int postId;
	char Title[30];
	char location[30];
	char Province[30];
	char description[100];
	char City[30];
	char District[30];
	Photo photos[5];
	Date date;
	Complaint *complaint[2];
	PostType *postType[1];
	User *user;
	
public:
	Post(){
		postId=0;
		strcpy(Title,"Default");
		strcpy(location,"Default");
		strcpy(description,"Default");
		strcpy(City,"Default");
		strcpy(District,"Default");
		strcpy(Province,"Default");
	};
	Post(int pid,const char title[30],const char locate[30],const char descript[100],const char city[30],const char district[30],const char province[30]){
		postId=0;
		strcpy(Title,title);
		strcpy(location,locate);
		strcpy(description,descript);
		strcpy(City,city);
		strcpy(District,district);
		strcpy(Province,province);
	};

	void setPostId(int pid);
	int getPostId();
	void setPostDetails(int pid,const char title[30],const char locate[30],const char descript[100],const char city[30],const char district[30],const char province[30]);
	void addComplaints(Complaint *c1,Complaint *c2);
	void addDate();
	void addpostType(PostType *pType1);
	void addPhotos(Photo *p1,Photo *p2,Photo *p3,Photo *p4,Photo *p5);
	void displayPostDetails();
	void receivePayment(Payment payment);
	~Post();
}



















