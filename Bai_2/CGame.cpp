#include "CGame.h"
#include "CThapPhapSu.h"
#include"CTraiBoBinh.h"
#include"CQuySoi.h"
#include"CMa.h"

vector<CongTrinh*>Game::ListCongTrinh;
vector<CongTrinh*>dsCongTrinh;
vector<QuaiVat*>Game::ListQuaiVat;
vector<QuaiVat*>dsQuaiVat;

Game::Game()
{
	ListCongTrinh;
	dsCongTrinh;
}

Game::~Game() {
	ListCongTrinh.clear();
	dsCongTrinh.clear();
}



void Game::NhapCongTrinh()
{
	Game::ThemDoiTuongMau(new ThapPhapSu);
	Game::ThemDoiTuongMau(new TraiBoBinh);

	CongTrinh* ct;
	string CongTrinh;
	cout << "\nNhap thong tin cong trinh theo loai: ThapPhapSu, TraiBoBinh\n";
	cin >> CongTrinh;
	ct = Game::TaoDoiTuongCongTrinh(CongTrinh);
	ct->NhapCongTrinh();
	dsCongTrinh.push_back(ct);


}


void Game::XuatCongTrinh()
{
	for (int i = 0;i < dsCongTrinh.size();i++)
	{
		dsCongTrinh[i]->XuatCongTrinh();
		cout << "\n==============================================\n" << endl;
	}
}

void Game::NhapQuaiVat()
{

	Game::ThemDoiTuongMau(new QuySoi);
	Game::ThemDoiTuongMau(new Ma);
	QuaiVat* ct;
	string QuaiVat;
	cout << "\nNhap thong tin QuaiVat theo loai: QuySoi, Ma \n";
	cin >> QuaiVat;
	ct = Game::TaoDoiTuongQuaiVat(QuaiVat);
	ct->NhapQuaiVat();
	dsQuaiVat.push_back(ct);
}

void Game::XuatQuaiVat()
{
	for (int i = 0;i < dsQuaiVat.size();i++)
	{
		dsQuaiVat[i]->XuatQuaiVat();
		cout << "\n==============================================\n" << endl;
	}
}


void Game::ThemDoiTuongMau(CongTrinh* ct)
{
	if (!ct) return;
	for (int i = 0; i < ListCongTrinh.size(); i++) {
		CongTrinh* mau = ListCongTrinh[i];
		if (mau->LayTenCongTrinh() == ct->LayTenCongTrinh())
			return;
	}
	ListCongTrinh.push_back(ct);

}

CongTrinh* Game::TaoDoiTuongCongTrinh(string newTen)
{
	for (int i = 0;i < ListCongTrinh.size();i++)
	{
		CongTrinh* ct = ListCongTrinh[i];
		if (ct->LayTenCongTrinh() == newTen)
			return ListCongTrinh[i]->Clone();
	}
}

void Game::ThemDoiTuongMau(QuaiVat* ct)
{
	if (!ct) return;
	for (int i = 0; i < ListQuaiVat.size(); i++) {
		QuaiVat* mau = ListQuaiVat[i];
		if (mau->LayTenQuaiVat() == ct->LayTenQuaiVat())
			return;
	}
	ListQuaiVat.push_back(ct);
}

QuaiVat* Game::TaoDoiTuongQuaiVat(string newTen)
{
	for (int i = 0;i < ListQuaiVat.size();i++)
	{
		QuaiVat* ct = ListQuaiVat[i];
		if (ct->LayTenQuaiVat() == newTen)
			return ListQuaiVat[i]->Clone();
	}
}

