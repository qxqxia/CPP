/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:44:57 by qinxia            #+#    #+#             */
/*   Updated: 2022/11/10 10:38:33 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{	
	std::cout << "~~~~~~ShrubberyCreationForm 145, 137 tests~~~~~\n";
	Bureaucrat b1("b1", 133);
	std::cout << b1 << std::endl;

	ShrubberyCreationForm S1("jardin");
	std::cout << S1;
	try{
		b1.signForm(S1);
		b1.executeForm(S1);
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	Bureaucrat b2("b2", 140);
	std::cout << b2 << std::endl;
	//b2 = b1;
	//std::cout << b2 << std::endl;
	ShrubberyCreationForm S2("jardin_1");
	std::cout << S2;
	try{
		b2.signForm(S2);
		b2.executeForm(S2);
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	Bureaucrat b3(b1);
	std::cout << b3 << std::endl;
	ShrubberyCreationForm S3("jardin_2");
	std::cout << S3;
	try{
		b3.signForm(S3);
		b3.executeForm(S3);
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "~~~~~~RobomyRequestForm 72, 45 tests~~~~~\n";
	RobotomyRequestForm R1("R_target");
	std::cout << R1 << std::endl;
	Bureaucrat b4("b4",50);
	std::cout << b4 << std::endl;
	try{
		b4.signForm(R1);
		b4.executeForm(R1);
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	Bureaucrat b5("b5",30);
	std::cout << b5 << std::endl;
	try{
		b5.signForm(R1);
		b5.executeForm(R1);
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "~~~~~~PresidentialPardonForm 25, 5 tests~~~~~\n";
	PresidentialPardonForm P1("P_target");
	std::cout << P1;
	Bureaucrat b6("b6",20);
	std::cout << b6 << std::endl;
	try{
		b6.signForm(P1);
		b6.executeForm(P1);
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	Bureaucrat b7("b7",1);
	std::cout << b7 << std::endl;
	try{
		b7.signForm(P1);
		b7.executeForm(P1);
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}
