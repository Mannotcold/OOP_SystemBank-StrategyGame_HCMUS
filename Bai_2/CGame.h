#pragma once
#include"CCongTrinh.h"
#include"CQuaiVat.h"
class Game
{
private:
	static vector<CongTrinh*>ListCongTrinh;//vector cac doi tuong ban mau
	static vector<QuaiVat*>ListQuaiVat;//vector cac doi tuong ban mau
public:
	Game();
	~Game();
	void NhapCongTrinh();//Nhap thong tin cua cong trinh
	void XuatCongTrinh();//Xuat thong tin cua cong trinh
	void NhapQuaiVat();//Nhap thong tin cua quai thu
	void XuatQuaiVat();//Xuat thong tin cua quai thu
	static void ThemDoiTuongMau(CongTrinh* ns);//Method them doi tuong ban mau vao danh sach ban mau 
	static CongTrinh* TaoDoiTuongCongTrinh(string newTen);//Method ho tro tao doi tuong dua theo ten
	static void ThemDoiTuongMau(QuaiVat* ct);
	static QuaiVat* TaoDoiTuongQuaiVat(string newTen);
};

