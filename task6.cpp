#include <iostream>
using namespace std;
float lowestprice(int km, string time);
main()
{
 int km;
 string time;
 int price;


}
 float lowestprice( int km, string time)
 {
   
     float result;
    if(time== "day" || time == "night" && km<10)
     {
        result=km*0.09;
        cout<<"price";
     }
    else if(time== "day" || time== "night" && km<=20)
    {
        result=km*0.09;
        cout<<"price";
    }
   else if( time== "day" && km<=100)
    {
       result=km*0.06;
       cout<<"price";
    }
     if(time== "night" && km<=100)
     {
        result=km*2.07;
        cout<<"price";
     }
     return result;

 }

 