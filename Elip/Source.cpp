#include"Elip.h"
#include<iostream>
using namespace std;
int main() {
	int k;
	Elip* a[100];
	for (int i = 0; i < 1; i++) {
	MENU:cout << "Chon 1 hoac 2 : ";
	cout << "1.Elip\t2.Circle\n";
	cin >> k;
	if (k == 1) {
		a[i]=new Elip;
		a[i]->Nhap();
		a[i]->Xuat();
	}
	if (k == 2) {
		a[i] = new Circle;
		a[i]->Nhap();
		a[i]->Xuat();
	}
	}
	return 0;
}