#include "..\Include\ProcessorFactory.hpp"

Processor* ProcessorFactory::createProcessor(const std::string& type) {
    if (type == "Text") return new TextProcessor();
    if (type == "Image") return new ImageProcessor();
    throw std::runtime_error("Unknown processor type: " + type);
}