//
// Created by Bashar Levin on 2022-12-13.
//

#include "Email.h"

Email::Email(std::string sender, std::string _data, std::string sub):name(sender), date(_data),subject(sub) {}

std::ostream& operator<<(std::ostream& os, const Email& email){

    os<<email.name<<", "<<email.date<<", "<<email.subject<<"\n";
    return os;
};

bool CompWhoDateSubject::operator()(const Email &lhs, Email &rhs) const {
    if(lhs.name < rhs.name) return true;
    else if (lhs.name == rhs.name){
        if(lhs.date < rhs.date)return true;
        else if(lhs.date==rhs.date){
            if(lhs.subject < rhs.subject)return true;
        }
    }
    return false;
}

bool CompDateWhoSubject::operator()(const Email &lhs, Email &rhs) const {
    if(lhs.date < rhs.date) return true;
    else if(lhs.date == rhs.date){
        if(lhs.name < rhs.name)return true;
        else if(lhs.name == rhs.name){
            if(lhs.subject < rhs.subject) return true;
        }
    }
    return false;
}

bool CompSubjectWheDate::operator()(const Email &lhs, Email &rhs) const {
    if(lhs.subject < rhs.subject) return true;
    else if (lhs.subject == rhs.subject){
        if(lhs.name < rhs.name)return true;
        else if(lhs.name == rhs.name){
            if (lhs.date < rhs.date)return true;
        }
    }
    return false;
}




