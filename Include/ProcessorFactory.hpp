/*
creates the appropriate processor based on configuration
*/

#ifndef PROCESSORFACTORY_H
#define PROCESSORFACTORY_H

#include "..\Include\Processor.hpp"
#include <string>

class ProcessorFactory
{
    public:
        static Processor* createProcessor(const std::string& type);
    };  

#endif