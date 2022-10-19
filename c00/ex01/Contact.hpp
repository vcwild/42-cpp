/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:56:42 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:56:44 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
