//
// Created by Bashar Levin on 2022-12-13.
//

#include "MailBox.h"
#include <algorithm>
using it = std::vector<Email>::iterator;
using const_it = std::vector<Email>::const_iterator;

MailBox::MailBox(size_t sz) : mailBox(sz) {}

void MailBox::push(const Email &mail) {

    mailBox.push_back(mail);
}

void MailBox::sortWho() {
    CompWhoDateSubject comp;
    std::sort(mailBox.begin(), mailBox.end(), comp);
}

void MailBox::sortDate() {
    CompDateWhoSubject comp;
    std::sort(mailBox.begin(), mailBox.end(), comp);

}

void MailBox::sortSubject() {
    CompSubjectWheDate comp;
    std::sort(mailBox.begin(), mailBox.end(), comp);
}

size_t MailBox::size() {
    return mailBox.size();
}

Email &MailBox::operator[](size_t index) {
    return mailBox[index];
}

const Email &MailBox::operator[](size_t index) const {
    return mailBox[index];
}

it MailBox::begin() {
    return mailBox.begin();
}

it MailBox::end() {
    return mailBox.end();
}

const_it MailBox::begin() const {
    return mailBox.begin();
}

const_it MailBox::end() const {
    return mailBox.end();
}










