#include "Guss.h"

Single Guss::getMehl()
{
	return Single(0.0);
}

Single Guss::getZucker()
{
	// calculate 15% sugar, where 100% is the single cookies weight
	return p->berecheGewicht() * sugar;
}

Single Guss::getNuesse()
{
	return Single(0.0);
}

 String^ Guss::getName()
{
	return s;
}

 Verzierung::Color Guss::getFarbe()
 {
	 return color;
 }

 void Guss::setFarbe(Color c)
 {
	 color = c;
 }
