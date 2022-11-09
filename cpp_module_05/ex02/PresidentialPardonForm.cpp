/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:24:49 by qxia              #+#    #+#             */
/*   Updated: 2022/11/09 16:26:33 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
    Form("PresidentialPardonForm", 25, 5){
        std::cout << "PresidentialPardonForm constructor called.\n";
}
        
PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
    Form("PresidentialPardonForm", 25, 5),
    _target(target){
        std::cout << "PresidentialPardonForm avec target constructor called.\n";
}
        
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) :
    Form(src),
    _target(src.getTarget()){
        std::cout << "PresidentialPardonForm copy constructor called.\n";
        *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void){
    std::cout << "PresidentialPardonForm destructor called.\n";
}

        
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs){
    std::cout << "PresidentialPardonForm copy assignment operator called.\n";
    if (this == &rhs)
        return (*this);
    (std::string &)this->_target = rhs._target;
    return (*this);
}

std::string PresidentialPardonForm::getTarget(void)const{
    return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor){
    if (!this->getIssigned())
        throw FormUnsignedException();
    if (executor.getGrade() > this->getGradeforExec())
        throw GradeTooLowException();
    std::cout << executor.getName() << " execute " << this->getName() << "\n";
    std::cout << this->_target << " was forgiven by Zaphod Beeblebrox.\n";
}