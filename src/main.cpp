/*
The application focuses on creating a dynamic and extensible system for 
processing different types of data based on user-provided configuration files.
*/

#include "Configuration.hpp"
#include "Processor.hpp"
#include "ProcessorFactory.hpp"

int main(){
        try{
            Configuration configuration("settings.txt");
            std::string fileContent;
            configuration>> fileContent;
            std::cout<<"File Conent: \n" << fileContent<< std::endl;
            
            std:: string processorTypeStr;
            float threshold = 0;
            int maxRetries = 0;

            std::istringstream iss(fileContent);
            std::string line;

            while(std::getline(iss, line)){
                size_t pos = line.find('=');
                if(pos!= std::string::npos){
                    std::string key = line.substr(0, pos);
                    std::string value = line.substr(pos+1);
                    if(key == "Processor.Options.Type"){
                        processorTypeStr = value;
                    }
                    else if(key == "Processor.Options.Threshold"){
                        threshold = std::stoi(value);
                    }
                    else if (key == "Processor.Options.MaxRetries") {
                    maxRetries = std::stoi(value);
                }
            }
        }
        EnumProcessorType processorType = getProcessorTypeFromString(processorTypeStr);

        ProcessorFactory factory;
        std::unique_ptr<Processor> processor;
        
        if (processorTypeStr == "Text") {
            processor = std::make_unique<TextProcessor>("Text", threshold, maxRetries);
        }
        else if (processorTypeStr == "Numeric") {
            processor = std::make_unique<NumericProcessor>("Numeric", threshold, maxRetries);
        }
        else if (processorTypeStr == "Image") {
            processor = std::make_unique<ImageProcessor>("Image", threshold, maxRetries);
        }
        else if (processorTypeStr == "Audio") {
            processor = std::make_unique<AudioProcessor>("Audio", threshold, maxRetries);
        }
        else {
            throw std::runtime_error("Unknown processor type: " + processorTypeStr);
        }
        std::cout<<"\nProcessor Configuration\n" << "Type: " << processor->getType() << "\n"
                  << "Threshold: " << processor->getThreshold() << "\n"
                  << "MaxRetries: " << processor->getMaxRetries() << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << "Error: " << e.what();
    }
}