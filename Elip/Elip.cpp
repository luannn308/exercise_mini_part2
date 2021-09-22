#include "Elip.h"
#include<iostream>
using namespace std;
Elip::Elip() {
	Tam;
	BKDai = 0;
	BKNgan = 0;
}
Elip::Elip(Point i, float D, float N) {
	Tam = i;
	BKDai = D;
	BKNgan = N;
}
Elip::~Elip(){}
void Elip::Nhap() {
	cout << "Nhap toa do tam: ";
	cin >> Tam;
	cout << "Ban kinh dai: ";
	cin >> BKDai;
	cout << "Ban kinh ngan: ";
	cin >> BKNgan;
	cin.ignore();
}
void Elip::Xuat() {
	cout << "Elip: " << Tam << ", Ban kinh dai: " << BKDai << ", Ban kinh dai: " << BKNgan;
}
Circle::Circle() {
	Tam;
	BK = 0;
}
Circle::Circle(Point i, float r) {
	Tam = i;
	BK = r;
}
Circle::~Circle(){}
void Circle::Nhap() {
	cout << "Nhap toa do tam: ";
	cin >> Tam;
	cout << "Ban kinh: ";
	cin >> BK;
}
void Circle::Xuat() {
	cout << "Circle: " << Tam << ", Ban kinh: R = " << BK;
}
void Circle::Draw() {/*Do nothing*/}