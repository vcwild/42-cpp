/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NoSed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:59:16 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:59:18 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOSED_HPP
#define NOSED_HPP

#include <string>

class NoSed {

public:
    NoSed( std::string filename );
    ~NoSed();

    void doSed( std::string origin, std::string dest );

private:
    std::string _fileContent;
    std::string _filename;

    int  _readInFile( void );
    void _replaceFileExtension( void );
    void _replaceSubstrings( std::string origin, std::string dest );
    void _writeOutputFile( void );
};

#endif
