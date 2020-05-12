#include "pch.h"
#include "Functions.h"

void example1()
{
	/*
		функция, вычисляющая квадратный корень
		из отношения двух заданных чисел
	*/
	try
	{
		double a;
		double b;
		std::cout << " \n> Введите два числа: " << std::endl;

		// 1 -> Проверка корhектности ввода первого числа:
		std::cout << "  Первое число: ";
		if (!(std::cin >> a))
			throw "Первое число введено в неправильном формате!";

		// 2 -> Проверка корhектности ввода второго числа:
		std::cout << "  Второе число: ";
		if (!(std::cin >> b))
			throw "Второе число введено в неправильном формате!";

		// 3 -> Проверка деления на ноль:
		if (b == 0)
			throw "Division by zero error!";

		// 4 -> Проверка знака вводимых чисел:
		if (a*b < 0)
			throw "Negative number under square root";

		// 5 -> Вычисление:
		std::cout << "  Calculating will continued! ..." << std::endl;
		std::cout << "\n  sqrt(" << a << "/" << b << ") = " << sqrt(a / b) << std::endl;
	}
	catch (const char* errMessage)
	{
		std::cerr << "\n> Exception: " << errMessage << std::endl;
		std::cout << "  Calculating is impossible!" << std::endl;
	}
}
