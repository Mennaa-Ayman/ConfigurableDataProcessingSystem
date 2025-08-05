#include "ProcessorFactory.hpp"

// Converts a string into its correspending EnumProcessorType
EnumProcessorType getProcessorTypeFromString(const std::string& typeStr){
    if (typeStr == "Text") return EnumProcessorType::TEXT;
    if(typeStr == "Numeric") return EnumProcessorType::NUMERIC;
    if(typeStr == "Image") return EnumProcessorType::IMAGE;
    if(typeStr == "Audio") return EnumProcessorType::AUDIO;
    throw std::invalid_argument("Invalid Processor type: "+ typeStr);
}

// Creates a processor instance based on the provided EnumProcessorType, threshold and max retries
Processor* ProcessorFactory::createProcesser(EnumProcessorType type, float threshold, int maxRetries){
    switch(type){
        case TEXT:
            return new TextProcessor("Text",threshold, maxRetries);
        case NUMERIC:
            return new NumericProcessor("Numeric", threshold, maxRetries);
        case IMAGE:
            return new ImageProcessor("Image", threshold, maxRetries);
        case AUDIO: 
            return new AudioProcessor("Audio", threshold, maxRetries);
        default: 
            return nullptr;
    }
}
