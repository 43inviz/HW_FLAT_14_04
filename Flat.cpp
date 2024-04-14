#include "Flat.h"
#include <iostream>
#include <cstring>

Flat::Flat(double area, double cost)
{
	this->area = area;
	this->cost = cost;
}

Flat::Flat(const Flat& flat)
{
	this->area = flat.area;
	this->cost = flat.cost;
}
/////////////


void Flat::setCost(double cost)
{
	this->cost = cost;
}

void Flat::setArea(double area)
{
	this->area = area;
}

double Flat::getCost() const
{
	return this->cost;
}

double Flat::getArea() const
{
	return this->area;
}
///////////////



bool Flat::operator==(const Flat& flat)
{
	if (this->cost == flat.cost) {
		return true;
	}
	return false;
}

void Flat::operator=(const Flat& flat)
{
	this->area = flat.area;
	this->cost = flat.cost;
	
}

int Flat::operator>(const Flat& flat)
{
	if (this->cost == flat.cost) {
		return 0;
	}
	else if (this->cost > flat.cost) {
		return 1;
	}
	else {
		return -1;
	}
}

void Flat::input()
{
	double area;
	std::cout << "Enter area(m^2): ";
	std::cin >> area;
	double cost;
	std::cout << "Enter cost: ";
	std::cin >> cost;
	setArea(area);
	setCost(cost);

}

void Flat::show()
{
	std::cout << "Area: " << this->area << "\n";
	std::cout << "Cost: " << this->cost << "\n";


}
