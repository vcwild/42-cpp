/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:09:37 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:09:40 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>
#include <string>

int main()
{
    Data *pointer = new Data();

    pointer->n = 10.01;
    pointer->s = "test";

    std::cout << "pre-serializer pointer->n: " << pointer->n << std::endl;
    std::cout << "pre-serializer pointer->s: " << pointer->s << std::endl;

    uintptr_t serialized   = serialize( pointer );
    Data     *deserialized = deserialize( serialized );
    std::cout << "post-serializer pointer->n: " << deserialized->n << std::endl;
    std::cout << "post-serializer pointer->s: " << deserialized->s << std::endl;

    delete pointer;
}
