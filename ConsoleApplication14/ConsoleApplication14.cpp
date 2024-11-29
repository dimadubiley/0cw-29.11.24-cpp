#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point () {}
	Point (int a, int b) : x(a), y(b){}
	void Init(int a, int b)
	{
		x = a;
		y = b;
	}
	void Print() const
	{
		cout << "X: " << x << "\tY: " << y << endl;
	}
	int GetX()const
	{

		return x;
	}
	int GetY() const
	{
		return y;
	}
	Point Plus(Point& b) const
	{
		return Point (x + b.x, y + b.y);
	}
	Point Minus(Point& b) const
	{
		return Point(x - b.x, y - b.y);
	}
	Point Multiply(Point& b) const
	{
		return Point(x + b.x, y * b.y);
	}
	Point Divide(Point& b) const
	{
		return Point(x / b.x, y / b.y);
	}
};

int main()
{
	Point a(10, 20);
	a.Print();
	a.Init(1, 2);
	a.Print();

	const Point b(20, 30);
	b.Print();
	b.GetX();
	Point res = b.Plus(a);
	Point res = b.Minus(a);
	Point res = b.Multiply(a);
	Point res = b.Divide(a);
}