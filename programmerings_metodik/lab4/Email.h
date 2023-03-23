//
// Created by Bashar Levin on 2022-12-13.
//
#include <string>
#include <iostream>
#ifndef LAB4_EMAIL_H
#define LAB4_EMAIL_H


class Email {
public:
    Email(std::string sender = "", std::string _data = "", std::string sub =" ");
    friend std::ostream& operator<<(std::ostream& os, const Email& email);
    friend struct CompWhoDateSubject;
    friend struct CompDateWhoSubject;
    friend struct CompSubjectWheDate;
private:
    std::string name;
    std::string date;
    std::string subject;

};

struct CompWhoDateSubject{

    bool operator()(const Email& lhs, Email& rhs)const;
};
struct CompDateWhoSubject{

    bool operator()(const Email& lhs, Email& rhs)const;
};
struct CompSubjectWheDate{

    bool operator()(const Email& lhs, Email& rhs)const;
};


#endif //LAB4_EMAIL_H
