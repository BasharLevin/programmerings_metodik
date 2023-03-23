#include <iostream>
#include "Email.h"
#include "MailBox.h"

template<typename T>
void show(const T & val){
    std::cout << val << '\n';
}

int main() {
    MailBox inBox(3);
    inBox[0]= {"Yamen Saeed", "2023-01-10", "Behöver hjälp med python labb"};
    inBox[1]= {"Omar Naeem", "2022-09-22", "About your application"};
    inBox[2]= {"scamer121", "2019-06-09", "How to become a millionaire in 5 seconds "};
    inBox.push({"Team snapchat", "2021-01-22", "llxz992 have added you on snap"});
    inBox.push({"Egmont efternamn", "2022-12-02", "Komplettering"});

    inBox.sortWho();
    std::for_each(inBox.begin(), inBox.end(), [](const Email & email){show(email);});
    std::cout << '\n';

    inBox.sortDate();
    std::for_each(inBox.begin(), inBox.end(), [](const Email & email){show(email);});
    std::cout << '\n';

    inBox.sortSubject();
    std::for_each(inBox.begin(), inBox.end(), [](const Email & email){show(email);});
    std::cout << '\n';

    return 0;
}
