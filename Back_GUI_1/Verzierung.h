#pragma once

//#include "Plaetzchen.h"
using namespace System;

ref  class Verzierung abstract
{
private:
	String^ Name;

public:
	static enum class Color { Blue, Red, White, Green, Pink }; // also .net stuff

	Verzierung();
	//Verzierung(Plaetzchen^ p);
	virtual String^ getName() = 0;
	virtual Single getMehl()=0;
	virtual Single getZucker()=0;
	virtual Single getNuesse()=0; //make this class to a abstract base class f.. windows :-(
	virtual Color getFarbe()=0;
	
};

