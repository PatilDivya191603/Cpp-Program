#include<iostream.h>
#include<conio.h>
void main()
{
   int a,b,t;
   clrscr();
   cout<<"befor a swap value of a and b=>\n";
   cout<<"enter value of a =>";
   cin>>a;
   cout<<"enter value of b =>";
   cin>>b;
   //t=a;
   //a=b;
   //b=t;
   a=a+b;
   b=a-b;
   a=a-b;
   cout<<"after swap value are =>\n";
   cout<<"value of a =>"<<a<<endl;
   cout<<"value of b =>"<<b<<endl;
   getch();
}