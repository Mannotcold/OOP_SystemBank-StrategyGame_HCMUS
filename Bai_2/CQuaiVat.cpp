#include "CQuaiVat.h"
QuaiVat::QuaiVat()
{
	X = 0;
	Y = 0;
}
QuaiVat::~QuaiVat()
{
	X = 0;
	Y = 0;
}
void QuaiVat::NhapQuaiVat()
{
	cout << "Nhap toa do X: ";
	cin >> X;
	cout << "Nhap toa do Y: ";
	cin >> Y;
}
void QuaiVat::XuatQuaiVat()
{
	cout << "\nToa do X cua quai vat: ";
	cout << X;
	cout << "\nToa do Y cua quai vat: ";
	cout << Y;
}