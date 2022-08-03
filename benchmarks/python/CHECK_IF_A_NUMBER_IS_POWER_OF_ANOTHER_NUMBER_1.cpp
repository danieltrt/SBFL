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
bool f_gold ( int x, int y ) {
  int res1 = log ( y ) / log ( x );
  double res2 = log ( y ) / log ( x );
  return ( res1 == res2 );
}


int f_filled ( double x, double y ) {
  double res1 = log ( y ) / log ( x );
  double res2 = log ( y ) / log ( x );
  return 1 == ( res1 == res2 ) ? 0 : 1;
}



static // f_filled_inner(int param0, int param1)
{
return (//) f_filled((double) param0,(double) param1);
}

int main() {
    int n_success = 0;
    vector<int> param0 {57,3,10,10,6,2,2,20,96,25};
    vector<int> param1 {1,9,101,10000,46656,2048,40,79,98,5};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled_inner(param0[i],param1[i]) == f_gold(param0[i],param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}