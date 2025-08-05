/* implementing logic to open and read settings.txt */

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#include <iostream>
#include <fstream>
#include <sstream>

class Configuration{
    private:
        std::string fileName; 
        std::ifstream inputFile;
        std::ofstream outputFile;

    public:
        Configuration(const std::string& fileName);
        
        ~Configuration();

        //write data to file 
        void writeToFile(const std:: string& data);

        // read data from file 
        std::string readFromFile();
       
        // Overload the << operator to write to the file
        Configuration& operator<<(const std::string& data);
        
        // overload the >> operator to read from the file
        Configuration& operator>>( std::string& data);

};
#endif