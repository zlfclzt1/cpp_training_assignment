#include <iostream>

#include "shape.cpp"

int main()
{   
    std::string width, height;
    std::cout << "请输入底边长： " << std::endl;
    std::cin >> width;
    std::cout << "请输入高： " << std::endl;
    std::cin >> height;

    Rectangle rec(std::stod(width), std::stod(height));
    Triangle tri(std::stod(width), std::stod(height));

    std::cout << "Rectangle area: " << rec.area() << std::endl;
    std::cout << "Triangle area: " << tri.area() << std::endl;


    return 0;
}