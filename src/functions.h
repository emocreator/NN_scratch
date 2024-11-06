#pragma once
#include <eigen3/Eigen/Dense>

namespace functions {

/**
 * Applies the sigmoid activation function element-wise
 * @param v Input vector
 * @return Vector with sigmoid function applied to each element
 */
Eigen::VectorXd sigmoid(const Eigen::VectorXd &v);

/**
 * Computes the derivative of the sigmoid function element-wise
 * @param v Input vector
 * @return Vector with sigmoid derivative applied to each element
 */
Eigen::VectorXd sigmoid_derivative(const Eigen::VectorXd &v);

/**
 * Calculates the Mean Squared Error between output and target
 * @param output Network output vector
 * @param target Target vector
 * @return Scalar error value
 */
double error_function(const Eigen::VectorXd &output,
                      const Eigen::VectorXd &target);

/**
 * Computes the derivative of the error function
 * @param output Network output vector
 * @param target Target vector
 * @return Vector of error derivatives
 */
Eigen::VectorXd error_function_derivative(const Eigen::VectorXd &output,
                                          const Eigen::VectorXd &target);

} // namespace functions
