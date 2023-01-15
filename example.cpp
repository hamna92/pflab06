#include <iostream>
using namespace std;
int isGreatest(int number1,int number2, int number3);
main()
{
 int number1;
 int number2;
 int number3;
 isGreatest(78,78,78);
 cout<<"enter number1:";
 cin>>number1;
 cout<<"enter number2:";
 cin>>number2;
 cout<<"enter number3:";
 cin>>number3;

 
}
 int isGreatest(int number1,int number2, int number3)
 {
    int greatest;

      if(number1>number2&& number1>number3);
  {
   greatest =number1;
  } 
 else if(number2>number1&& number2>number3);
  {
    greatest=number2;
  } 
 else if(number3>number1&& number3>number2);
  {
    greatest=number3;
  } 
   else 
        {
        greatest=number2;
        }
   return greatest;
}
  