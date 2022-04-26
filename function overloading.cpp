
	#include<iostream.h>
#include<conio.h>
class swapdata
{
	public:
		void swap(int x,int y)
		{
			int t;
			t=x;
			x=y;
			y=t;
			cout<<"\n after swaping:"<<x<<"\t"<<y;
		}
		void swap(char x,char y)
		{
			char t;
			t=x;
			x=y;
			y=t;
			cout<<"\n after swaping:"<<x<<"\t"<<y;
			}
		};
	void main()
	{
		int a,b;
		char p,q;
		clrscr();
		cout<<"\nEnter the two int:\t";
		cin>>a>>b;
		cout<<"\nEnter the two char:\t";
		cin>>p>>q;
		swapdata INT;
		cout<<"\n before swapping :\n"<<a<<"\t"<<b<<"\t"<<p<<"\t"<<q;
		INT.swap(a,b);
		INT.swap(p,q);
		getch();
	}
