/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:35:19 by qxia              #+#    #+#             */
/*   Updated: 2022/11/16 17:06:24 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

class Base{
  public:
    virtual ~Base(void);  
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
