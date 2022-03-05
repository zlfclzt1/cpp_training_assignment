#include "person.cpp"
#include "chinese.cpp"

int main()
{   
    Person p("LaoWang", 88);
    Chinese c("LaoZhang", 76, "Hou");

    p.show();
    c.show();

    return 0;
}