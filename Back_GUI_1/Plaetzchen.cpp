#include "Plaetzchen.h"


Plaetzchen::Plaetzchen(Single size_x, Single size_y, Single bake_time, Single bake_temperature, Form_cookie sh_pe, bool is_brownie)
{
	GroesseX = size_x;
	GroesseY = size_y;
	Backzeit = bake_time;
	Backtemperatur = bake_temperature;
	shape = sh_pe;
	Teigart = gcnew Teig(berecheGewicht(), is_brownie ? true : false);
	verzierung = gcnew List<Verzierung^>(3);
	
}

List<Verzierung^>^ Plaetzchen::getVerzierung()
{
	return this->verzierung;
}

bool Plaetzchen::addVerzierung(Verzierung^ v)
{
	if (verzierung->Count < max_verzierung)  //max. 3 entities in List
	{
		verzierung->Add(v);
		
		return true;
	}
	return false;
}

Teig^ Plaetzchen::getTeig()
{
	return this->Teigart;
}

Single Plaetzchen::getGroesseX()
{
	return this->GroesseX;
}

Single Plaetzchen::getGroesseY()
{
	return this->GroesseY;
}

bool Plaetzchen::hat_verzierung()
{
	return verzierung->Count ? true : false ;
	
}

Single Plaetzchen::berecheGewicht()
{
	return GroesseX * GroesseY * wight_per_mm2;
}
