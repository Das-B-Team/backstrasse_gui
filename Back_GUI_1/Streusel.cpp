#include "Streusel.h"

Single Streusel::getMehl()
{
	return p->berecheGewicht() * flavor;
}

Single Streusel::getZucker()
{
	return p->berecheGewicht() * sugar;
}

Single Streusel::getNuesse()
{
	return Single(0.0);
}

String^ Streusel::getName()
{
	return s;
}

Verzierung::Color Streusel::getFarbe()
{
	return color;
}

void Streusel::setFarbe(Color c)
{
	color = c;
}
