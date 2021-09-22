#pragma once
#include"Point.h"
class Elip
{
protected:
	Point Tam;
private:
	float BKNgan;
	float BKDai;
public:
	Elip();
	Elip(Point, float, float);
	~Elip();
	virtual void Nhap();
	virtual void Xuat();
};
class Circle :public Elip 
{
protected:
	float BK;
public:
	Circle();
	Circle(Point, float);
	~Circle();
	void Nhap();
	void Xuat();
	void Draw();
};

