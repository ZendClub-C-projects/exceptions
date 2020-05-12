#include "pch.h"
#include "Functions.h"
#include "GeometryCalculator.h"

int main()
{
	setlocale(LC_ALL, "rus");

	//example1();

	GeometryCalculator *gc = new GeometryCalculator();

	std::string choice;
	do
	{
		if (gc->inputData())
		{
			gc->calcResult();
			gc->displayInfo();
			gc->displayResult();
		}
		std::cout << "\n> Continue (y/n)? - ";
		std::cin >> choice;
	} while (choice == "y");


	delete gc;
	std::cout << "\n\n\n Finish";
	return 0;
	system("Pause");
}
