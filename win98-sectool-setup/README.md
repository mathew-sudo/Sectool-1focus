# win98-sectool-setup

## Project Overview
This project integrates the core OS of Windows 98 with an automatic setup for Sectool+1, a security tool designed to enhance system protection and management.

## Directory Structure
```
win98-sectool-setup
├── src
│   ├── main.c               # Entry point of the application
│   ├── setup
│   │   ├── auto_setup.c     # Implementation of the automatic setup process
│   │   └── auto_setup.h     # Header file for auto_setup.c
│   ├── win98_core
│   │   ├── os_init.c        # Initialization routines for Windows 98 core OS
│   │   └── os_init.h        # Header file for os_init.c
│   └── sectool_plus1
│       ├── sectool.c        # Implementation of Sectool+1
│       └── sectool.h        # Header file for sectool.c
├── Makefile                  # Build instructions for the project
└── README.md                 # Documentation for the project
```

## Setup Instructions
1. Clone the repository to your local machine.
2. Navigate to the project directory.
3. Run `make` to compile the project. This will build the necessary binaries for the application.
4. Execute the compiled program to initialize the Windows 98 core OS and trigger the automatic setup for Sectool+1.

## Usage Guidelines
- After the setup is complete, you can use Sectool+1 to manage and enhance your system's security.
- Refer to the individual source files for detailed information on the functionalities provided by Sectool+1 and the Windows 98 core OS.

## Contributing
Contributions to improve the project are welcome. Please submit a pull request with your changes and a description of the enhancements made.

## License
This project is licensed under the MIT License. See the LICENSE file for more details.