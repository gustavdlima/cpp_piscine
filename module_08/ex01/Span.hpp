#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <list>
#include <algorithm>

class Span
{
public:

	// Iterator
	class iterator
	{
		public:
			iterator(std::list<int>::iterator iter);

		private:
			std::list<int>::iterator iter;
	};


	// Exceptions
	class FullException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class NoSpanException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class LessThanTwoNumbersException : public std::exception
	{
		virtual const char *what() const throw();
	};


	// Constructors
	Span();
	Span(unsigned int parameter);
	Span(const Span &copy);


	// Destructor
	~Span();


	// Operators
	Span &operator=(const Span &assign);


	// Getters
	unsigned int getListSize() const;


	// Setters
	void setListSize(unsigned int size);


	// Iterators
	iterator begin();
	iterator end();


	// Methods
	int		shortestSpan();
	int		longestSpan();
	void	addNumber(int number);
	void	addRange(int start, int end);

private:
	unsigned int listSize;
	std::list<int> list;
};


// Stream operators
std::ostream &operator<<(std::ostream &stream, const Span &object);

#endif
