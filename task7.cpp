#include <iostream>
using namespace std;
float cost(string city,string producttype,float quantity);
main()
{
 string city;
 string producttype;
 float quantity;
 cout<<"enter name of city:";
 cin>>city;
 cout<<"enter the producttype:";
 cin>>producttype;
 cout<<"enter the quantity";
 cin>>quantity;
 float pay = cost(city,producttype,quantity);
 cout <<"pay"<<pay;
}

 float cost(string city,string producttype,float quantity)
 {
    float result= 0;
   if(city=="varna")
   {
      if(producttype=="coffee")
      {
        
          result=quantity*0.45;
      }
   }
      if(city=="sofia")
   {
      if(producttype=="beer")
      {
         result=quantity*1.20;
      }
   }
      if(city=="plodiv")
   {
      if(producttype=="peanuts")
      {
    
         result=quantity*1.50;
      }
   }
      if(city=="plodiv")
   {
      if(producttype=="water")
      {
         result=quantity*0.70;
      }
   }
      return result;
     
     
      
  
}