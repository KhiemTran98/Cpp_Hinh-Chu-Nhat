#include<iostream>
#include<conio.h>
#include"CHinhChuNhat.h"
using namespace std;
void main()
{
	//CHinhChuNhat *hcn = new CHinhChuNhat();
	//cout << "Nhap hinh chu nhat" << endl;
	//hcn->Nhap();

	CHinhChuNhat* hcn = new CHinhChuNhat(0, 0);

	cout << "\nChu vi: " << hcn->tinhChuVi();
	cout << "\nDien tich: " << hcn->tinhDienTinh();

	delete hcn;

	_getch();
}