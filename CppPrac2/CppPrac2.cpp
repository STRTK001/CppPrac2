// CppPrac2.cpp : Defines the entry point for the application.
//

#include "CppPrac2.h"
#include <iostream>
#include "ApricotPie.h"
#include "ApplePie.h"
#include "RaspberryPie.h"
#include <stdio.h>


int main()
{
	std::cout << "ACTIVITY 1\n";
	ApricotPie ap = ApricotPie();
	std::cout << ap.description() <<std::endl;

	ApplePie p = ApplePie();
	std::cout << p.description() << std::endl;

	RaspberryPie rp = RaspberryPie();
	std::cout << rp.description() << std::endl;

	std::cout << "ACTIVITY 2\n";

	Pie* pie = nullptr;

	int selection = 0;
	do
	{
		printf("\nEnter a choice (1 = Apple, 2 = Apricot 3 = Raspberry): ");
		scanf("%d", &selection);
		switch (selection)
		{
		case 1:
			pie = new ApplePie();
			break;
		case 2:
			pie = new ApricotPie();
			break;
		case 3:
			pie = new RaspberryPie();
				break;
		default:
			break;
		}
		if (pie != nullptr)
		{
			//have to convert the string to cstr due to use of c function
			printf("%s",pie->description().c_str());
			break;
		}
		printf("You chose %d", selection);
	}while (selection != 1 && selection != 2 && selection != 3);

	printf("\nexiting program...");
	return 0;
}
