// CppPrac2.cpp : Defines the entry point for the application.
//

#include "CppPrac2.h"
#include <iostream>
#include "ApricotPie.h"
#include "ApplePie.h"
#include "RaspberryPie.h"



int main()
{
	ApricotPie ap = ApricotPie();
	std::cout << ap.description() <<std::endl;

	ApplePie p = ApplePie();
	std::cout << p.description() << std::endl;

	RaspberryPie rp = RaspberryPie();
	std::cout << rp.description() << std::endl;

	return 0;
}
