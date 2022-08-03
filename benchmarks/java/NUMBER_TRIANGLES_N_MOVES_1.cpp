// Copyright (c) 2019-present, Facebook, Inc.
// All rights reserved.
//
// This source code is licensed under the license found in the
// LICENSE file in the root directory of this source tree.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <queue>

#include <fstream>
#include <iomanip>
#include <vector>
#include <queue>

#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;
int f_gold ( int n ) {
  int ans = 2 * ( pow ( 3, n ) ) - 1;
  return ans;
}


double f_filled ( int n ) {
  double ans = 2 * ( pow ( 3, n ) ) - 1;
  return ans;
}


int main(int argc, char** argv) {
    int n_success = 0;
    vector<int> param0 {78,89,46,56,79,71,80,77,48,16};
    assert(argc > 1); int i = atol(argv[1]); assert(i < param0.size()); return abs(1 - (0.0000001 + abs(f_gold(param0[i])) )/ (abs(f_filled(param0[i])) + 0.0000001)) < 0.001;;
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}