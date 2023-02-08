#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{

	public:
		// Custom Exceptions
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};

		class FormNotSigned : public std::exception
		{
			virtual const char* what() const throw();
		};

		// Constructors
		AForm(const std::string name, const int gradeSignValue, int gradeExecuteValue);
		AForm(const AForm &copy);

		// Destructor
		virtual ~AForm();

		// Operators
		virtual AForm & operator=(const AForm &assign);

		// Getters
		virtual std::string	getName(void);
		virtual bool		getisSigned(void);
		virtual int			getGradeExecute(void);
		virtual int			getGradeSign(void);

		// Setters
		virtual void		setIsSigned(bool newValue);

		// Member Functions
		virtual void		beSigned(Bureaucrat& norm);


	private:
		const std::string	name;
		const int			gradeExecute;
		const int			gradeSign;
		bool				isSigned;
};

std::ostream &operator<<(std::ostream& out, AForm& object);


#endif
