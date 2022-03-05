#ifndef _CHINESE_CPP_
#define _CHINESE_CPP_

#include "person.cpp"

class Chinese: public Person
{
    protected:
        std::string shengXiao;

    public:
        Chinese(){};
        Chinese(const std::string &name,
                const int &age,
                const std::string &shengXiao);

        void show();
};

Chinese::Chinese(const std::string &name,
                 const int &age,
                 const std::string &shengXiao)
{
    this->name = name;
    this->age = age;
    this->shengXiao = shengXiao;
}

void Chinese::show()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "ShengXiao: " << shengXiao << std::endl;
}


#endif