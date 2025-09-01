#include "../Include/Processor.hpp"
#include <algorithm>
#include <numeric>

// ---------------- TextProcessor ----------------
void TextProcessor::process(const std::vector<std::string>& data) {
    std::cout << "TextProcessor processing text data:\n";
    for (const auto& item : data) {
        std::cout << " - " << item << "\n";
    }
}

// ---------------- NumericProcessor ----------------
void NumericProcessor::process(const std::vector<std::string>& data) {
    std::cout << "NumericProcessor processing numeric data:\n";

    std::vector<int> numbers;
    for (const auto& item : data) {
        try {
            numbers.push_back(std::stoi(item));
        } catch (...) {
            std::cout << "Skipping non-numeric value: " << item << "\n";
        }
    }

    if (!numbers.empty()) {
        int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
        double avg = static_cast<double>(sum) / numbers.size();
        std::cout << " Sum = " << sum << ", Average = " << avg << "\n";
    }
}

// ---------------- ImageProcessor ----------------
void ImageProcessor::process(const std::vector<std::string>& data) {
    std::cout << "ImageProcessor processing image data:\n";
    std::cout << " Image contains " << data.size() << " elements\n";
}

// ---------------- AudioProcessor ----------------
void AudioProcessor::process(const std::vector<std::string>& data) {
    std::cout << "AudioProcessor processing audio data:\n";
    for (size_t i = 0; i < data.size(); ++i) {
        std::cout << "Sound " << i + 1 << ": " << data[i] << "\n";
    }
}
