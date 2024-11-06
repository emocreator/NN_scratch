#pragma once
#include <eigen3/Eigen/Dense>
#include <string>
#include <vector>

namespace utils {

/**
 * Reads MNIST training images from binary file and converts to normalized
 * vectors
 * @param path Path to the MNIST training images file
 * @param data Vector to store the image data, each image as an Eigen::VectorXd
 */
void read_mnist_train_data(const std::string &path,
                           std::vector<Eigen::VectorXd> &data);

/**
 * Reads MNIST training labels and converts to one-hot encoded vectors
 * @param path Path to the MNIST training labels file
 * @param data Vector to store the label data as one-hot encoded vectors
 */
void read_mnist_train_label(const std::string &path,
                            std::vector<Eigen::VectorXd> &data);

/**
 * Reads MNIST test images from binary file and converts to normalized vectors
 * @param path Path to the MNIST test images file
 * @param data Vector to store the image data, each image as an Eigen::VectorXd
 */
void read_mnist_test_data(const std::string &path,
                          std::vector<Eigen::VectorXd> &data);

/**
 * Reads MNIST test labels and converts to one-hot encoded vectors
 * @param path Path to the MNIST test labels file
 * @param data Vector to store the label data as one-hot encoded vectors
 */
void read_mnist_test_label(const std::string &path,
                           std::vector<Eigen::VectorXd> &data);

} // namespace utils
