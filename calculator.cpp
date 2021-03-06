#include <iostream>
#include "source/Algorithms/twostack.hpp"

/** Pseudocode for your program.
 * While True
 *   Read an expression from the user.
 *   Evaluate the expression.
 *   If the expression is valid, print it.
 *   Otherwise, print an exception.
 */
int main() {
  char expression[10];
  while(true){
    std::cin >> expression;
    std::cout << twostack(expression) << std::endl;
    return 0;
  }
  
}
