/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:23:58 by qxia              #+#    #+#             */
/*   Updated: 2022/11/09 19:42:45 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm(void);
    //自定义类型的参数传递，需要临时对象复制参数，对于临时对象的构造，需要调用构造函数，比较浪费时间，因此我们采取 const 外加引用传递的方法。
    ShrubberyCreationForm(std::string const &target);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    ~ShrubberyCreationForm(void);

    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

    std::string getTarget(void) const;
    void execute(Bureaucrat const &executor) const;

private:
    std::string _target;
};

#endif