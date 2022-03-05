#ifndef _PERSON_CPP_
#define _PERSON_CPP_

#include <iostream>
#include <string>

class Person
{
    protected:
        std::string name;
        int age;
    public:
        Person(){};
        Person(const std::string &name,
               const int &age);
        
        void show();

        void setName(const std::string name);

        void setAge(const int age);

        std::string getName();

        int getAge();

};

Person::Person(const std::string &name,
               const int &age):name(name), age(age)
{

}

void Person::show()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}

void Person::setName(const std::string name)
{
    this->name = name;
}

void Person::setAge(const int age)
{
    this->age = age;
}

std::string Person::getName()
{
    return name;
}

int Person::getAge()
{   
    return age;
}

#endif