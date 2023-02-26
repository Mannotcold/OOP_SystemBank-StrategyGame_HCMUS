#pragma once
#include"CCongTrinh.h"
class QuaiVat
{
private:
	int X;
	int Y;
public:
	QuaiVat();
	~QuaiVat();
	virtual QuaiVat* Clone() = 0;//Phương thức nhân bản cài đặt đa hình
	virtual string LayTenQuaiVat() = 0;
	virtual void NhapQuaiVat();//Nhap thong tin quai thu
	virtual void XuatQuaiVat();//Xuat thong tin quai thu

};
