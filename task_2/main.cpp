#include <vector> 
#include <iostream>

#include "book.h"

int main()
{   
    std::vector<Book> library(10);

    std::string isbn;
    std::string name;
    std::string author;
    std::string publisher;
    std::string year_of_publication;
    std::string price;

    for(int idx = 0; idx < library.size(); idx++)
    {
        Book &book = library[idx];

        std::cout << "第 " << idx+1 << " 本书: " << std::endl;
        std::cout << "请输入名称： " << std::endl;
        std::cin >> name;
        std::cout << "请输入isbn： " << std::endl;
        std::cin >> isbn;
        std::cout << "请输入作者： " << std::endl;
        std::cin >> author;
        std::cout << "请输入出版社： " << std::endl;
        std::cin >> publisher;
        std::cout << "请输入出版年份： " << std::endl;
        std::cin >> year_of_publication;
        std::cout << "请输入价格： " << std::endl;
        std::cin >> price;

        //todo: 输入类型是否符合要求检查
        book.setName(name);
        book.setIsbn(isbn);
        book.setAuthor(author);
        book.setPublisher(publisher);
        book.setYearofPublication(year_of_publication);
        book.setPrice(price);
    }

    for(int idx = 0; idx < library.size(); idx++)
    {
        Book &book = library[idx];

        if(book.getPrice() > 100.0f)
        {
            book.showName();
        }
    }



    return 0;
}