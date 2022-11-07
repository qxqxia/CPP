/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:17:55 by qxia              #+#    #+#             */
/*   Updated: 2022/11/07 16:39:07 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form{
    public:
        Form(void);
        Form(std::string name, unsigned int SignGrade, unsigned int ExecGrade);
        Form(Form const &src);
        ~Form(void);
        
        Form& operator=(Form const &rhs);
        
        class GradeTooHighException : public std::exception{
            const char* what() const throw(){
                return "Error: the grade is too high.\n";
            }
        };
        class GradeTooLowException : public std::exception{
            const char* what() const throw(){
                return "Error: the grade is too low.\n";
            }
        };
        
        unsigned int getGradeforSigner(void)const;
        unsigned int getGradeforExec(void)const;
        std::string getName(void)const;
        bool getIssigned(void)const;
        
        void beSigned(Bureaucrat const &b);
        
    private:
        const std::string   _name;
        bool                _issigned;
        const unsigned int  _GradeforSigner;
        const unsigned int  _GradeforExec;
};

std::ostream& operator << (std::ostream &os, Form const &obj);

#endif