/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:00:02 by qinxia            #+#    #+#             */
/*   Updated: 2022/11/16 23:01:21 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void) {}

Base *generate(void)
{
    srand(time(NULL));
    int i = rand() % 3;

    switch (i)
    {
    case 0:
        return (new A());
    case 1:
        return (new B());
    case 2:
        return (new C());
    default:
        return (NULL);
    }
}

void identify(Base *p)
{
    A *pA = dynamic_cast<A *>(p);
    B *pB = dynamic_cast<B *>(p);
    C *pC = dynamic_cast<C *>(p);

    if (pA != nullptr)
    {
        std::cout << "A\n";
    }
    if (pB != nullptr)
    {
        std::cout << "B\n";
    }
    if (pC != nullptr)
    {
        std::cout << "C\n";
    }
    else
    {
        std::cout << "Downcast failed.\n";
    }
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A\n";
    }
    catch (std::bad_cast)
    {
    }
    try
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B\n";
    }
    catch (std::bad_cast)
    {
    }
    try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C\n";
    }
    catch (std::bad_cast)
    {
    }
}