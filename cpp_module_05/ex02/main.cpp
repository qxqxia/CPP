/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:44:57 by qinxia            #+#    #+#             */
/*   Updated: 2022/11/09 19:45:53 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat b1("b1", 150);
	std::cout << b1;
	Bureaucrat b2("b2", 1);
	std::cout << b2;
	std::cout << "\n";

	ShrubberyCreationForm scfForm = ShrubberyCreationForm("SCF_Target");
	std::cout << scfForm;
	RobotomyRequestForm roboForm = RobotomyRequestForm("RRF_Target");
	std::cout << roboForm;
	PresidentialPardonForm ppForm = PresidentialPardonForm("PPF_Target");
	std::cout << ppForm;
	std::cout << "\n";

	b1.signForm(scfForm);
	b1.executeForm(scfForm);
	std::cout << "\n";

	b2.signForm(scfForm);
	b2.executeForm(scfForm);
	std::cout << "\n";

	b2.signForm(roboForm);
	b2.executeForm(roboForm);
	std::cout << "\n";

	b2.signForm(ppForm);
	b2.executeForm(ppForm);
	std::cout << "\n";

	b1.signForm(ppForm);
	b1.executeForm(ppForm);
	std::cout << "\n";

	return (0);
}
