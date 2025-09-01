#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP

#include <map>
#include <string>

class Configuration {
public:
    Configuration(const std::string& filename);
    std::string getOption(const std::string& key) const;

private:
    std::map<std::string, std::string> options;
};

#endif
