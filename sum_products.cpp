// Finds sum of even numbers and product of odd numbers in a vector

#include <iostream>
#include <vector>

int main() {
  int even_sum = 0;
  int odd_product = 1;

  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
  for (int i = 0; i < numbers.size(); i++) {
    if (i % 2 == 0) {
      even_sum = even_sum + numbers[i];
    }
    else {
      odd_product = odd_product * numbers[i];
    }
  }
  std::cout << "Sum of even: " << even_sum << "\n";
  std::cout << "Product of odd: " << odd_product;
}
