/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:28:21 by qxia              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/11/15 16:39:22 by qxia             ###   ########.fr       */
=======
/*   Updated: 2022/11/15 14:41:57 by qxia             ###   ########.fr       */
>>>>>>> c9558fd838e254ee55846983aa2b55fc3fb148d3
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <locale>
#include <string>

class Convert{
    public:
        Convert(void);
        Convert(std::string str);
        Convert(Convert const &src);
        ~Convert(void);

        Convert& operator=(Convert const &rhs);

        std::string getStr(void)const;
        void printResult(void);

<<<<<<< HEAD
        class TypeErrorException : public std::exception{
            const char *what() const throw();
        };
=======
        //input check
        bool checkStrType();
        bool checkInt();
        bool checkFloat();
        bool checkChar();
        bool checkDouble();

        //convert input
        void convertToInt();
        void convertToFloat();
        void convertToChar();
        void convertToDouble();

>>>>>>> c9558fd838e254ee55846983aa2b55fc3fb148d3
    private:
        std::string _str;
};

#endif