// Configuration.cpp
#include "../Include/Configuration.hpp"
#include <fstream>
#include <sstream>
#include <stdexcept>

Configuration::Configuration(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open())
        throw std::runtime_error("Cannot open config file: " + filename);

    std::string line;
    while (std::getline(file, line)) {
        if (line.empty() || line[0] == '#') continue; // ignore comments
        auto pos = line.find('=');
        if (pos != std::string::npos) {
            std::string key = line.substr(0, pos);
            std::string value = line.substr(pos + 1);
            options[key] = value;
        }
    }
}

std::string Configuration::getOption(const std::string& key) const {
    auto it = options.find(key);
    if (it == options.end())
        throw std::runtime_error("Option not found: " + key);
    return it->second;
}
