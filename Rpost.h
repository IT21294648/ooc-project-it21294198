#include "post.h"
#include "Date.h"
#include "Post_Type.h"
#include <cstring>
class RequestPost: public Post
{
private:
      float price;
      float landArea;
      char address[100];
public:
	     RequestPost()
           {
            price=0.0;
            landArea=0.0
            strcopy(address,"default")
           };

	     RequestPost(float rprice,float rlandArea,const char raddress[100], int postId , User *user )
            : Post(pId,*suser,title[30],locate[30],descript[100],city[30],district[30],province[30])
           {
            price=rprice;
            landArea=rlandArea;
            strcopy(address,raddress);
           

           };
      void setSPdetails (float rprice , float rlandarea, string raddress  , int rpostId , User *ruser ,  date  rdate, photo rphotos[10]);
	void displaySPdetails();
      ~RequestPost()
};

