class CHinhChuNhat
{
private:
	double ChieuDai, ChieuRong;
public:
	CHinhChuNhat();
	CHinhChuNhat(double ChieuDai, double ChieuRong);
	~CHinhChuNhat();
	void Nhap();
	double tinhChuVi();
	double tinhDienTinh();
};