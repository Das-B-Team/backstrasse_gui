#pragma once
#include "Plaetzchen.h"




static ref class Backblech
{
private:
	static Single X;
	static Single Y;
public:
	/**Default Constructor set the default blade size to 400x600mm*/
	Backblech();
	/**Constructor to create a 'Backblech'
	Parameter: x in mm
	           y in mm*/
	//Backblech(Single x, Single y) : X{ x }, Y{ y } {}

	/**getX() return the length in x direction
	Return: x in mm*/
	Single getX();

	/**getY() return the length in y direction
	Return: y in mm*/
	Single getY();

	/** getPlaetzchen_per_blade(Plaetzchen^) return the mount of 
	Platzchen which can take place on one blade*/
	static Int32 getPlaetzchen_per_blade(Plaetzchen^);


};

