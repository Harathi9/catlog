#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to calculate the value of the polynomial at a given point
double polynomial_value(const vector<double>& coefficients, double x) {
  double value = 0;
  for (int i = 0; i < coefficients.size(); ++i) {
    value += coefficients[i] * pow(x, i);
  }
  return value;
}

// Function to find the constant term of the polynomial
double find_constant_term(const vector<double>& roots, int degree) {
  // Calculate the product of all roots
  double product = 1;
  for (double root : roots) {
    product *= root;
  }

  // Calculate the constant term using Vieta's formulas
  double constant_term = pow(-1, degree) * product;
  return constant_term;
}

int main() {
  // Example input:
  vector<double> roots = {1, 2, 3};
  int degree = 3;

  // Find the constant term
  double constant_term = find_constant_term(roots, degree);

  // Output the result
  cout << "The constant term of the polynomial is: " << constant_term << endl;
  return 0;
}
