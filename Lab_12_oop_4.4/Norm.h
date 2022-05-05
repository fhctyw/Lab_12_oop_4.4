#pragma once
#include <iostream>
using namespace std;

class Norm abstract
{
public:
	virtual double norm() const = 0;
	virtual double module() const = 0;
	virtual ostream& print(ostream& out) const;
};

