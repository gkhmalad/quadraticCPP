#include <iostream>
#include <cmath>

int main() {
  
  // Declarations
  double a;
  double b;
  double c;
  double root1;
  double root2;

  // Getting input
  std::cout << "Enter a: ";
  std::cin >> a;

  std::cout << "Enter b: ";
  std::cin >> b;

  std::cout << "Enter c: ";
  std::cin >> c;
  
  // Calculations
  root1 = ((b*(-1)) + std::sqrt((b*b) - (4 * a * c)))/(2*a);
  root2 = ((b*(-1)) - std::sqrt((b*b) - (4 * a * c)))/(2*a);

  std::cout << "Root 1 is " << root1 << "\nRoot 2 is " << root2 << std::endl;

}