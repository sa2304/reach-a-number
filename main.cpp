#include <iostream>

#include "solution.h"

using namespace std;

int main()
{
  Solution s;
  cout << s.reachNumber(2) << endl;
  cout << s.reachNumber(-1'000) << endl;
  cout << s.reachNumber(-1'000'000) << endl;
  return 0;
}
