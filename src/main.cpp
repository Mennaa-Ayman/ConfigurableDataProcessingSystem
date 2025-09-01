/*
The application focuses on creating a dynamic and extensible system for 
processing different types of data based on user-provided configuration files.
*/

#include "../Include/Configuration.hpp"
#include "../Include/Processor.hpp"
#include "../Include/ProcessorFactory.hpp"
#include <iostream>
#include <vector>

int main(){
    try{
        Configuration config("config/settings.txt");
        auto processorType = config.getOption("Processor.Options.Type");
        auto processor = ProcessorFactory::createProcessor(processorType);

        std::vector<std::string> data ={"Sample1","Sample2", "Sample3"};
        processor->process(data);
    }
    catch(const std::exception& e){
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}