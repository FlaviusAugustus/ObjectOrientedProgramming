#include <iostream>
#include <string>
#include "Book.h"
#include "Library.h"


int main() {

	std::string a = "Ernst Junger", t = "Storm of Steel";
	Book e;

	std::cout << "e: " << e << std::endl;

	Book b1 = { a, t };

	std::cout << "b1: " << b1 << std::endl;

	Book b2 = { "Erich Maria Remarque","All Quiet On The Western Front" };

	std::cout << "b2: " << b2 << std::endl;

	Book b3 = b1;

	std::cout << "b3: " << b3 << " b1: " << b1 << std::endl;

	e = std::move(b2);

	std::cout << "e: " << e << " b2:" << b2 << std::endl;

	e.setAuthor("Anne Applebaum");

	std::cout << "e: " << e << std::endl;

	e.setTitle("Gulag");

	std::cout << "e: " << e << std::endl;

	std::cout << "\n\n\n";


	Library el;

	std::cout << "el: " << el << std::endl;

	Library l1 = { { "Ernst Junger", "Storm Of Steel" },
				   { "Erich Maria Remarque", "All Quiet On The Western Front" },
				   { "Anne Applebaum", "Gulag" } };

	std::cout << "l1: " << l1 << std::endl;

	Library l2(2);

	std::cout << "l2: " << l2 << std::endl;
	
	el = std::move(l2);

	std::cout << "el: " << e << " l2: " << l2 << std::endl;

	l1[0] = std::move(el[1]);

	std::cout << "l1: " << l1 << " el: " << e << std::endl;

	return 0;
}
