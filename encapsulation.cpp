#include<iostream.h>
#include<conio.h>
class student
{
  private:
		 int m1,m2,roll_no,total;
		 float avg;
		 char name[20];
  public:
		 void get();
		 void put();
};
void student::get()
{
  cout<<"\n Enter roll number:";
  cin>>roll_no;
  cout<<"\n Enter name:";
  cin>>name;
  cout<<"\n Enter marks in subject 1:";
  cin>>m1;
  cout<<"Enter maks in subject 2:";
  cin>>m2;
}
void student::put()
{
  total=0;
  total=m1+m2;
  avg=total/2;
  cout<<"\n";
  cout<<"\n output is:";
  cout<<"\n roll number =>   \t\t";
  cout<<roll_no;
  cout<<"\n name =>   \t\t\t";
  cout<<name;
  cout<<"\n marks is subject 1 =>   \t";
  cout<<m1;
  cout<<"\n marks is subject 2 =>   \t";
  cout<<m2;
  cout<<"\n total marks =>   \t\t";
  cout<<total;
  cout<<"\n Average =>   \t\t\t";
  cout<<avg;
}
void main()
{
clrscr();
student s;
s.get();
s.put();
getch();
}