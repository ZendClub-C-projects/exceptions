#include "pch.h"
#include "GeometryCalculator.h"


GeometryCalculator::GeometryCalculator() 
	: a(0.0), b(0.0), c(0.0), P(0.0), S(0.0), units("indefined")
{
}

void GeometryCalculator::inputSideA()
{
	std::cout << "  a = ";
	if (!(std::cin >> a))
		throw std::exception("input error for side [a]!");
	if (a <= 0 )
		throw std::exception("side [a] must be positive!");
}

void GeometryCalculator::inputSideB()
{
	std::cout << "  b = ";
	if (!(std::cin >> b))
		throw std::exception("input error for side [b]!");
	if (b <= 0)
		throw std::exception("side [b] must be positive!");
}

void GeometryCalculator::inputSideC()
{
	std::cout << "  c = ";
	if (!(std::cin >> c))
		throw std::exception("input error for side [c]!");
	if (c <= 0)
		throw std::exception("side [c] must be positive!");
}

void GeometryCalculator::inputUnits()
{
	std::cout << "  units : ";
	std::cin >> units;
	if(units != "sm" && units != "inches")
		throw std::exception("units can be only [sm] or [inches]!");
}

void GeometryCalculator::CheckExists()
{
	if ( a >= b + c || b>= a + c || c >= a + b)
		throw std::exception("triagle not exists!");
}

bool GeometryCalculator::inputData()
{
	try
	{
		std::cout << "\n> Input sides of your triangle: " << std::endl;
		inputSideA();
		inputSideB();
		inputSideC();
		CheckExists();
		inputUnits();
		return true;
	}
	catch (const std::exception &except)
	{
		std::cerr << "\n> Exception: " << except.what() << std::endl;
		std::cout << "  Calculating is impossible!" << std::endl;
		return false;
	}
}

void GeometryCalculator::calcResult()
{
	P = a + b + c;
	double p = P / 2;
	S = sqrt(p*(p - a)*(p - b)*(p - c));  // Формлуа Герона
}

void GeometryCalculator::displayResult()
{
	std::cout << "\n> Results of calculating are:" << std::endl;
	std::cout << "  Triangle Length: P = " << P << " " << units << std::endl;
	std::cout << "  Triangle Square: S = " << S << " " << units << "^2" << std::endl;
}

void GeometryCalculator::displayInfo()
{
	std::cout << "\n> Your triangle geometry paramaters are: " << std::endl;
	std::cout << "  a = " << a << " "<< units <<  std::endl;
	std::cout << "  b = " << b << " " << units << std::endl;
	std::cout << "  c = " << c << " " << units << std::endl;

}
