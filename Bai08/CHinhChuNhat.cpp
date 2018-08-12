#include<iostream>
#include"CHinhChuNhat.h"
using namespace std;
CHinhChuNhat::CHinhChuNhat()
{
	ChieuDai = ChieuRong = 0;
}
CHinhChuNhat::CHinhChuNhat(double ChieuDai, double ChieuRong)
{
	this->ChieuDai = ChieuDai;
	this->ChieuRong = ChieuRong;
}
CHinhChuNhat::~CHinhChuNhat() {}
void CHinhChuNhat::Nhap()
{
	cout << "Nhap chieu dai: ";
	cin >> ChieuDai;
	cout << "Nhap chieu rong: ";
	cin >> ChieuRong;
}
double CHinhChuNhat::tinhChuVi()
{
	return (ChieuDai + ChieuRong) * 2;
}
double CHinhChuNhat::tinhDienTinh()
{
	return ChieuDai * ChieuRong;
}