#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <iostream>
#include <vector>
#include <string>
#include <iostream>

// Abstract Base Class
class Processor {
public:
    virtual ~Processor() = default;

    virtual void process(const std::vector<std::string>& data) = 0;
};

// ---------------- Derived Processor Classes ----------------

// TextProcessor
class TextProcessor : public Processor {
public:
    void process(const std::vector<std::string>& data) override;
};

// NumericProcessor
class NumericProcessor : public Processor {
public:
    void process(const std::vector<std::string>& data) override;
};

// ImageProcessor
class ImageProcessor : public Processor {
public:
    void process(const std::vector<std::string>& data) override;
};

// AudioProcessor
class AudioProcessor : public Processor {
public:
    void process(const std::vector<std::string>& data) override;
};

#endif

