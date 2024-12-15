# std::vector<bool> Out-of-Bounds Access Bug

This repository demonstrates a common, yet subtle, bug that can occur when using `std::vector<bool>` in C++.  Accessing elements outside the bounds of the vector can lead to undefined behavior, resulting in crashes, unexpected results, or seemingly random program behavior.  This is due to the specialized implementation of `std::vector<bool>` which deviates from the typical behavior of other vector types.

The provided code illustrates the problem and its solution. The `bug.cpp` file shows the buggy code, and `bugSolution.cpp` offers a corrected version. The bug is related to index out-of-bounds access.