#include "Vector3D.h"

Vector3D::Vector3D(int x, int y, int z)
{
	arr[0] = x;
	arr[1] = y;
	arr[2] = z;
}

ostream& Vector3D::print(ostream& out) const
{
	return (out << typeid(*this).name() << endl << arr[0] << " " << arr[1] << " " << arr[2]);
}

double Vector3D::norm() const
{
	return max(max(abs(arr[0]), abs(arr[1])), abs(arr[2])); 
}

double Vector3D::module() const
{
	return sqrt(pow(arr[0], 2) + pow(arr[1], 2) + pow(arr[2], 2));
}
