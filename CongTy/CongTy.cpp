#include "CongTy.h"
void CongTy::Nhap() {
	cout << "So Nhan Vien: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		int loai;
		cout << "Chon nv: 1.NVSX, 2.NVVP" << endl;
		cin >> loai;
		cin.ignore();
		if (loai == 1) {
			DSNV[i] = new NVSX;
		}
		if (loai == 2)
		{
			DSNV[i] = new NVVP;
		}
			DSNV[i]->Nhap();
	}
}
void CongTy::Xuat() {
	for (int i = 0; i < n; i++)
	{
		DSNV[i]->Xuat();
	}
}