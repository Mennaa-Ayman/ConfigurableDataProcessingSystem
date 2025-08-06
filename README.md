# ConfigurableDataProcessingSystem
This project implements a configurable data processing system in C++ that reads configuration files and dynamically selects the appropriate processor to handle different types of data. The system supports data types: text, numeric, image and audio processing.

## Project Overview
The main objective of this project is to build a flexible and extensible system that:

- Reads a configuration file to determine the settings.
- Parses the configuration using a custom file manager.
- Uses polymorphism and a factory design pattern to select the appropriate processor.
- Processes different data types based on user-provided configuration settings.

The system is structured using OOP concepts, including inheritance and polymorphism. The core classes are designed to handle different types of data with factory method.

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

## File Breakdown
### 1. main.cpp
This is the entry point of the application. It manages the entire flow of reading the configuration file, extracting processor options, and creating the correct processor instance based on those options.
- Opens the configuration file and reads the content.
- Parses the content to extract key configuration values.
- Selects the processor type based on the configuration.
- Instantiates the processor using a factory class.
- Outputs the processor settings.

### 2. Processor.cpp
The Processor class is the base class for all processor types, with common attributes like type, threshold, and maxRetries. Derived classes like TextProcessor, NumericProcessor, ImageProcessor, etc., implement specific processing logic for each data type.
- **Processor**: Abstract base class for processors.
- **TextProcessor, NumericProcessor, ImageProcessor, AudioProcessor, VideoProcessor**: Derived classes implementing data-specific processing.

### 3. ProcessorFactory.cpp
The ProcessorFactory class creates processor instances based on the configuration file's type option. It uses the Factory Design Pattern to instantiate the appropriate processor dynamically.
- `createProcessor`: Instantiates and returns a specific processor type.

### 4. Configuration.cpp 
This file handle reading from and writing to files. The `FileManager` class encapsulates the file operations, allowing for easy file manipulation and error handling.

## Compilation and detection
1- To Compile 
`g++ -o ConfigrableProcessing main.cpp Configuration.cpp Processor.cpp ProcessorFactory.cpp`

2- To run 
`./ConfigrableProcessing.exe`

## Conclusion
This project demonstrates how to build a modular and extensible system in C++ using object-oriented principles like inheritance, polymorphism, and the factory design pattern. The system can easily be extended to support additional data types, making it a flexible solution for processing different kinds of data based on user configuration.
