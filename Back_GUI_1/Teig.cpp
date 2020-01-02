#include "Teig.h"

Teig::Teig(Double w, bool with_kakao)
{
	weight = w;
	Mehl = weight * 0.3344137;
	Milch = weight * 0.07524315;
	Eier = weight * 0.08861970;
	Backpulver = weight * 0.00104497;
	Zucker = weight * 0.292611615;
	Nuesse = weight * 0.0;
	with_kakao ?Kakao = weight * 0.20899539: Kakao = 0.0;
}
Double Teig::getMehl()
{

	return Mehl;
}

Double Teig::getMilch()
{
	return Milch;
}

Double Teig::getEier()
{
	return Eier;
}

Double Teig::getBackpulver()
{
	return Backpulver;
}

Double Teig::getZucker()
{
	return Zucker;
}

Double Teig::getNuesse()
{
	return Nuesse;
}

Double Teig::getKakao()
{
	return Kakao;
}

bool Teig::hasKakao()
{
		return Kakao == 0.0 ? false : true;
}
