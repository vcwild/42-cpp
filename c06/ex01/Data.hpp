/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:09:34 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:09:35 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
