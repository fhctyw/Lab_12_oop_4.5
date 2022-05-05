#pragma once
#include <iostream>
using namespace std;

class INorm
{
public:
	virtual double norm() const = 0;
	virtual double module() const = 0;
	virtual ostream& print(ostream& out) const = 0;
};

