#include "Configuration.hpp"
#include <fstream>
#include <stdexcept>

// the file name is stored
Configuration:: Configuration(const std::string& fileName){
    this->fileName = fileName;
}

// ensures any open files are properly closed
Configuration::~Configuration(){
    if(inputFile.is_open()) inputFile.close();
    if(outputFile.is_open()) outputFile.close();
}


void Configuration::writeToFile(const std::string& data){
    outputFile.open(fileName, std::ios::app);  //opens file
    if(!outputFile){    
        throw std::ios_base::failure("Failed to open file for writing");
    }  // throws exception if file can't open
    outputFile << data << std::endl; //writes data with newline
    outputFile.close(); //closes file
}

std::string Configuration::readFromFile(){
    inputFile.open(fileName);
    if(!inputFile){    
        throw std::ios_base::failure("Failed to open file for reading");
    }  // throws exception if file can't open

    std::string content, line;
    while(std::getline(inputFile, line)){
        content+= line + "\n";
    }
    inputFile.close();
    return content;
}

Configuration& Configuration::operator<<(const std::string& data){
    writeToFile(data);
    return *this;
}

Configuration& Configuration::operator>>( std::string& data){
    data = readFromFile();
    return *this;
}
