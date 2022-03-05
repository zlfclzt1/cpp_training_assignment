#include "book.h"

void Book::showName()
{
    std::cout << name << std::endl;
}

float Book::getPrice()
{
    return price;
}

void Book::setIsbn(const std::string &isbn)
{
    this->isbn = std::stoi(isbn);
}

void Book::setName(const std::string &name)
{
    this->name = name;
}

void Book::setAuthor(const std::string &author)
{
    this->author = author;
}

void Book::setPublisher(const std::string &publisher)
{
    this->publisher = publisher;
}

void Book::setYearofPublication(const std::string &year_of_publication)
{
    this->year_of_publication = std::stoi(year_of_publication);
}

void Book::setPrice(const std::string &price)
{
    this->price = std::stof(price);
}


