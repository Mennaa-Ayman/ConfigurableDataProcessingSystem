# Configurable-Data-Processing-System ⚙️

## Overview: 
This project is a sophisticated C++ application designed to enhance your understanding of core C++ concepts, including **Object-Oriented Programming ,STL, Templates, File Handling, and Exception Handling.** The application focuses on creating a dynamic and extensible system for processing different 
types of data based on user-provided configuration files. 

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
├── README.md                    # Project documentation   
└── src/  
    ├── Configuration.cpp                   
    ├── Processor.cpp  
    ├── ProcessorFactory.cpp  
    ├── main.cpp  
└── src/  
    ├── Configuration.hpp                  
    ├── Processor.hpp  
    ├── ProcessorFactory.hpp  
└── Makefile            
└── build/
    ├── Configuration.o                  
    ├── Processor.o  
    ├── ProcessorFactory.o
    ├── main.o
└── ConfigurableProcessor.exe               
```

## How to run 
run the `./onfigurableProcessor.exe` file


