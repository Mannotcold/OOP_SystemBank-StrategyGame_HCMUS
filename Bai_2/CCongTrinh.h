#pragma once
#include <iostream>
#include<string>
#include<vector>
using namespace std;

class CongTrinh
{
private:
	int X;
	int Y;
public:

	CongTrinh(const CongTrinh& ct);
	CongTrinh();
	~CongTrinh();
	virtual CongTrinh* Clone() = 0;//Phương thức nhân bản cài đặt đa hình
	virtual string LayTenCongTrinh() = 0;
	virtual void NhapCongTrinh();//nhap thong tin cua cong trinh
	virtual void XuatCongTrinh();//xuat thong tin cua cong trinh
};


