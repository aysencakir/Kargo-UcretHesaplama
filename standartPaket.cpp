#include "standartPaket.h"
#include "paket.h"
#pragma once

standartPaket::standartPaket()
{
	standartGonderimUcreti=0 ;
}

int standartPaket::standartGonderimUcretiHesapla(float x)
{
	
	x= ucretHesaplama(0.2);
	return x ;
}
