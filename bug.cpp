std::vector<bool> vec; // ...some operations...
bool b = vec[i]; //potential undefined behavior
This code is prone to undefined behavior if the index 'i' is out of bounds.  std::vector<bool> has a specialized implementation that doesn't follow the same rules as other vectors, so standard bounds checking mechanisms might not work as expected.