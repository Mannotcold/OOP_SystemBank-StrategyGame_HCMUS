#include "CCongTrinh.h"
CongTrinh::CongTrinh(const CongTrinh& ct)
{
	X = ct.X;
	Y = ct.Y;
}
CongTrinh::CongTrinh()
{
	X = 0;
	Y = 0;
}
CongTrinh::~CongTrinh()
{
	X = 0;
	Y = 0;
}
void CongTrinh::NhapCongTrinh()
{
	cout << "Nhap toa do X: ";
	cin >> X;
	cin.ignore();
	cout << "Nhap toa do Y: ";
	cin >> Y;
	cin.ignore();
}
void CongTrinh::XuatCongTrinh()
{
	cout << "\nToa do X cua cong trinh: ";
	cout << X;
	cout << "\nToa do Y cua cong trinh: ";
	cout << Y;
}