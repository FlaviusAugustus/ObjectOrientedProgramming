#include <string>
#include <iostream>
#include "Book.h"

//default constructor
Book::Book() {

	std::cout << "Book()" << std::endl;

	author = "Unknown";
	title = "Unknown";

}

//copy constructor
Book::Book(const Book& other) : author(other.author), title(other.title) {

	std::cout << "Book(const Book&)" << std::endl;

}

//move constructor
Book::Book(Book&& other) {

	std::cout << "Book(Book&& book)" << std::endl;

	author = other.author;
	title = other.title;

	other.author = "";
	other.title = "";

}

//l-value constructor
Book::Book(const std::string& author, const std::string& title) {

	std::cout << "Book(string&, string&)" << std::endl;

	this->author = author;
	this->title = title;
	
}

//r-value constructor
Book::Book(std::string&& author, std::string&& title) {

	std::cout << "Book(string&&, string&&)" << std::endl;

	this->author = author;
	this->title = title;

}

//getters
std::string Book::getAuthor() {

	return author;

}

std::string Book::getTitle() {

	return title;
	
}

//setters
void Book::setAuthor(const std::string& author) {

	this->author = author;

}

void Book::setAuthor(std::string&& author) {

	this->author = author;

}

void Book::setTitle(const std::string& title) {

	this->title = title;

} 

void Book::setTitle(std::string&& title) {

	this->title = title;

}


//copy assignment operator
Book& Book::operator=(const Book& other) {

	std::cout << "operator=(Book&)" << std::endl;

	if (this == &other) { return *this; }

	Book tmp(other);

	std::swap(author, tmp.author);
	std::swap(title, tmp.title);

	return *this;

}

//move assignment operator
Book& Book::operator=(Book&& other) {

	std::cout << "operator=(Book&&)" << std::endl;

	if (this == &other) { return *this; }

	std::swap(author, other.author);
	std::swap(title, other.title);

	return *this;
}


std::ostream& operator<<(std::ostream& out, const Book& book) {

	out << "Author: " << book.author << " Title: " << book.title;

	return out;

}
