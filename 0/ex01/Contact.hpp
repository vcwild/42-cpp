#ifndef CONTACT_H
#define CONTACT_H

class Contact {
public:
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
