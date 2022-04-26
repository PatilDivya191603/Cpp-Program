//program  to demonstrat multiple-inheritance
#include<iostream.h>
#include<conio.h>
class student      //base class
{
       int rollno;
       char name[22];
       public:
		void get();
		void put();
};
class marks
{
      protected:
	     int m1,m2;
      public:
	      void getinfo();
	      void putinfo();
};
class result:public student,public marks
{
      private:
	    int total;
      public:
	    void get_total();
	    void put_total();
};
void student::get()
{
       cout<<"enter roll no =";
       cin>>rollno;
       cout<<"enter name =";
       cin>>name;
}
void student::put()
{
       cout<<"student roll no = "<<rollno<<endl;
       cout<<"nsme = "<<name<<endl;
}
void marks::getinfo()
{
       cout<<"enter 2 subject marks =";
       cin>>m1>>m2;

}
void marks::putinfo()
{
      cout<<"subject 1st marks = "<<m1<<endl;
      cout<<"subject 2nd marks = "<<m2<<endl;
}
void result ::get_total()
{
      get();
      getinfo();
      total=m1+m2;
}
void result::put_total()
{
	put();
	putinfo();
       cout<<"total marks = "<<total<<endl;
}
void main()
{
      clrscr();
      result d;
      //d.get();
      //d.getinfo();
      d.get_total();
      cout<<"*********** output **********"<<endl;
      //d.put();
      //d.putinfo();
      d.put_total();
      getch();
}