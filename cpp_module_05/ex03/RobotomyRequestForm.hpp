/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:26:25 by qxia              #+#    #+#             */
/*   Updated: 2022/11/10 11:59:53 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form{
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