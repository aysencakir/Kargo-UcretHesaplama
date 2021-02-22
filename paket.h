#pragma once
#include <string>
#include<iostream>
using namespace std;
class paket
{
private:
	int paketID;
	int paketAgirlik;
	int gidecegiToplamKm;
	string gondericiAdi;
	string aliciAdi;
	
public:
	float ucretHesaplama(float);
	void setpaketID(int a);
	int getpaketID();
	void setpaketAgirlik(int b);
	int getpaketAgirlik();
	void setgondericiAdi(string x);
	string getgondericiAdi();
	void setaliciAdi(string y);
	string getaliciAdi();
	void setgidecegiToplamKm(int c);
	int getgidecegiToplamKm();
};

