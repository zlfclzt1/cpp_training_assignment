template<typename T>
class Point3D
{   
    private:
        T x;
        T y;
        T z;

    public:
        Point3D();
        Point3D(T x, T y, T z);

        T getX() const;

        T getY() const;

        T getZ() const;

        T calculateDisantance3D(const Point3D<T> &p) const;
};
