/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:45:58 by qxia              #+#    #+#             */
/*   Updated: 2022/11/10 17:02:47 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void){
    std::cout << "Intern constructor called.\n";
}

Intern::Intern(Intern const &src){
    std::cout << "Intern copy constructor called.\n";
    *this = src;
}

Intern::~Intern(void){
    std::cout << "Intern destructor called.\n";
}

Intern& Intern::operator=(Intern const &rhs){
    std::cout << "Intern copy assignment operator called.\n";
    (void)rhs;
    return (*this);
}

Form* Intern::makeForm(std::string const &formName, std::string const &target){
    std::string Namelist[3] = {"shrubbery creation","robotomy request","presidential pardon"};
   
    int i = 0;
    for (i = 0; i < 3; i++){
        if (Namelist[i] == formName)
            break;
    }
    switch(i){
        case 0:
            return (new ShrubberyCreationForm(target));
        case 1:
            return (new RobotomyRequestForm(target));
        case 2:
            return (new PresidentialPardonForm(target));
        default:
            std::cout << "Intern cannot create " << formName <<std::endl;
            break;
    }
    return (0);
}
