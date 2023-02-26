#pragma once
#include"CCongTrinh.h"
//lop doi tuong cong trinh tao ra bo binh
class TraiBoBinh :public CongTrinh
{
private:
	int mX;
	int mY;
	string Ten;
	int Level;
	int HP;
	int DEF;
	int ATK;
public:
	TraiBoBinh();
	~TraiBoBinh();
	string LayTenCongTrinh();
	CongTrinh* Clone();//Trả về đối tượng cần nhân bản theo cơ chế đa hình
	int getHP();
	int getATK();
	int getDEF();
	void NhapCongTrinh();//Nhap thong tin cua doi tuong
	void XuatCongTrinh();//Xuat thong tin doi tuong
};

