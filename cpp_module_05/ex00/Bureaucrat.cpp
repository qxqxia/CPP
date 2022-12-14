/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:54:43 by qxia              #+#    #+#             */
/*   Updated: 2022/11/10 17:03:58 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150){
    std::cout << "Bureaucrat constructor called.\n";
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade){
    std::cout << "Bureaucrat avec name and grade constructor called.\n";
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src){
    std::cout << "Bureaucrat copy constructor called.\n";
    *this = src;
}

Bureaucrat::~Bureaucrat(void){
    std::cout << "Bureaucrat destructor called.\n";
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs){
    std::cout << "Bureaucrat copy assignment operator called.\n";
    if (this == &rhs)
        return (*this);
    this->_grade = rhs._grade;
    (std::string &)this->_name = rhs._name;//name is constant
    return (*this);
}
        
std::string Bureaucrat::getName()const{
    return (this->_name);
}
        
unsigned int Bureaucrat::getGrade()const{
    return (this->_grade);
}
        
void Bureaucrat::increGrade(void){
    if (this->_grade <= 1)
        throw GradeTooHighException();
    this->_grade -= 1;
    std::cout << "The grade of " << this->_name << " is higher now: " << this->_grade << ".\n"; 
}
        
void Bureaucrat::decreGrade(void){
    if (this->_grade >= 150)
        throw GradeTooLowException();
    this->_grade += 1;
    std::cout << "The grade of " << this->_name << " is lower now: " << this->_grade << ".\n";
}

std::ostream& operator << (std::ostream &os, Bureaucrat const &obj){
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
    return (os);
}