#pragma once

#include "Dateiexeption.h"
using namespace System;
using namespace System::IO;
 ref class Datei
{
private:
	String^ pfad;
	//fstream* f;
	StreamWriter^ sr;
	Datei();
	bool open();
public:
	Datei(String^);
	/**schreibeDatei write the string s to the file
	Parameter: s String 
	Return: bool true if success otherwise false*/
	bool schreibedatei(String^);
	
};

