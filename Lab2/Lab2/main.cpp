#include <iostream>
#include "Book.h"
#include "Library.h"
#include "Vector.cpp"

int main() {
	
	std::string a = "Erlich Junger", t = "Storm of Steel";

	Book e;

	std::cout << "e:  " << e << std::endl;

	Book b1 = { a, t }; 

	std::cout << "b1:  " << b1 << std::endl;

	Book b2 = { "Erich Maria Remarque", "All Quiet on The Western Front" };

	Book b3 = b1;

	std::cout << "b3: " << b3 << " b1: " << b1 << std::endl;

	e = std::move(b2);

	std::cout << "e: " << e << " b2: " << b2 << std::endl;

	e.setAuthor("Anne Applebaum");

	std::cout << "e: " << e << std::endl;

	e.setTitle("Gulag");

	std::cout << "e: " << e << "\n\n\n";


	

	Library l1 = { { "Erich Maria Remarque", "All Quiet on The Western Front" },
				   { "Erlich Junger", "Storm of Steel" },
				   { "Anne Applebaum", "Gulag"} };

	std::cout << "l1: " << l1 << std::endl;

	return 0;
}