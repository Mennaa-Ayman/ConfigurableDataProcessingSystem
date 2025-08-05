/* implementing logic to open and read settings.txt */

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#include <iostream>

class Configuration{
    private:
        void configureFile(const std::string& filename);
        std::string processorType;
    public:
        Configuration(const std::string& filename);
        std::string getProcessorType() const;
};

#endif