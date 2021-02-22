#include "paket.h"
#pragma once


float paket::ucretHesaplama(float katSayi=0)
{
	int ucret;
	
	ucret = katSayi * gidecegiToplamKm;
	return ucret;
}

void paket::setpaketID(int a)
{
	paketID=a;
}

int paket::getpaketID()
{
	return paketID;
}

void paket::setpaketAgirlik(int b)
{
	 paketAgirlik=b ;
}

int paket::getpaketAgirlik()
{
	return paketAgirlik;
}

void paket::setgondericiAdi(string x)
{
	gondericiAdi = x;
}

string paket::getgondericiAdi()
{
	return gondericiAdi;
}

void paket::setaliciAdi(string y)
{
	aliciAdi = y;
}

string paket::getaliciAdi()
{
	return aliciAdi;
}

void paket::setgidecegiToplamKm(int c)
{
	gidecegiToplamKm = c;

}

int paket::getgidecegiToplamKm()
{
	return gidecegiToplamKm;
}
