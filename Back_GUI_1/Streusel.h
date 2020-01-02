#pragma once
#include "Verzierung.h"
#include "Plaetzchen.h"

ref class Streusel :
	public Verzierung
{
private:
	String^ s = "Streusel";
	Color color;
	const Single sugar = 0.11;
	const Single flavor = 0.9;
	Plaetzchen^ p;
public:
	/**Constructor  to create a Streusel object
	Parameter: p pointer to Plaetzchen where this 'Streusel' belongs*/
	Streusel(Plaetzchen^ pl, Color c) : p{ pl }, color{ c }{}
	/**Return: always 0.0*/
	virtual Single getMehl() override;
	/**gives the amount of sugar for a Streusel
	Return: the amount of sugar*/
	virtual Single getZucker() override;
	/**Return: always 0.0*/
	virtual Single getNuesse() override;
	/**give back the String "Streusel" */
	virtual String^ getName() override;
	/**getFarbe() return the Color for the 'Streusel'
	Return: enum Color*/
	Verzierung::Color getFarbe();
	/** set the Color of the 'Streusel' 
	Return: void */
	void setFarbe(Color c);
};

