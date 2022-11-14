/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:09:01 by xuwang            #+#    #+#             */
/*   Updated: 2022/11/14 10:44:45 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main() {

    std::cout << "~~~~~~ShrubberyCreationForm 145, 137 tests~~~~~\n";
     try {
        Bureaucrat b1("b1", 120);
        Intern someRandomIntern;
        Form*   rrf;

        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        if (rrf)
        {
            b1.signForm(*rrf);
            b1.executeForm(*rrf);
            delete rrf;
        }
    }catch (std::exception &e) {
        std::cout << e.what() << std::endl;
	}
    std::cout << std::endl;
    try {
        Bureaucrat b2("b2", 146);
        Intern someRandomIntern;
        Form*   rrf;

        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender_1");
        if (rrf)
        {
            b2.signForm(*rrf);
            b2.executeForm(*rrf);
            delete rrf;
        }
    }catch (std::exception &e) {
        std::cout << e.what() << std::endl;
	}
    
    std::cout << std::endl;
    std::cout << "~~~~~~RobomyRequestForm 72, 45 tests~~~~~\n";
    try {
        Bureaucrat b3("b3", 30);
        Intern someRandomIntern;
        Form*   ddf;

        ddf = someRandomIntern.makeForm("robotomy request", "bonjour");
        if (ddf)
        {
            b3.signForm(*ddf);
            b3.executeForm(*ddf);
            delete ddf;
        }
    }catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    std::cout << std::endl;
    try {
        Bureaucrat b4("b4", 50);
        Intern someRandomIntern;
        Form*   ddf;

        ddf = someRandomIntern.makeForm("robotomy request", "bonjour");
        if (ddf)
        {
            b4.signForm(*ddf);
            b4.executeForm(*ddf);
            delete ddf;
        }
    }catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    std::cout << std::endl;
    std::cout << "~~~~~~PresidentialPardonForm 25, 5 tests~~~~~\n";
      try {
        Bureaucrat b5("b5", 1);
        Intern someRandomIntern;
        Form*   fff;

        fff = someRandomIntern.makeForm("presidentialpardon", "hello");
        if (fff)
        {
            b5.signForm(*fff);
            b5.executeForm(*fff);
            delete fff;
        }
    }catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    std::cout << std::endl;
    try {
        Bureaucrat b6("b6", 10);
        Intern someRandomIntern;
        Form*   fff;

        fff = someRandomIntern.makeForm("presidentialpardon", "hello");
        if (fff)
        {
            b6.signForm(*fff);
            b6.executeForm(*fff);
            delete fff;
        }
    }catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    return 0;
}