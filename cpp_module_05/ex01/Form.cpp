/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:25:31 by qxia              #+#    #+#             */
/*   Updated: 2022/11/07 23:27:30 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("default"), // initialize {
}

Form::Form(std::string name, unsigned int SignGrade, unsigned int ExecGrade)
{
}

Form::Form(Form const &src)
{
}

Form::~Form(void)
{
    std::cout << "Form destructor called.\n";
}

Form &Form::operator=(Form const &rhs)
{
}

unsigned int Form::getGradeforSigner(void) const
{
    return (this->_GradeforSigner);
}

unsigned int Form::getGradeforExec(void) const {
    return (this->_GradeforExec)}

std::string Form::getName(void) const
{
    return (this->_name);
}

bool Form::getIssigned(void) const
{
    return (this->_isSigned);
}

void Form::beSigned(Bureaucrat const &b)
{
}

std::ostream &operator<<(std::ostream &os, Form const &obj)
{
}