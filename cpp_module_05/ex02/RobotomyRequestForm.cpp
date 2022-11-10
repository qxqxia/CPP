/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:21:34 by qxia              #+#    #+#             */
/*   Updated: 2022/11/10 10:40:24 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm constructor called.\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequestForm", 72, 45),
                                                                      _target(target)
{
    std::cout << "RobotomyRequestForm avec target constructor called.\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src),
                                                                           _target(src.getTarget())
{
    std::cout << "RobotomyRequestForm copy constructor called.\n";
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm destructor called.\n";
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    std::cout << "RobotomyRequestForm copy assignment operator called.\n";
    if (this == &rhs)
        return (*this);
    (std::string &)this->_target = rhs._target;
    return (*this);
}

std::string RobotomyRequestForm::getTarget(void) const
{
    return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this->getIssigned())
        throw FormUnsignedException();
    if (executor.getGrade() > this->getGradeforExec())
        throw GradeTooLowException();
    srand(time(NULL)); // srand函数的作用是根据参数seed，设置一个随机起始点,而rand函数根据这个起始点，产生随机数序列
    if (rand() % 2 == 0)
    {
        std::cout << this->getTarget() << " has been robotomised.\n";
    }
    else
    {
        std::cout << "Failed.\n";
    }
}