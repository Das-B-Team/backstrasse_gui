#include "Nuesse.h"

Single Nuesse::getMehl()
{
	return Single(0.0);
}

Single Nuesse::getZucker()
{
	return Single(0.0);
}

Single Nuesse::getNuesse()
{
	return p->berecheGewicht() * nuts;
}

String^ Nuesse::getName()
{
	
	return s;
}
Verzierung::Color Nuesse::getFarbe()
{
	return color;
}