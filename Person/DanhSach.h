#pragma once
#include<iostream>
#include"Person.h"
using namespace std;
#define MAX 100
class DanhSach
{
protected:
	Person* DS[MAX];
	int n;
public:
	void Nhap();
	void Xuat();
};

