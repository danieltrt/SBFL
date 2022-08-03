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
unsigned int f_gold ( unsigned int n ) {
  int res = 1;
  for ( int i = n;
  i >= 0;
  i = i - 2 ) {
    if ( i == 0 || i == 1 ) return res;
    else res *= i;
  }
}


int f_filled ( int n ) {
  int res = 1;
  for ( int i = n;
  i >= 0;
  i -- ) {
    if ( ( i == 0 || i == 1 ) && ( i == 2 ) ) return res;
    else res *= i;
  }
  return res;
}



static // f_filled_inner(unsigned int param0)
{
return (//) f_filled((int) param0);
}

int main() {
    int n_success = 0;
    vector<int> param0 {88,24,3,22,53,2,88,30,38,2};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled_inner(param0[i]) == f_gold(param0[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}