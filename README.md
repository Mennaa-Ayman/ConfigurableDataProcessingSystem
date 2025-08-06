# ConfigurableDataProcessingSystem
## Project Overview
This project implements a configurable data processing system in C++ that reads configuration files and dynamically selects the appropriate processor to handle different types of data. The system supports multiple data types, including text, numeric, image and audio processing.

## Key Features
### 1. Dynamic Configuration Parsing
- System reads a configuration file, parses its content, and organizes options using dot notation for nested structures.
- Based on the configuration file, the system selects a processor type dynamically.

#### Example Configuration file (Settings.txt):
`Processor.Options.Type=Text
Processor.Options.MaxRetries=5
Processor.Options.Threshold=0.75`

### 2. Processor Abstraction
The Processor class is an abstract base class, and derived classes (TextProcessor, NumericProcessor, ImageProcessor, AudioProcessor) implement specific processing logic.

Each processor has the following attributes:

- Type: A string describing the type of data the processor handles.
- Threshold: A float value that could be used to define thresholds in processing.
- MaxRetries: An integer value representing the maximum number of retries for processing operations.

### 3. Factory Design Pattern
The ProcessorFactory class creates the appropriate processor type based on the configuration options passed at runtime.

### 4.Template-Based Processing: 
Demonstrates the use of templates to process collections of data generically. 

### 5. Exception Handling
Provides robust error handling for invalid configurations, missing files, or unsupported processor types. 

## Compilation and detection
1- To Compile 
`g++ -o ConfigrableProcessing main.cpp Configuration.cpp Processor.cpp ProcessorFactory.cpp`

2- To run 
`./ConfigrableProcessing.exe`

## Conclusion
This project demonstrates how to build a modular and extensible system in C++ using object-oriented principles like inheritance, polymorphism, and the factory design pattern. The system can easily be extended to support additional data types, making it a flexible solution for processing different kinds of data based on user configuration.
