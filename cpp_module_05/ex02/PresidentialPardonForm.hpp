/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:28:25 by qxia              #+#    #+#             */
/*   Updated: 2022/11/09 19:42:50 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string const &target);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    ~PresidentialPardonForm(void);

    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

    std::string getTarget(void) const;
    void execute(Bureaucrat const &executor) const;

private:
    std::string _target;
};

#endif