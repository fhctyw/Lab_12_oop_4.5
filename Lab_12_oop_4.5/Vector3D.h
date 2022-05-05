#pragma once
#include "Norm.h"

class Vector3D : public INorm
{
	int arr[3];
public:
	Vector3D(int x = 0, int y = 0, int z = 0);
	int& operator[](int i) { return i >= 0 && i < 3 ? arr[i] : arr[0]; }

	virtual ostream& print(ostream& out) const override;
	virtual double norm() const override;
	virtual double module() const override;
};

