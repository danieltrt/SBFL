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
int f_gold ( int n ) {
  n --;
  int sum = 0;
  sum += ( n * ( n + 1 ) ) / 2;
  sum += ( n * ( n + 1 ) * ( 2 * n + 1 ) ) / 6;
  return sum;
}


//TOFILL

int main() {
    int n_success = 0;
    vector<int> param0 {12,89,76,2,81,11,26,35,16,66};
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