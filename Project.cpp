#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#ifndef Project_cpu1_file_cpp
#define Project_cpu1_file_cpp
//#ifndef Project_cpu2_file_cpp
//#define Project_cpu2_file_cpp
//#ifndef Project_bus_file_cpp
//#define Project_bus_file_cpp
//#ifndef Project_memory_file_cpp
//#define Project_memory_file_cpp
//#ifndef Project_display_file_cpp
//#define Project_display_file_cpp




// creating the class point2D to be called by all the others (circle, square, rectangle)

class Plataform
{
	public:
		simulate();	
}

//class to calcule the perimeter and area of the shapes selected
class P_A :
{
	public:
		float area, perimeter;
		voi.d area(int c);
		void perimeter(int c);
} 

P_A::area (int c)
{
	if (c==1)
		area = 3.14*radius*radius;
	if (c==2)
		area = 
	if (c==3)
}

//creating the class Circle
class Circle
{	
	Point2D center;
	public: 
		int radius;
		void print();
		void get_center();
		void inside(Point2D coordinate);
};	

Point2D Circle::get_center()
{
	float xc, yc;
	cout << "Chose the coordinates of the center of the circle: " << endl;
	cin >> xc >> yc;
	Point2D p(xc, yc);
}

// creating the class Rectangle
class Rectangle
{	
	Point2D center;
	public: 
		int radius;
		void print();
		float Area();
		void center(Point2D coordinate);
		void inside(Point2D coordinate);
};	

// creating the class Square
class Square
{	
	Point2D center;
	public: 
		int radius;
		void print();
		float Area();
		void center(Point2D coordinate);
		void inside(Point2D coordinate);
};	


void Circle::print(void)
{
	cout << "Radius = " << radius << endl;
}
//void Circle::print(int radius)
//{
//	cout << "Radius = " << radius << endl;
//}


float Circle::Area()
{
	float r = 3.14*radius*radius;
	return r;
}


void Circle::center(float x, float y);
{
	x_center = x;
	y_center = y;
}

void inside()
{
	float a, b;
	cout << "Chose the coordinate to see if it's inside the circle or not: " << endl;
	cin >> a >> b;
	if((a<= (x_center+radius)) && (a >= (x_center-radius)) && b<= (y_center+radius)) && (b >= (y_center-radius)))
	{
		cout << "The point is inside the circle" << endl;
	} 
	else
	{
		cout << "The point is outside the circle" << endl;
	}
}


int main()
{
	int raio;
	Circle c;
	while(true)
	{
		cout << "Tapez le radius du cercle: " << endl;
		cin >> raio;
		if(raio<0 || cin.get(raio) == '\n')
			break;
		c.radius = raio;
		c.print();
		cout << "surface du cercle est : " << c.Area() << endl;
	}

	c.inside;

return 0;
}

