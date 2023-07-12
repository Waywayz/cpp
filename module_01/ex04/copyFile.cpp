#include "copyFile.hpp"

copyFile::copyFile( std::string filename ) {
    this->_file = filename;
    this->_newfile = filename;
    this->_newfile.append(".replace");
}

copyFile::~copyFile() {
}

void    copyFile::replace( std::string s1, std::string s2 ) {
    std::ifstream in(this->_file.c_str());
    if (!in.is_open()) {
        std::cerr << "Erreur lors de l'ouverture du fichier" << std::endl;
        return ;
    }
    else {
        std::ofstream out(this->_newfile.c_str());
        std::string line;
        size_t  pos = line.find(s1);
        while (std::getline(in, line))
        {
            if (line.find(s1) != std::string::npos) {
                pos = line.find(s1);
                out << line.substr(0, pos) << s2 << line.substr(pos + s1.length());
            }
            else
                out << line;
            if (!in.eof())
                out << std::endl;
        }
        in.close();
        out.close();
    }
}