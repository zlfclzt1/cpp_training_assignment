#include <iostream>

#include "point3d.h"

int main()
{
    Point3D<double> a(3.1, 4.5, 5.7);
    Point3D<double> b(1.1, 0.5, 3.7);

    std::cout << "Point a: " << a.getX() << ", " << a.getY() << ", " << a.getZ() << std::endl;
    std::cout << "Point b: " << b.getX() << ", " << b.getY() << ", " << b.getZ() << std::endl;

    double disntance = a.calculateDisantance3D(b);
    std::cout << "3D distance between a and b: " << disntance << std::endl;

    return 0;
}