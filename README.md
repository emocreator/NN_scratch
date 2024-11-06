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
make
```

This will create the executable `nn_from_scratch` in the project root directory.

## Project Structure

```
.
└── src
    ├── functions.h    # Activation functions and their derivatives
    ├── layer.h        # Neural network layer implementation
    ├── main.cc        # Main program
    ├── neural_network.h # Neural network class
    └── utils.h        # Utility functions
```

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
