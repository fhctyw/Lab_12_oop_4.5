#include <iostream>
#include "Complex.h"
#include "Vector3D.h"
using namespace std;

ostream& operator<<(ostream& out, const INorm& n)
{
	return n.print(out);
}

int main()
{
	INorm** arr = new INorm *[2];
	arr[0] = new Complex(3, 5);
	arr[1] = new Vector3D(-4, 2, 0);

	cout << *arr[0] << endl <<  *arr[1] << endl << endl;
	cout << "module complex = " << arr[0]->module() << endl
		<< "norm complex = " << arr[0]->norm() << endl
		<< "module vector = " << arr[1]->module() << endl
		<< "norm vector = " << arr[1]->norm() << endl;

	return 0;
}