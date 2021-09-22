#include "DanhSach.h"
void DanhSach::Nhap() {
	cout << "Nhap so nguoi: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int nghe;
		cout << "Chon nghe: " << endl;
		cout << "1.Sinh Vien\n2.Hoc Sinh\n3.Cong Nhan\n4.Nghe Si\n5.Ca Si" << endl;
		cin >> nghe;
		cin.ignore();
		if (nghe == 1)	DS[i] = new SinhVien;
		if (nghe == 2)	DS[i] = new HocSinh;
		if (nghe == 3)	DS[i] = new CongNhan;
		if (nghe == 4)	DS[i] = new NgheSi;
		if (nghe == 5)	DS[i] = new CaSi;
		DS[i]->Nhap();
	}
}
void DanhSach::Xuat() {
	for (int i = 0; i < n; i++)
	{
		DS[i]->Xuat();
	}
}