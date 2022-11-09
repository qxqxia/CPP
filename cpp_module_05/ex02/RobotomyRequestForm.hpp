/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:26:25 by qxia              #+#    #+#             */
/*   Updated: 2022/11/09 19:42:47 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    ~RobotomyRequestForm(void);

    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

    std::string getTarget(void) const;
    void execute(Bureaucrat const &executor) const;

private:
    std::string _target;
};

#endif