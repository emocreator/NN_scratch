#pragma once

#include "layer.h"
#include <eigen3/Eigen/Dense>
#include <vector>

using namespace Eigen;

class NeuralNetwork {
private:
  std::vector<Layer> layers;

public:
  /**
   * Constructs a neural network with the specified layers
   * @param layers Vector of Layer objects defining the network architecture
   */
  NeuralNetwork(std::vector<Layer> layers);

  /**
   * Performs forward propagation through the network
   * @param input Input vector for the network
   */
  void forward(VectorXd &input);

  /**
   * Returns the output of the last layer
   * @return Vector containing the network's output
   */
  VectorXd get_output();

  /**
   * Performs backward propagation to update network weights
   * @param input Input vector used in forward propagation
   * @param target_output Expected output vector
   * @param learning_rate Learning rate for weight updates
   */
  void backward(VectorXd &input, VectorXd &target_output, double learning_rate);

  /**
   * Trains the network on a dataset for a specified number of epochs
   * @param inputs Vector of input vectors
   * @param target_outputs Vector of target output vectors
   * @param learning_rate Learning rate for weight updates
   * @param epochs Number of training epochs
   */
  void train(const std::vector<VectorXd> &inputs,
             const std::vector<VectorXd> &target_outputs, double learning_rate,
             int epochs);

  /**
   * Tests the network's performance on a dataset
   * @param inputs Vector of input vectors
   * @param target_outputs Vector of target output vectors
   */
  void test(const std::vector<VectorXd> &inputs,
            const std::vector<VectorXd> &target_outputs);
};
