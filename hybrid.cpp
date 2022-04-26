#include<iostream.h>
#include<conio.h>
class stud
{
 protected:
 int rollno;
 public:
 void get();
 void put();
 };
 void stud::get()
 {
 cout<<"\n enter the rollno";
 cin>>rollno;
 }
 void stud::put()
 {
 cout<<"\n rollno is:"<<rollno;
 }
 class test:public stud
 {
 protected:
 int sub1,sub2;
 public:
 void getmar();
 void putmar();
 };
 void test::getmar()
 {
 cout<<"\n enter the marks of sub1:";
 cin>>sub1;
 cout<<"\n enter the marks of sub2:";
 cin>>sub2;
 }
 void test::putmar()
 {
 cout<<"\n sub1:"<<sub1;
 cout<<"\n sub2:"<<sub2;
 }
 class result:public test
 {
 protected:
  int total;
  public:
  void display();
  };
  void result:: display()
  {
  total=sub1+sub2;
  put();
  putmar();
  cout<<"\n total :"<<total;
  }
  void main()
  {
    clrscr();
    result r;
    r.get();
    r.getmar();
    r.display();
    getch();
  }