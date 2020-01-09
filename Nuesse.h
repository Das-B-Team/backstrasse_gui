#pragma once
#include "Plaetzchen.h"
#include "Verzierung.h"
ref class Nuesse :
	public Verzierung
{
private:
    String^ s = "Nuesse";
	Color color;
	const Single nuts = 0.08965;
	Plaetzchen^ p;
public:
	/**Constructor  to create a Nuesse object
	Parameter: p pointer to Plaetzchen where this Verzierung belongs*/
	Nuesse(Plaetzchen^ pl, Color c) : p{ pl }, color{ c }{}
	/**Return: always 0.0*/
	virtual Single getMehl() override;
	/**gives the amount of sugar for a Nuesse
	Return: always 0.0*/
	virtual Single getZucker() override;
	/**getNuesse return the amount of nuts in g for that topit
	Return: nuts amount in gramm*/
	virtual Single getNuesse() override;
	/**give back the String "Nuesse" */
	virtual String^ getName() override;
	virtual Color getFarbe() override;
};

