#include "NV.h"
NV::NV() {
	ten = "\0";
	ngay = "\0";
}
NV::~NV() {}
void NV::Nhap() {
	cout << "Nhap ten: ";
	getline(cin, this->ten);
	cout << "Nhap ngay sinh: ";
	getline(cin, this->ngay);
}
void NV::Xuat() {
	cout << this->ten << "\t" << this->ngay << "\t";
}
void NVSX::Nhap() {
	NV::Nhap();
	cout << "Nhap luong co ban: ";
	cin >>tien_luong_co_ban;
	cout << "Nhap so san pham ban duoc: ";
	cin >>so_san_pham;
	cin.ignore();
}
void NVSX::Xuat() {
	int luong = tien_luong_co_ban + so_san_pham * 5000;
	NV::Xuat();
	cout << luong << "\n";
}
void NVVP::Nhap() {
	NV::Nhap();
	cout << "Nhap so ngay lam: ";
	cin >>ngay_lam;
	cin.ignore();
}
void NVVP::Xuat() {
	int luong = ngay_lam * 100000;
	NV::Xuat();
	cout << luong << "\n";
}