#include<cmath>  

class Point3D
{   
    private:
        float x;
        float y;
        float z;

    public:
        Point3D();
        Point3D(float x, float y, float z);

        float getX();

        float getY();

        float getZ();

        float calculateDisantance3D(const Point3D &p);
};