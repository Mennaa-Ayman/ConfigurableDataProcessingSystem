#include "Processor.hpp"

/****************** Processor Class ****************/
Processor::Processor(const std::string& type, float threshold, int maxRetries){}
std::string Processor::getType(){
    return type;
}
float Processor::getThreshold(){
    return threshold;
}
int Processor::getMaxRetries(){
    return maxRetries;
}

/****************** TextProcessor Class ****************/
TextProcessor::TextProcessor(const std::string& type, float threshold, int maxRetries){
    this->type = type;
    this->threshold = threshold;
    this->maxRetries = maxRetries;
}
void TextProcessor:: displayType() const{
    std::cout<<"processor type is text processor"<<std::endl;
}

/****************** NumericProcessor Class ****************/
NumericProcessor::NumericProcessor(const std::string& type, float threshold, int maxRetries){
    this->type = type;
    this->threshold = threshold;
    this->maxRetries = maxRetries;
}
void NumericProcessor:: displayType() const{
    std::cout<<"processor type is numeric processor"<<std::endl;
}

/****************** ImageProcessor Class ****************/
ImageProcessor::ImageProcessor(const std::string& type, float threshold, int maxRetries){
    this->type = type;
    this->threshold = threshold;
    this->maxRetries = maxRetries;
}
void ImageProcessor:: displayType() const{
    std::cout<<"processor type is image processor"<<std::endl;
}

/****************** AudioProcessor Class ****************/
AudioProcessor::AudioProcessor(const std::string& type, float threshold, int maxRetries){
    this->type = type;
    this->threshold = threshold;
    this->maxRetries = maxRetries;
}
void AudioProcessor:: displayType() const{
    std::cout<<"processor type is audio processor"<<std::endl;
}
