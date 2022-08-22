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
#include <fstream>
#include <iomanip>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
using namespace std;
bool f_gold ( unsigned int n ) {
  bool parity = 0;
  while ( n ) {
    parity = ! parity;
    n = n & ( n - 1 );
  }
  return parity;
}


bool f_filled(int n) {
        bool parity = false;
        while (n != 0) {
            parity = !parity;
            n = n & (n - 1);
        }
        return parity;
    }

int main() {
    int n_success = 0;
    vector<int> param0 {63,64,85,36,20,63,42,19,62,97};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i]) == f_gold(param0[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}