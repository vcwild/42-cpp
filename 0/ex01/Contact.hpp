#ifndef __CONTACT_H__
#define __CONTACT_H__
#include <string>

struct Contact {
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string darkestSecret;
    int         index;
    std::string number;

    Contact();
    ~Contact();
};

#endif
