#include<iostream>
using namespace std;

class Rectangle{
	int width, height;
	public: //can be accesed from anywhere
		Rectangle (int,int); //this is constructor function
		int calculate_area()
	{
		return width*height;
	}
	int calculate_perimeter()
	{
		return 2*(width+height);
	}
};
Rectangle::Rectangle ()
{
	width = 5;
	height = 5;
}

Rectangle::Rectangle(int a, int b)
{
	width = a;
	height = b;
}
// :: is a scope operator
// set_values is a function from class rectangle

int main()
{
	Rectangle recta(3,4);
	Rectangle rectb(5,6);
	cout << "Rectangle A area : " << recta.calculate_area() << endl;
	cout << "Rectangle B area : " << rectb.calculate_area() << endl;
	cout << "Rectangle B perimeter : " << rectb.calculate_perimeter() << endl;
	return 0;
}
