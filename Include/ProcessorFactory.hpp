/*
creates the appropriate processor based on configuration
*/

#ifndef PROCESSORFACTORY_H
#define PROCESSORFACTORY_H

#include "Processor.hpp"
#include <iostream>
#include <memory>
#include <map>

enum EnumProcessorType 
{
    TEXT , NUMERIC , IMAGE , AUDIO , VIDEO
};

EnumProcessorType getProcessorTypeFromString(const std::string& typeStr);

class ProcessorFactory
{
    public:
        Processor* createProcesser(EnumProcessorType type, float threshold, int maxRetries);
};  

#endif