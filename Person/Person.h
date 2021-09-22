#pragma once
#include<iostream>
#include<string>
using namespace std;
class Person
{
protected:
	string name;
	string day;
public:
	Person();
	Person(string, string);
	~Person();
	virtual void Nhap();
	virtual void Xuat();
};
class SinhVien :public Person {
private:
	string mssv;
public:
	SinhVien();
	SinhVien(string, string, string);
	~SinhVien();
	void Nhap();
	void Xuat();
};
class HocSinh :public Person {
private:
	int cap;
public:
	HocSinh();
	HocSinh(string, string, int);
	~HocSinh();
	void Nhap();
	void Xuat();
};
class CongNhan :public Person {
private:
	int luong;
public:
	CongNhan();
	CongNhan(string, string, int);
	~CongNhan();
	void Nhap();
	void Xuat();
};
class NgheSi :public Person {
private:
	string nickName;
public:
	NgheSi();
	NgheSi(string, string, string);
	~NgheSi();
	void Nhap();
	void Xuat();
};
class CaSi :public Person {
private:
	string fanClub;
	string nickName;
public:
	CaSi();
	CaSi(string, string, string,string);
	~CaSi();
	void Nhap();
	void Xuat();
};

