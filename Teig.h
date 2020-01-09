#pragma once
/** class who represent a pastry with all the ingredients*/
using namespace System;
ref class Teig
{
private:
	Double Mehl;
	Double Milch;
	Double Eier;
	Double Backpulver;
	Double Zucker;
	Double Nuesse;
	Double Kakao;
	Double weight; //weight of one cookie
public:
	/**Default Construktor of class Teig*/
	Teig() : Mehl{ 0.0 }, Milch{ 0.0 }, Eier{ 0.0 }, Backpulver{ 0.0 }, Zucker{ 0.0 }, Nuesse{ 0.0 }, Kakao{0.0}
	{}
	/**Constructor create a teig object 
	Parameter: weight w in gramm per cookie (usually 33.225612 g midsize)
	           with_kakao is true if brown pastry is desired*/
	Teig(Double w, bool with_kakao);
	
	/**getMehl() calculate the amount of flavor needed
	Parameter: none
	Return: the amount of flavor* in g*/
	Double getMehl();
	/**getMilch() calculate the amount of milk
	Parameter: none
	Return: the amount of milk* in g*/
	Double getMilch();
	/**getEier() calculate the amount of eggs
	Parameter: none
	Return: the amount of eggs in g*/
	Double getEier();
	/**getBackpulver() calculate the amount of baking powder 
	Parameter: none
	Return: the amount of baking powder* in g*/
	Double getBackpulver();
	/**getZucker() calculate the amount of sugar
	Parameter: none
	Return: the amount of sugar in g*/
	Double getZucker();
	/**getNuesse() calculate the amount of nuts
	Parameter: none
	Return: the amount of nuts in g*/
	Double getNuesse();
	/**getKakao() calculate the amount of kakao
	Parameter: none 
	Return: the amount of kakao in g*/
	Double getKakao();
	/** hasKakao() check if Kakao is part of the pastry
	Parameter: none
	Return: true if kakao is part of the pastry otherwise false*/
	bool hasKakao();
};

