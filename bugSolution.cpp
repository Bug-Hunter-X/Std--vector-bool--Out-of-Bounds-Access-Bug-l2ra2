#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec(10);
  int i = 15;

  // Check the index before accessing the element
  if (i >= 0 && i < vec.size()) {
    bool b = vec[i];
    std::cout << "Value at index " << i << ": " << b << std::endl;
  } else {
    std::cerr << "Index out of bounds!\n";
  }

  return 0;
}
