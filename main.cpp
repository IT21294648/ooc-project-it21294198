#include <iostream>
#include "Post.h"
#include "SalePost.h"
#include "RequestPost.h"
#include "User.h"
#include "Moderator.h"
#include "Admin.h"
#include "Complaint.h"
#include "PostType.h"
#include "Date.h"
#include "Photo.h"
#include "Payment.h"


int main() {
    Payment payment1;
    Payment payment2('B',1001,"Card",500.00);

    Complaint complaint1;
    Complaint complaint2(1, "false information", "The seller has provided wrong details about the sale", new Date(15,5,2022), true, new User(), new Post());

    Date date1;
    Date date2(14,5,2022);

    Photo photo1;
    Photo photo2(1,"images/image1.png",32.0);

    PostType postType1;
    PostType postType2(1, 2000.00, "featured", "The post will be displayed on top of the home page");

    Moderator mod1;
    Moderator mod2(0005, "Sunil", "No 89, Kandy Road, Kandy", "sunilp@gmail.com",  "password123", "hello world", "Valid", new Photo());

    Post post1;
    Post post2(001,"Land for Sale in Katugasthota","6.9291N,79.9828E","12 Acre Land is available for sale closer to Kandy Town. Price Negotiable","Katugasthota","Kandy","Central Province");

    RequestPost requestPost1;
    RequestPost requestPost2(500000,35,"33/5B Bhagya Road, Colombo", 0003 , "Nimal Perera" );

    SalePost SalePost1;
    SalePost salepost2( 600000,550000,60,35,5, 001  ,"Land for Sale Gamapaha","7.0840° N, 80.0098° E","Land for Sale","Gampaha","Gampaha","Western Province", new Photo(),new Date(10,5,2022)," ","1","Kamal Fernando" );
        
     //user
    User user1;
    User user2(00001, "Nimal", "No 68, Colombo Road, Colombo", "nimal007@gmail.com", "Fak3pa44w0rd", "hi I'm Nimal", "Valid", new Photo());

    //admin
    Admin admin1;
    Admin admin2(0001, "Kamal", "No 89, Kandy Road, Kandy", "iamadmin@gmail.com",  "abc123ADm1n", "hi im kamal", "Valid", new Photo());
}
