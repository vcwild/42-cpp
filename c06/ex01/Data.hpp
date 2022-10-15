#ifndef DATA_HPP
#define DATA_HPP

#include <stdint.h>
#include <string>

struct Data {

    std::string s;
    float       n;
};

uintptr_t serialize( Data *ptr );

Data *deserialize( uintptr_t raw );

#endif /* ************************************************************ DATA_H  \
        */
