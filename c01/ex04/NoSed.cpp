/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NoSed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:59:11 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:59:13 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NoSed.hpp"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>

NoSed::NoSed( std::string filename )
{
    this->_filename    = filename;
    this->_fileContent = "";
}

NoSed::~NoSed() {}

void NoSed::_replaceSubstrings( std::string origin, std::string dest )
{
    if ( this->_fileContent.find( origin ) == std::string::npos )
        return;

    const size_t originLength = origin.length();
    const size_t destLength   = dest.length();

    for ( size_t position = 0; position != std::string::npos;
          position += destLength ) {
        position = this->_fileContent.find( origin, position );
        if ( position == std::string::npos )
            break;
        this->_fileContent.erase( position, originLength );
        this->_fileContent.insert( position, dest );
    }
}

void NoSed::_replaceFileExtension( void )
{
    size_t position = this->_filename.find_last_of( "." );

    if ( position == std::string::npos ) {
        this->_filename.append( ".replace" );
        return;
    }

    std::string extension = this->_filename.substr( position );

    this->_filename.erase( position, extension.length() );
    this->_filename.insert( position, ".replace" );
}

int NoSed::_readInFile( void )
{
    std::ifstream      inFile( this->_filename.c_str(), std::ios::in );
    std::ostringstream buffer;

    if ( !inFile.is_open() )
        return 1;

    buffer << inFile.rdbuf();
    this->_fileContent = buffer.str();
    inFile.close();
    return 0;
}

void NoSed::_writeOutputFile( void )
{
    std::ofstream outFile(
        this->_filename.c_str(), std::ios::out | std::ios::trunc );

    outFile << this->_fileContent;
    outFile.close();
}

void NoSed::doSed( std::string origin, std::string dest )
{
    if ( this->_readInFile() ) {
        std::cout << "Error: Could not open file " << this->_filename
                  << std::endl;
        exit( 1 );
    }
    this->_replaceSubstrings( origin, dest );
    this->_replaceFileExtension();
    this->_writeOutputFile();
}
