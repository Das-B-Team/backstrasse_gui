#pragma once
#include "Verzierung.h"
#include "Plaetzchen.h"

ref class Guss :
	public Verzierung
{
private:
    String^ s = "Guss";
	Color color;
	const Single sugar = 0.15;
	Plaetzchen^ p;
public:
	/**Constructor  to create a Guss object
	Parameter: p pointer to Plaetzchen where this Verzierung belongs*/
	Guss(Plaetzchen^ pl, Color c) : p{ pl }, color { c }{}
	/**Return: always 0.0*/
	virtual Single getMehl() override;
	/**gives the amount of sugar for a Guss
	Return: the amount of sugar*/
	virtual Single getZucker() override;
	/**Return: always 0.0*/
	virtual Single getNuesse() override;
	/**give back the String "Guss" */
	virtual String^ getName() override;
	/**getFarbe() return the Color for the 'Guss'
	Return: enum Color*/
    Verzierung::Color getFarbe();
	/**setFarbe(c) set the Color of the 'Guss'
	Parameter: c enum Verzierung::Color*/
    void setFarbe(Color c);



};

