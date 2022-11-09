/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:25:31 by qxia              #+#    #+#             */
/*   Updated: 2022/11/09 16:31:59 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : 
    Form("ShrubberyCreationForm", 145, 137){
        std::cout << "ShrubberyCreationForm constructor called.\n";   
}
        
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : 
    Form("ShrubberyCreationForm", 145, 137),
    _target(target){
        std::cout << "ShrubberyCreationForm avec target constructor called.\n";
}
        
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) :
    Form(src),
    _target(src.getTarget()){
        std::cout << "ShrubberyCreationForm copy constructor called.\n";
        *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
    std::cout << "ShrubberyCreationForm destructor called.\n";
}

        
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs){
    std::cout << "ShrubberyCreationForm copy assignment operator called.\n";
    if (this == &rhs)
        return (*this);
    (std::string &)this->_target = rhs._target;
    return (*this);
}

std::string ShrubberyCreationForm::getTarget(void)const{
    return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor){
    if (!this->getIssigned())
        throw FormUnsignedException();
    if (executor.getGrade() > this->getGradeforExec())
        throw GradeTooLowException();
    std::cout << executor.getName() << " execute " << this->getName() << ".\n";
    std::fstream fs;
    std::string filename = this->_target + "_shrubbery";
    fs.open(filename.c_str(), std::fstream::out); //out: file open for writing
    fs << "     └── \n" << 
          "    └── └── \n" << 
          "  └── └──  └── \n" << 
          " └── └── └── └── \n" << 
          "└── └── └── └── └──\n" << 
          "       │ │\n" << \
          "       │ │\n" << \
          "       │ │\n" << "\n";
    std::cout << executor.getName() << " execute " << this->getName() << "\n";
    std::cout << this->_target << "_shrubbery has been created and there is a ASCII tree in it.\n";
}