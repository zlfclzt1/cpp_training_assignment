#include <iostream>

#include "point3d.h"

int main()
{
    Point3D a(3, 4, 5);
    Point3D b;

    std::cout << "Point a: " << a.getX() << ", " << a.getY() << ", " << a.getZ() << std::endl;
    std::cout << "Point b: " << b.getX() << ", " << b.getY() << ", " << b.getZ() << std::endl;

    float disntance = a.calculateDisantance3D(b);
    std::cout << "3D distance between a and b: " << disntance << std::endl;

    return 0;
}