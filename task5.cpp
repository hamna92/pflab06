#include <iostream>
using namespace std;
float totalincome(string screen,int no_of_rows,int columns );
main()
{
 string screen;
 int no_of_rows;
 int columns;
 cout<<"enter the screen:";
 cin>>screen;
 cout<<"enter the no_of_rows:";
 cin>>no_of_rows;
 cout<<"enter the columns:";
 cin>>columns;
 int result;
 result=totalincome(screen,no_of_rows,columns);

}
 float totalincome(string screen ,int no_of_rows,int columns )
{
 float result;
 if(screen=="premier"&&columns==10&&no_of_rows==12)
 {   
    result=12.00*columns*no_of_rows;
 }
 else if(screen=="normal"&&columns==21&&no_of_rows==13)
 {
    result=7.50*columns*no_of_rows;
 }
 else if(screen=="discount"&&columns==21&&no_of_rows==13)
 {
    result=5.00*columns*no_of_rows;
 }



}
 