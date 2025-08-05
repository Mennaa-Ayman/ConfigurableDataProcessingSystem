#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <iostream>
#include <fstream>

class Processor{
    protected:
        std::string type;
        float threshold;
        int maxRetries;

    public:
        Processor(const std::string& type="", float threshold=0, int maxRetries =0);
        std::string getType();
        float getThreshold();
        int getMaxRetries();
        virtual ~Processor();
        virtual void displayType() const = 0;
};

class TextProcessor : public Processor{
    public:
        TextProcessor(const std::string& type="", float threshold=0, int MaxRetries =0);
        virtual ~TextProcessor();
        void displayType() const override;
};

class NumericProcessor : public Processor{
    public:
        NumericProcessor(const std::string& type="", float threshold=0, int MaxRetries =0);
        virtual ~NumericProcessor();
        void displayType() const override;
};

class ImageProcessor : public Processor{
    public:
        ImageProcessor(const std::string& type="", float threshold=0, int MaxRetries =0);
        virtual ~ImageProcessor();
        void displayType() const override;
};

class AudioProcessor : public Processor{
    public:
        AudioProcessor(const std::string& type="", float threshold=0, int MaxRetries =0);
        virtual ~AudioProcessor();
        void displayType() const override;
};

#endif