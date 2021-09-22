#include "Person.h"
Person::Person() {
	name = "\0";
	day = "\0";
}
Person::Person(string n, string d) {
	name = n;
	day = d;
}
Person::~Person() {}
void Person::Nhap() {
	cout << "Nhap Ten: ";
	getline(cin, name);
	cout << "Nhap ngay sinh: ";
	getline(cin, day);
}
void Person::Xuat() {
	cout << name << "\t" << day << "\t";
}

SinhVien::SinhVien():Person(){
	mssv = "\0";
}
SinhVien::SinhVien(string n, string d, string ms):Person(n,d){
	mssv = ms;
}
SinhVien::~SinhVien() {}
void SinhVien::Nhap() {
	Person::Nhap();
	cout << "Nhap MSSV: ";
	getline(cin, mssv);
}
void SinhVien::Xuat() {
	Person::Xuat();
	cout << mssv << "\n";
}

HocSinh::HocSinh() :Person() {
	cap = 0;
}
HocSinh::HocSinh(string n, string d, int c) : Person(n, d) {
	cap = c;
}
HocSinh::~HocSinh(){}
void HocSinh::Nhap() {
	Person::Nhap();
	cout << "Nhap cap hoc: ";
	cin >> cap;
	cin.ignore();
}
void HocSinh::Xuat() {
	Person::Xuat();
	cout << cap << "\n";
}

CongNhan::CongNhan() :Person() {
	luong = 0;
}
CongNhan::CongNhan(string n, string d, int l) : Person(n, d) {
	luong = l;
}
CongNhan::~CongNhan(){}
void CongNhan::Nhap() {
	Person::Nhap();
	cout << "Nhap luong: ";
	cin >> luong;
	cin.ignore();
}
void CongNhan::Xuat() {
	Person::Xuat();
	cout << luong << "\n";
}

NgheSi::NgheSi():Person() {
	nickName = "\0";
}
NgheSi::NgheSi(string n, string d, string s) : Person(n, d) {
	nickName = s;
}
NgheSi::~NgheSi(){}
void NgheSi::Nhap() {
	Person::Nhap();
	cout << "Nhap Nghe danh: ";
	getline(cin, nickName);
}
void NgheSi::Xuat() {
	Person::Xuat();
	cout << nickName << "\n";
}

CaSi::CaSi() :Person() {
	fanClub = "\0";
	nickName = "\0";
}
CaSi::CaSi(string n, string d, string f, string s):Person(n,d) {
	fanClub = f;
	nickName = s;
}
CaSi::~CaSi(){}
void CaSi::Nhap() {
	Person::Nhap();
	cout << "Nhap ten FanClub: ";
	getline(cin, fanClub);
	cout << "Nhap Nghe danh: ";
	getline(cin, nickName);
}
void CaSi::Xuat() {
	Person::Xuat();
	cout << fanClub << "\t" << nickName << "\n";
}