/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:25:31 by qxia              #+#    #+#             */
/*   Updated: 2022/11/10 11:24:39 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//initialize constant member using initializer list
Form::Form(void) : 
            _name("default"),
            _isSigned(false),
            _GradeforSigner(150),
            _GradeforExec(150){
                std::cout << "Form constructor called.\n";
}

Form::Form(std::string name, unsigned int SignGrade, unsigned int ExecGrade) : 
            _name(name), 
            _isSigned(false),
            _GradeforSigner(SignGrade), 
            _GradeforExec(ExecGrade){
                std::cout << "Form avec parametres constructor called.\n";
                if (SignGrade > 150 || ExecGrade > 150)
                    throw GradeTooLowException();
                if (SignGrade < 1 || ExecGrade < 1)
                    throw GradeTooHighException();
}

Form::Form(Form const &src) :
            _name(src.getName()),
            _isSigned(false),
            _GradeforSigner(src.getGradeforSigner()),
            _GradeforExec(src.getGradeforExec()){
                std::cout << "Form copy constructor called.\n";
                *this = src;
    
}

Form::~Form(void){
    std::cout << "Form destructor called.\n";
}

Form &Form::operator=(Form const &rhs){
    std::cout << "Form copy assignment operator called.\n";
    if (this == &rhs)
        return (*this);
    (std::string &)this->_name = rhs._name;
    (unsigned int &)this->_GradeforSigner = rhs._GradeforSigner;
    (unsigned int &)this->_GradeforExec = rhs._GradeforExec;
    return (*this);
}

unsigned int Form::getGradeforSigner(void) const{
    return (this->_GradeforSigner);
}

unsigned int Form::getGradeforExec(void) const {
    return (this->_GradeforExec);
}

std::string Form::getName(void) const{
    return (this->_name);
}

bool Form::getIssigned(void) const{
    return (this->_isSigned);
}

void Form::beSigned(Bureaucrat const &b){
    if (b.getGrade() <= this->_GradeforSigner){
        this->_isSigned = true;
    }
    else
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, Form const &obj){
    os <<  "form  name: " << obj.getName() << ";\n" << "if  signed: " << (obj.getIssigned()?"signed":"unsigned")
    << ";\n" << "sign grade: " << obj.getGradeforSigner() << ";\n" << "exec grade: "
    << obj.getGradeforExec() << ";\n";
    return (os);
}