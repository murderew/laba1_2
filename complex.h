
#include <iostream>
#include "pch.h"

struct Complex
{
	double rel;
	double img;
	void coutt();
	void init(double re, double im);
	double module();
};