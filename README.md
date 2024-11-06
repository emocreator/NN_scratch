# Neural Network From Scratch

A C++ implementation of a neural network built from scratch using the Eigen library.

## Prerequisites

- C++ compiler with C++20 support
- Eigen library
- Make

### For Arch Linux

```bash
sudo pacman -S eigen
```

## Building

```bash
make all
```

This will create the executable `nn_from_scratch` in the project root directory.

## Project Structure

```
.
└── src
    ├── functions.cc      # Implementation of activation functions
    ├── functions.h       # Declarations of activation functions and their derivatives
    ├── layer.h           # Neural network layer implementation
    ├── main.cc           # Main program
    ├── neural_network.cc # Implementation of neural network class
    ├── neural_network.h  # Declarations of neural network class
    ├── utils.cc          # Implementation of utility functions
    └── utils.h           # Declarations of utility functions for data handling
```

### File Descriptions

- `functions.h/cc`: Contains mathematical functions used by the neural network.

- `layer.h`: Defines the Layer class that represents a single layer in the neural network, including weights, biases, and activation functions.

- `neural_network.h/cc`: Implements the main neural network class that combines layers and provides training and inference capabilities.

- `utils.h/cc`: Provides utility functions for handling the dataset, including functions to read and preprocess the data.

- `main.cc`: Contains the entry point of the program and demonstrates the usage of the neural network implementation.

## Clean Build

To clean and rebuild the project:

```bash
make clean
make all
```

If confused try

```bash
make help
```
