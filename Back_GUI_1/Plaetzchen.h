#pragma once
//#include "Verzierung.h"
#include "Form.h"
#include "Teig.h"
#include "Verzierung.h"

using namespace System;
using namespace System::Collections::Generic;


ref class Plaetzchen
{
private:
	Form_cookie shape;
	Teig^ Teigart;
	List<Verzierung^>^verzierung;
	Single GroesseX;
	Single GroesseY;
	Single Gewicht;
	Single Backzeit;
	Single Backtemperatur;
	const Single wight_per_mm2 = 0.02084;
	const Int32 max_verzierung = 3;
public:
	
	//Plaetzchen() {}
	//Plaetzchen(Plaetzchen%) {}

	/**Constructor to create a Plaetzchen (German cookies)
	Parameter: size_x size occupied by one cookie in x direction on the blade
	           size_y size occupied by one cookie in y direction on the blade
			   bake_time duration of baking
			   bake_temperature temperature 
			   sh_pe shape of the cookie
			   is_brownie when brown cookies are desired*/

	Plaetzchen(Single size_x, Single size_y, Single bake_time, Single bake_temperature, Form_cookie sh_pe, bool is_brownie);

	/**getVerzierung() return a List of possible topit's on the cookie
	Return: List<Verzierung>^ */

	List<Verzierung^>^ getVerzierung();

	/**addverzierung(Verzirung^ v) add a 'Verzierung' to a List
	Parameter: v pointer to Verzierung
	Return: bool return true when adding was sucessfull otherweise false*/

	bool addVerzierung(Verzierung^);
	
	/**getTeig() return a pointer to the Teig object which belongs to this cookie
	Return: Teig^*/

	Teig^ getTeig();

	/**getGroesseX() gives the space which one cookkie occupie in X direction
	Parameter: none
	Return: x in mm*/

	Single getGroesseX();

	/**getGroesseY() gives the space which one cookkie occupie in Y direction
	Parameter: none
	Return: y in mm*/

	Single getGroesseY();

	/**hat_verzierung() return true if there are any decoration otherwise false
	Return: true if decoration is available */

	bool hat_verzierung();

	/** berechneGewicht() calculate the wight of a cookie with the assumption that
	the cookie took 75% from the space GroesseX and GroesseY
	40mm x 40mm ~ 33g cookie weight
	Return: Single (float) weight of one cookie*/

	Single berecheGewicht();
	/** getShape_as_String
	 Parameter: none
	 Return: the shape as a String i.e "Stern"*/

	String ^ getShape_as_String();

	
};

