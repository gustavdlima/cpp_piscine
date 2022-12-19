/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 01:32:22 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/19 01:04:09 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

// class PhoneBook
// it has an array of contacts
// it can store a maximum of 8 contacts. If the user tries to add 9th contact, replace the oldest one by the new one.
// please note that dynamic allocation is forbidden.

// class Contact
// Stans for a phonebook contact

// each one of classes must be instantiated as an instance.
// anything that will always be used inside a class is private, and that anything that can be used outside

// the program only accepts
// ADD: save new contact -> prompted to input the information of the new conontact one field at a time. Once all the fields have been completed. add the contact to the phonebook.

// SEARCH: display a specific contact -> Display the saved contacts as a list of 4 columns: index, firstt name, last name and nickname. Each column must be 10 characters wide. A pipe character separates them. The next must be right-aligned. If the next is longer than the column, it must be truncated and the last displayable character must be replaced by a dot

// function to print the menu


int	main( void )
{
	PhoneBook	phonebook;
	Contact		contact;
	std::string	buffer;

//	the first test can check if setfirstname is working
	while (1) {
		std::cin >> buffer;
		std::cout << "Comando selecionado: " << buffer << std::endl;
		if (buffer == "ADD") {
			std::cout << "Nome:" << std::endl;
		}

		// contact.setFirstName("Samuel");
		// phonebook.addContact(contact);
		// phonebook.printAllContacts();
	}
}

// If the user tries to add a 9th contact, replace the oldest one by the new one.