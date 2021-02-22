#include"paket.h"
#include"standartPaket.h"
#include"expresspaket.h"
#include<iostream>
#pragma once
using namespace std;
int main()
{
	standartPaket paket1;
	paket1.setaliciAdi("Aysen Cakir");
	paket1.setgondericiAdi("Miray Yilmaz");
	paket1.setgidecegiToplamKm(200);
	paket1.setpaketAgirlik(8);
	paket1.setpaketID(647393729);
	paket1.ucretHesaplama(6);

	expressPaket paket2;
	paket2.setaliciAdi("Metehan Cakir");
	paket2.setgondericiAdi("Arda Karadag");
	paket2.setgidecegiToplamKm(350);
	paket2.setpaketAgirlik(4);
	paket2.setpaketID(435927645);
	paket2.ucretHesaplama(9);
	

	cout << "Paket ID:" << paket1.getpaketID() << endl;
	cout << "Paket Agirligi:" << paket1.getpaketAgirlik() << endl;
	cout << "Gidecegi Toplam Km:" << paket1.getgidecegiToplamKm() << endl;
	cout << "Alici Adi:" << paket1.getaliciAdi() << endl;
	cout << "Gonderici Adi:" << paket1.getgondericiAdi() << endl;
	cout << "Gonderim Ucreti:" << paket1.standartGonderimUcretiHesapla(6) << endl;

	cout << "Paket ID:" << paket2.getpaketID() << endl;
	cout << "Paket Agirligi:" << paket2.getpaketAgirlik() << endl;
	cout << "Gidecegi Toplam Km:" << paket2.getgidecegiToplamKm() << endl;
	cout << "Alici Adi:" << paket2.getaliciAdi() << endl;
	cout << "Gonderici Adi:" << paket2.getgondericiAdi() << endl;
	cout << "Gonderim Ucreti:" << paket2.expressGonderimUcretiHesapla(9) << endl;


}