#ifndef COPYFILE_HPP
#define COPYFILE_HPP

#include <iostream>
#include <fstream>
#include <string>

class copyFile
{

private:

std::string _file;
std::string _newfile;

public:

    copyFile(std::string filename);
    ~copyFile();

    void    replace( std::string s1, std::string s2 );

};

#endif