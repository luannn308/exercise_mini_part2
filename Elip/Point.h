#pragma once
#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point();
	Point(int, int);
	~Point();
	friend istream& operator>>(istream& is, Point& a) {
		cout << "Nhap x: ";
		is >> a.x;
		cout << "Nhap y: ";
		is >> a.y;
		return is;
	}
	friend ostream& operator<<(ostream& os, Point& a) {
		os << "Toa do: " << "(" << a.x << "," << a.y << ")";
		return os;
	}
};

