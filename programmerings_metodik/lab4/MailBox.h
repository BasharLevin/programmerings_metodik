//
// Created by Bashar Levin on 2022-12-13.
//

#ifndef LAB4_MAILBOX_H
#define LAB4_MAILBOX_H
#include "Email.h"
#include <vector>


class MailBox {
public:
    using it = std::vector<Email>::iterator;
    using const_it = std::vector<Email>::const_iterator;
    explicit MailBox(size_t sz);
    void push(const Email& mail);
    void sortWho();
    void sortDate();
    void sortSubject();
    size_t size();
    Email& operator[](size_t index);
    const Email& operator[](size_t index) const;
    it begin();
    it end ();
    const_it begin() const;
    const_it end() const;

private:
    std::vector<Email> mailBox;

};


#endif //LAB4_MAILBOX_H
