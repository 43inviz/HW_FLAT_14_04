#pragma once
class Flat
{
	double area;
	double cost;
public:

	Flat(double area, double cost);
	Flat() :Flat(0.0, 0.0){}

	Flat(const Flat& flat);//constr copy

	void setCost(double cost);
	void setArea(double area);

	double getCost()const;
	double getArea() const;


	///////
	bool operator==(const Flat& flat);
	void operator=(const Flat& flat);
	int operator>(const Flat& flat);


	void input();
	void show();


};

