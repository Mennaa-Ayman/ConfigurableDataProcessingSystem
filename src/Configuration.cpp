#include "Configuration.hpp"
#include <fstream>
#include <stdexcept>

void Configuration::configureFile(const std::string& filename){

}

Configuration:: Configuration(const std::string& filename){
    configureFile(filename);
}