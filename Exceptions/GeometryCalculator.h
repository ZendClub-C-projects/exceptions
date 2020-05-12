#pragma once
class GeometryCalculator
{
	double a;
	double b;
	double c;
	double P;
	double S;
	std::string units;
	void inputSideA();
	void inputSideB();
	void inputSideC();
	void inputUnits();
	void CheckExists();
public:
	GeometryCalculator();
	bool inputData();
	void calcResult();
	void displayResult();
	void displayInfo();
};

