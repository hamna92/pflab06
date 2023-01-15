#include <iostream>
using namespace std;
string checkSpeed(float speed);
main()
{
  float speed;
  string result;
  cout<<"enter the speed";
  cin>>speed;
  result=checkSpeed(speed);
 }
 string checkSpeed(float speed)
 {
  string result;
  if(speed<=10)
  {
    result="slow";
  }
  if(speed>10&&speed<=50)
  {
    result="average";
  }
  return result;
}