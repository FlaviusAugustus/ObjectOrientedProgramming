#include "Library.h"
#include <iostream>

Library::Library() {

	books = nullptr;
	size = 0;

}

Library::Library(Library&& other) {

	books = other.books;
	size = other.size;

	other.books = nullptr;
	other.size = 0;

}

Library::Library(const Library& other) {

	size = other.size;
	books = new Book[size];

	for (size_t i = 0; i < size; i++) {

		books[i] = other[i];

	}

}

Library::Library(std::initializer_list<Book> list) 
	: size(list.size()) , books(new Book[list.size()])  {

	size_t i = 0;
	for (auto&& book : list) {

		books[i] = book;
		i++;

	}

}

Library& Library::operator=(const Library& other) {

	if (this == &other) { return *this; }

	if(size != other.size) {
	
		delete[] books;
		
		books = new Book[other.size];
		size = other.size;

	}

	std::copy(&other.books[0], &other.books[0] + size, &books[0]);

	return *this;

}

Library& Library::operator=(Library&& other) {

	if (this == &other) { return *this; }

	delete[] books;

	books = nullptr;
	size = 0;

	std::swap(books, other.books);

	return *this;

}

Book& Library::operator[](size_t index) {

	return books[index];

}

const Book& Library::operator[](size_t index) const {

	return books[index];

}

size_t Library::getSize() const {

	return size;

}

Library::~Library() {

	delete[] books;
	
}

std::ostream& operator<<(std::ostream& out, const Library& lib) {

	for(size_t i = 0; i < lib.size; i++) {
	
		out << " " << lib.books[i];
	
	}

	out << std::endl;

	return out;

}