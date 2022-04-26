#include<iostream.h>
#include<conio.h>
class fbinary
{
     private:
           int a,b;
     public:
            void get();
             fbinary friend operator +(fbinary f4, fbinary f5);
            void show();
};
void fbinary :: get()
{
     cout<<"Enter Value of a=";
     cin>>a;
     cout<<"Enter Value of b=";
     cin>>b;
}
fbinary operator +(fbinary f4, fbinary f5)
{
     fbinary f6;
     f6.a=f4.a+f5.a;
     f6.b=f4.b+f5.b;
     return(f6);
}
void fbinary :: show()
{
     cout<<"*******************************"<<endl;
     cout<<"addition of two object is="<<endl;
     cout<<"value of a="<<a<<endl;
     cout<<"value of b="<<b<<endl;
     
}
void main()
{
     clrscr();
      fbinary f1,f2,f3;
      f1.get();
      f2.get();
        f3=f1+f2;
      f3.show();
      getch();
}