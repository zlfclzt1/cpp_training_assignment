#include<cmath>  

#include "point3d.h"

template <typename T>
Point3D<T>::Point3D():x(0.0f), y(0.0f), z(0.0f)
{

}

template <typename T>
Point3D<T>::Point3D(T x, T y, T z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

template <typename T>
T Point3D<T>::getX() const
{
    return x;
}

template <typename T>
T Point3D<T>::getY() const
{
    return y;
}

template <typename T>
T Point3D<T>::getZ() const
{
    return z;
}

template <typename T>
T Point3D<T>::calculateDisantance3D(const Point3D<T> &p) const
{
    T diff_x = x - p.x;
    T diff_y = y - p.y;
    T diff_z = z - p.z;

    return std::sqrt(diff_x*diff_x + diff_y*diff_y + diff_z*diff_z);  
}

template class Point3D<double>;
template class Point3D<int>;
template class Point3D<float>;
template class Point3D<long>;
