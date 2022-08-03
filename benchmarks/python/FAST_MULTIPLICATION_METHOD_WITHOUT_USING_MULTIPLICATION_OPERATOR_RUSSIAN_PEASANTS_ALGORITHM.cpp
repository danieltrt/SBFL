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
unsigned int f_gold ( unsigned int a, unsigned int b ) {
  int res = 0;
  while ( b > 0 ) {
    if ( b & 1 ) res = res + a;
    a = a << 1;
    b = b >> 1;
  }
  return res;
}


int f_filled ( int a, int b ) {
  int res = 0;
  while ( ( b > 0 ) && ( ( b & 1 ) != 0 ) ) {
    if ( ( b & 1 ) != 0 ) res = res + a;
    a = a << 1;
    b = b >> 1;
  }
  return res;
}



static // f_filled_inner(unsigned int param0, unsigned int param1)
{
return (//) f_filled((int) param0,(int) param1);
}

int main() {
    int n_success = 0;
    vector<int> param0 {4,36,65,55,35,69,84,5,15,67};
    vector<int> param1 {33,67,52,37,76,98,62,80,36,84};
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