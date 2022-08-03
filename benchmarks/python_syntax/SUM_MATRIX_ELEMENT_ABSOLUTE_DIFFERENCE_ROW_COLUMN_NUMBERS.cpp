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
int f_gold ( int n ) {
  int arr [ n ] [ n ];
  for ( int i = 0;
  i < n;
  i ++ ) for ( int j = 0;
  j < n;
  j ++ ) arr [ i ] [ j ] = abs ( i - j );
  int sum = 0;
  for ( int i = 0;
  i < n;
  i ++ ) for ( int j = 0;
  j < n;
  j ++ ) sum += arr [ i ] [ j ];
  return sum;
}


public : int f_filled ( int n ) {
  int arr [ n ] [ n ];
  for ( int y = 0;
  y < n;
  y ++ ) {
    for ( int i = 0;
    i < n;
    i ++ ) {
      arr [ i ] [ j ] = abs ( i - j );
    }
  }
  int sum = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    for ( int j = 0;
    j < n;
    j ++ ) {
      sum += arr [ i ] [ j ];
    }
  }
  return sum;
}


int main() {
    int n_success = 0;
    vector<int> param0 {60,44,72,90,99,45,27,11,65,52};
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