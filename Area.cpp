#include<stdio.h>
#include<conio.h>
class Rectangle
{int length;
int breadth;
public:
	void getvalue(int x, int y)
	{length=x;
	breadth=y;
	}
	voisd area()
	{int area;
	area=length*breadth;
	cout<<"Area="<<area;
	}
	
};
void main()
{clrscr();
rectangke r;
r.getvalue(10,15);
r.Area();
getch();
}
