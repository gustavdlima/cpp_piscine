/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:12:38 by gusalves          #+#    #+#             */
/*   Updated: 2023/01/28 20:55:58 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main() {
	ClapTrap	claptrap("Parvathi");

	std::cout << claptrap.getName() << std::endl;

	return 0;

}