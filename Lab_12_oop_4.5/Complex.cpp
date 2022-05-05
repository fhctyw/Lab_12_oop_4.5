#include "Complex.h"

ostream& Complex::print(ostream& out) const
{
    return (out << typeid(*this).name() << endl << "img: " << img << " real: " << real);
}

double Complex::norm() const
{
    return pow(module(), 2);
}

double Complex::module() const
{
    return sqrt(pow(img, 2) + pow(real, 2));
}
