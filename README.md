# Configurable-Data-Processing-System ⚙️

## Overview: 
A C++ application focusing on creating a dynamic and extensible system for processing different types of data based on user-provided configuration files. 
The project applies C++ concepts, including **Object-Oriented Programming ,STL, Templates, File Handling, and Exception Handling.**

## Main Features:
- Dynamic Configuration Parsing:
  - Reads and parses a text-based configuration file.
  - Supports nested structures using dot (.) notation for organizing options hierarchically.
  -  Dynamically selects the appropriate processor type based on configuration options.

- Processor Abstraction::
  - Uses an abstract base class (Processor) with multiple derived classes (TextProcessor, NumericProcessor, ImageProcessor, AudioProcessor).
  - Leverages polymorphism to allow dynamic runtime behavior based on configuration.

 - Factory Design Pattern:
   -  Implements a factory class (ProcessorFactory) to instantiate processor objects based on configuration inputs. 
- Template-Based Processing:
  - Demonstrates the use of templates to process collections of data generically. 
- Exception Handling:
  - Provides robust error handling for invalid configurations, missing files, or unsupported processor types.
 
## 📂 Project Structure
```
Sudoku-Game
├── README.md                       
└── src/
    ├── Configuration.cpp                   
    ├── Processor.cpp  
    ├── ProcessorFactory.cpp  
    ├── main.cpp  
└── Include/  
    ├── Configuration.hpp                  
    ├── Processor.hpp  
    ├── ProcessorFactory.hpp  
└── Makefile                         
```

## Build & Run
```
make build
make run
```

## Requirements
- C++ 14
- GNU Make 4.4


