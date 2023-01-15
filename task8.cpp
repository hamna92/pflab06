#include <iostream>
using namespace std;
float moneyleft(float budget, string type, float quantity);
main()
{
  float budget;
  string type;
  float quantity;
  cout<<"enter the type:";
  cin>>type;
  cout<<"enter the quantity";
  cin>>quantity;
  cout<<"enter the quantity";
  cin>>quantity;
  float result =moneyleft(budget,type,quantity);
  
}
float moneyleft(float budget, string type, float quantity)
{
    float result=0;
  if(type == "vip")
  {
    if(quantity >= 1 || quantity <= 4)
    {
      float left = budget * 0.75;
      float afterT = budget - left;
      float ticket = quantity * 499.99;
      float money = afterT - ticket;
    }
  }  
    if(type == "vip")
  {
    if(quantity >=5  || quantity <=9 )
    {
      float left = budget * 0.60;
      float afterT = budget - left;
      float ticket = quantity * 499.99;
      float money = afterT - ticket;
    }
  }
    if(type == "vip")
  {
    if(quantity >= 10 || quantity <= 24)
    {
      float left = budget * 0.50;
      float afterT = budget - left;
      float ticket = quantity * 499.99;
      float money = afterT - ticket;
    }
  }
    if(type == "vip")
  {
    if(quantity >= 25 || quantity <=49 )
    {
      float left = budget *0.40 ;
      float afterT = budget - left;
      float ticket = quantity * 499.99;
      float money = afterT - ticket;
    }
  }
    if(type == "vip")
  {
    if(quantity== 50 || quantity>50 )
    {
      float left = budget *0.25 ;
      float afterT = budget - left;
      float ticket = quantity * 499.99;
      float money = afterT - ticket;
    }
  }
   if(type == "normal")
  {
    if(quantity >= 1 || quantity <= 4)
    {
      float left = budget * 0.75;
      float afterT = budget - left;
      float ticket = quantity * 249.99;
      float money = afterT - ticket;
    }
  }
    if(type == "normal")
  {
    if(quantity >=5  || quantity <=9 )
    {
      float left = budget * 0.60;
      float afterT = budget - left;
      float ticket = quantity * 249.99;
      float money = afterT - ticket;
    }
  }
    if(type == "normal")
  {
    if(quantity >= 10  || quantity <=24 )
    {
      float left = budget * 0.50;
      float afterT = budget - left;
      float ticket = quantity * 249.99;
      float money = afterT - ticket;
    }
  }
    if(type == "normal")
  {
    if(quantity >=25  || quantity <=49 )
    {
      float left = budget * 0.40;
      float afterT = budget - left;
      float ticket = quantity * 249.99;
      float money = afterT - ticket;
    }
  }
     if(type == "normal")
  {
    if(quantity==50 || quantity>50)
    {
      float left = budget * 0.25;
      float afterT = budget - left;
      float ticket = quantity * 249.99;
      float money = afterT - ticket;
    }
  }
   return  result ; 
}

     
