/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:54:39 by qxia              #+#    #+#             */
/*   Updated: 2022/11/04 17:30:55 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat{
    public:
        Bureaucrat(void);
        Bureaucrat(std::string const name);
        Bureaucrat(Bureaucrat const &src);
        ~Bureaucrat(void);

        Bureaucrat& operator=(Bureaucrat const &rhs);
        
        class GradeTooHighException{
            
        };
        class GradeTooLowException{
            
        };
        
        std::string getName()const;
        int getGrade()const;
        int increnum()
        
    private:
        std::string _name;
        int _grade;
};

#endif
