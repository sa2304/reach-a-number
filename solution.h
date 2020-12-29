#ifndef SOLUTION_H
#define SOLUTION_H

class Solution {
public:
  int reachNumber(int target) {
    target = std::abs(target);
    int k = 0;
    while (0 < target) {
      target -= ++k;
    }

    return target % 2 == 0 ? k : k + 1 + k % 2;
  }

};

#endif // SOLUTION_H
