#ifndef _BOOK_H_
#define _BOOK_H_

#include <iostream>
#include <string>

class Book
{
    private:
        int isbn;
        std::string name;
        std::string author;
        std::string publisher;
        int year_of_publication;
        float price;

    public:
        Book()
        {

        };

        void showName();

        float getPrice();

        void setIsbn(const std::string &isbn);

        void setName(const std::string &name);

        void setAuthor(const std::string &author);

        void setPublisher(const std::string &publisher);

        void setYearofPublication(const std::string &year_of_publication);

        void setPrice(const std::string &price);
};


#endif