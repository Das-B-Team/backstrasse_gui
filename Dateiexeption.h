#pragma once

#include <iostream>

using namespace std;

class Dateiexception : public exception
{
public:
	Dateiexception(const char* s) : exception(s) {};

};