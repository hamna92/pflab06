#include <iostream>
using namespace std;
char calculategrade(int marks);
main()
{
 int marks;
 char grade;
 cout<<"enter marks:";
 cin>>marks; 
 char result=calculategrade(marks);


}
  char calculategrade(int marks)
{
  char result=calculategrade(marks);


 
 
 if(marks<50)
 {
    result= 'f';
 }
 else if(marks>50&&marks<60)
  {
   result='e';
  }
  else if(marks>61&&marks<70)
  {
   result= 'd';
  }
  else if(marks>71&&marks<81)
  {
   result= 'c';
  }
  else if(marks>81&&marks<85)
  {
    result= 'b';
  }
  else if(marks>85)
  {
   result= 'a';
  }
    return result;
}
