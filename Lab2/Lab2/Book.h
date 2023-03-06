#pragma once
#include <string>

class Book {

	std::string author;
	std::string title;

	public:
	
	Book();

	//l-refference constructor
	Book(const std::string& author, const std::string& title);

	//r-refference constructor
	Book(std::string&& author, std::string&& title);

	//move constructor
	Book(Book&& other);

	//copy constructor
	Book(const Book& other);

	//getters
	std::string getAuthor();

	std::string getTitle();

	//l-value setters
	void setAuthor(const std::string& author);

	void setTitle(const std::string& title);

	//r-value setters

	void setAuthor(std::string&& author);

	void setTitle(std::string&& title);

	//copy operator
	Book& operator=(const Book& right);

	//move operator
	Book& operator=(Book&& right);

	//print operator
	friend std::ostream& operator<<(std::ostream& out, const Book& book);

};