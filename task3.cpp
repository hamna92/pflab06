#include <iostream>
using namespace std;
string  checktitle(int age, char gender);
main()
{
 int age;
 char gender;
 cout<<"enter the age:";
 cin>>age;
 cout<<"enter the gender:";
 cin>>gender;
 result=checktitle(age,gender);
}
 
 string  checktitle(int age, char gender)
{
string result;
  if(age>=16&&gender=='m')
  {
    result="Mr";
  }
 else if(age<16&&gender=='m')
 {
    result="Master";
 }
 else if(age>=16&&gender=='w')
 {
  result="Ms";
 }
  return result;
}

 