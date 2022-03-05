#include "point3d.h"

Point3D::Point3D():x(0.0f), y(0.0f), z(0.0f)
{

}

Point3D::Point3D(float x, float y, float z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

float Point3D::getX()
{
    return x;
}

float Point3D::getY()
{
    return y;
}

float Point3D::getZ()
{
    return z;
}


float Point3D::calculateDisantance3D(const Point3D &p)
{
    float diff_x = x - p.x;
    float diff_y = y - p.y;
    float diff_z = z - p.z;

    return std::sqrt(diff_x*diff_x + diff_y*diff_y + diff_z*diff_z);  
}