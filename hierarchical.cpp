#include<iostream.h>
#include<conio.h>
class stud
{
	char name[20];
	int prno;
	public:
		void get();
		void put();
};
void stud::get()
{
	cout<<"\nEnter name & permanent regestraction no:\n";
	cin>>name>>prno;
}
void stud::put()
{
	cout<<"\nThe name & permanent reg. no is:\n";
	cout<<"\nName:\n"<<name<<"\tpermanent reg. no.:\n"<<prno;
}
class art:public stud
{
	protected:
		int fcode;
		char  sub[20];
	public:
		void get1();
		void put1();
};
void art::get1()
{
	get();
	cout<<"\nFaculty code & subject name:\n";
	cin>>fcode>>sub;
}
void art::put1()
{
	put();
	cout<<"\nFaculty code:\n"<<fcode<<"\tsubject name:\n"<<sub;
}
class medical:public stud
{
	int fc;
	char s1[20];
	public:
		void get2();
		void put2();
};
void medical::get2()
{
	get();
	cout<<"\nEnter faculty code & subject name:\n";
	cin>>fc>>s1;
}
void medical::put2()
{
	put();
	cout<<"\nFaculty code:\n"<<fc<<"\t subject name:"<<s1;
}
void main()
{
	clrscr();
	art a;
	cout<<"\nArt student";
	a.get1();
	a.put1();
	cout<<"\n*******************\n";
	medical m;
	cout<<"\nMedical student";
	m.get2();
	m.put2();
	getch();
}