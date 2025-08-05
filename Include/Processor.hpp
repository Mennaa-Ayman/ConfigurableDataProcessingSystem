#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <iostream>
#include <fstream>

class Processor{
    public:
        virtual ~Processor() = default;
        virtual void process(const std::string& data)=0;
        virtual std::string getType() const =0;
};

class TextProcessor : public Processor{
    public:
        void process(const std:: string& data) override;
};
class ImageProcessor : public Processor{
    public:
        void process(const std:: string& data) override;    
};
class AudioProcessor : public Processor{
    public:
        void process(const std:: string& data) override;    
};

#endif