#pragma once
#include <initializer_list>
#include "Book.h"


class Library {

	Book* books;
	std::size_t size;

	public:

	Library();

	Library(std::initializer_list<Book> list);

	Library(const Library& other);

	Library(Library&& other);

	Library& operator=(const Library& other);

	Library& operator=(Library&& other);

	Book& operator[](std::size_t index);

	const Book& operator[](std::size_t index) const;

	std::size_t getSize() const;

	~Library();

	friend std::ostream& operator<<(std::ostream& out, const Library& lib);
};