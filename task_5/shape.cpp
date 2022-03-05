#ifndef _SHAPE_CPP_
#define _SHAPE_CPP_


class Shape
{   
    private:
        double width;
        double height;

    public:
        Shape()
        {

        };

        Shape(double width, double height): width(width), height(height)
        {

        }

        double getWidth()
        {
            return width;
        }

        double getHeight()
        {
            return height;
        }


        virtual double area() = 0;
};

class Rectangle: public Shape
{   
    public:
        Rectangle(){};
        Rectangle(double width, double height): Shape(width, height)
        {

        }

        virtual double area();
};

double Rectangle::area()
{
    return this->getWidth() * this->getHeight();
}

class Triangle : public Shape
{
    public:
        Triangle(){};
        Triangle(double width, double height): Shape(width, height)
        {

        }

        virtual double area();
};

double Triangle::area()
{
    return 0.5 * this->getWidth() * this->getHeight();
}



#endif