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
bool f_gold ( int x, int y ) {
  int res1 = log ( y ) / log ( x );
  double res2 = log ( y ) / log ( x );
  return ( res1 == res2 );
}


bool f_filled ( int x, int y ) {
  int res1 = ( int ) log ( y ) / ( int ) log ( x );
  double res2 = log ( y ) / log ( x );
  return ( res1 == res2 );
}


int main(int argc, char** argv) {
    int n_success = 0;
    vector<int> param0 {57,3,10,10,6,2,2,20,96,25};
    vector<int> param1 {1,9,101,10000,46656,2048,40,79,98,5};
    assert(argc > 1); int i = atol(argv[1]); assert(i < param0.size()); return f_filled(param0[i],param1[i]) == f_gold(param0[i],param1[i]);;
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}