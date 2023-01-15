#include <iostream>
using namespace std;
float calculatediscount(string day, string month,int amount);
main()
{
 float amount;
 string day;
 string month;
 cout<<"enter day:";
 cin>>day;
 cout<<"enter month";
 cin>>month;

}
float calculatediscount(string day, string month,int amount)
{
float payable=amount;
if(day=="monday"&&(month=="november"||month=="december"));
{
  payable=amount-(amount*5)/100;
  
 
    return payable;
}

}
