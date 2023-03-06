#include <string>
#include <iostream>
#include "Book.h"

//default constructor
Book::Book() {

	std::cout << "Book()" << std::endl;

}

//copy constructor
Book::Book(const Book& other)
	: author(other.author), title(other.title) {

	std::cout << "Book(const Book&)" << std::endl;

}

//move constructor
Book::Book(Book&& other) {

	author = other.author;
	title = other.title;

	other.author = "";
	other.title = "";

	std::cout << "Book(Book&& book)" << std::endl;

}

//copy assignment operator
Book& Book::operator=(const Book& other) {

	std::cout << "operator=(Book&)" << std::endl;

	Book tmp(other);

	std::swap(author, tmp.author);
	std::swap(title, tmp.title);

	return *this;

}

//move assignment operator
Book& Book::operator=(Book&& other) {

	std::cout << "operator=(Book&&)" << std::endl;

	std::swap(author, other.author);
	std::swap(title, other.title);

	return *this;
}

