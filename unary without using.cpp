#include<iostream.h>
#include<conio.h>
class unary
{
 private:
				 int a,b,c;
 public:
				void get();
				void display();
				void operator -();
};
void unary::get()
{
	cout<<"enter the value of a";
	cin>>a;
	cout<<"enter the value of b";
	cin>>b;
	cout<<"enter the value of c";
	cin>>c;
	}
void unary::display()
{
 cout<<"a= "<<a<<endl;
 cout<<"b= "<<b<<endl;
 cout<<"c= "<<c<<endl;
}
void unary::operator -()
{
 a=-a;
 b=-b;
 c=-c;
}
void main()
{
clrscr();
cout<<"-----Unary Operator Overloading without using Friend  Function-----"<<endl<<endl;
 unary u;
 u.get();
 u.display();
 cout<<"---------------------"<<endl;
 -u;
 u.display();
getch();
}