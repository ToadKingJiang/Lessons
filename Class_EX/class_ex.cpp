#include<iostream>
#include<stdio.h>

using namespace std;

class Point
{
private:
	int x;
	int y;
	int z; 
public:
/*	void Point(void)
	{
		x=0;
		y=0;
		z=0;
	}
*/
	inline void SetData(/*int a,int b,int c*/);
	inline void display( Point *p);
	
};

void Point::SetData()
{
	int a,b,c;

	cout<<"Enter 3 num"<<endl;
	cin>>a>>b>>c;
	x=a;
	y=b;
	z=c;
}

void Point::display(Point *p)
{
	cout<<"POINT IS :"<<"("<<p->x<<","<<p->y<<","<<p->z<<")"<<endl;
}

int main()
{
	Point *s;
	s = new Point;
//	s->Point();
	s->SetData();
	s->display(s);
	return 0;
}
