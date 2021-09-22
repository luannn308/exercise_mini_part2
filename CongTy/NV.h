#pragma once
#include<iostream>
#include<string>
using namespace std;
class NV
{
protected:
	string ten;
	string ngay;
public:
	NV();
	~NV();
	virtual void Nhap();
	virtual void Xuat();
};
class NVSX :public NV {
protected:
	float tien_luong_co_ban;
	int so_san_pham;
public:
	void Nhap();
	void Xuat();
};
class NVVP :public NV {
protected:
	int ngay_lam;
public:
	void Nhap();
	void Xuat();
};

