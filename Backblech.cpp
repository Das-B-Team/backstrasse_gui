#include "Backblech.h"

Backblech::Backblech()
{
	//set to our default size 400x600mm
	X = 400;
	Y = 600;

}

Single Backblech::getX()
{
	return X;
}

Single Backblech::getY()
{
	return Y;
}

Int32 Backblech::getPlaetzchen_per_blade(Plaetzchen^ p)
{
	Int32 x = (400 / p->getGroesseX());
	Int32 y = (600 / p->getGroesseY());
	return x * y;
}
