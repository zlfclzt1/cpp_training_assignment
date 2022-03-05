#include <iostream>
#include <string>

class NewString: public std::string
{
    public:
        NewString(){};
        NewString(const char* str):std::string(str)
        {
        }

        int toInt()
        {
            return std::atoi(this->c_str());
        };

        float toFloat()
        {
            return std::atof(this->c_str());
        };
};



int main()
{
    NewString tmp("HongJing");

    std::cout << tmp << std::endl;
    std::cout << tmp.size() << std::endl;

    tmp.append("Drive");

    std::cout << tmp << std::endl;
    std::cout << tmp.size() << std::endl;

    NewString tmp2 = "8412";

    std::cout << tmp2.toInt() << std::endl;

    NewString tmp3 = "3.1415";

    std::cout << tmp3.toFloat() << std::endl;

}



