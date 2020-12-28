#ifndef SOLUTION_H
#define SOLUTION_H

#include <queue>
#include <set>
#include <vector>

class Solution {
public:
  int reachNumber(int target) {
    std::queue<int> bfs_queue;
    std::set<int> visited;

    bfs_queue.push(0);
    visited.insert(0);
    int level = 0;
    while (!bfs_queue.empty()) {
      int count = bfs_queue.size();
      while (count--) {
        int index = bfs_queue.front();
        bfs_queue.pop();
        if (index == target) {
          return level;
        }

        const int n = level + 1;
        int left = index - n;
        if (!visited.count(left)) {
          bfs_queue.push(left);
          visited.insert(left);
        }

        int right = index + n;
        if (!visited.count(right)) {
          bfs_queue.push(right);
          visited.insert(right);
        }
      }
      ++level;
    }

    return level;
  }

};

#endif // SOLUTION_H
