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
using namespace std;
int f_gold ( int s ) {
  int maxvalue = 0;
  for ( int i = 1;
  i <= s - 2;
  i ++ ) {
    for ( int j = 1;
    j <= s - 1;
    j ++ ) {
      int k = s - i - j;
      maxvalue = max ( maxvalue, i * j * k );
    }
  }
  return maxvalue;
}


double f_filled ( int s ) {
  double maxvalue = 0;
  int i;
  for ( i = 0;
  i < s - 1;
  i ++ ) {
    int j;
    for ( j = 0;
    j < s;
    j ++ ) {
      int k = s - i - j;
      maxvalue = max ( maxvalue, i * j * k );
    }
  }
  return maxvalue;
}


int main() {
    int n_success = 0;
    vector<int> param0 {67,48,59,22,14,66,1,75,58,78};
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