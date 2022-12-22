/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 04:24:48 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/21 21:11:53 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP
#define __PHONEBOOK_HPP

#define PHONEBOOK_SIZE	4

#include "Contact.hpp"

class PhoneBook {
	private:
	int		index;
	int		oldest;
	Contact	contacts[PHONEBOOK_SIZE];

	std::string		userInput(std::string option);
	bool			checkIfContactAlreadyPopulated(Contact contact);
	void			replaceNewestContactWithOldest(void);
	void 			truncateAndPrintString(std::string data);
	void			printSpace(int number);


	public:
				PhoneBook(void);
				~PhoneBook(void);
	void		addContact(void);
	void		populateContact(int	i);
	void		printAllContacts(void);
	void		cleanContactFields(Contact contact);

};

#endif
