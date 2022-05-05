#pragma once
#include "Norm.h"

class Complex : public INorm
{
	double img, real;
public:
	Complex(double im = 0, double re = 0) : img(im), real(re) {};
	double getImg() const { return img; }
	void setImg(double im) { img = im; }
	double getReal() const { return real; }
	void setReal(double re) { real = re; }

	virtual ostream& print(ostream& out) const override;
	virtual double norm() const override;
	virtual double module() const override;
};

