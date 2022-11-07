/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:54:39 by qxia              #+#    #+#             */
/*   Updated: 2022/11/07 23:27:22 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
public:
    Bureaucrat(void);
    Bureaucrat(std::string name, unsigned int grade);
    Bureaucrat(Bureaucrat const &src); // forget why &reference
    ~Bureaucrat(void);

    Bureaucrat &operator=(Bureaucrat const &rhs);

    class GradeTooHighException : public std::exception
    {
        const char *what() const throw()
        {
            return "Error: the grade is too high(<1).\n";
        }
    };
    class GradeTooLowException : public std::exception
    {
        const char *what() const throw()
        {
            return "Error: the grade is too low(>150).\n";
        }
    };

    std::string getName() const;
    unsigned int getGrade() const;
    void increGrade(void);
    void decreGrade(void);

    void signForm(Form const &f);

private:
    const std::string _name;
    unsigned int _grade;
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &obj);

#endif
