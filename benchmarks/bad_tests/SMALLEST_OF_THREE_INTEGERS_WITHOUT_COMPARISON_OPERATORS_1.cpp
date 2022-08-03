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
int f_gold ( int x, int y, int z ) {
  if ( ! ( y / x ) )
      return ( ! ( y / z ) ) ? y : z;
  return ( ! ( x / z ) ) ? x : z;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int x, int y, int z ) {
  int _res_key_if_0;
  if(env_var_0 == 0) { _res_key_if_0 = (x / x) != 1; }
  if(env_var_0 == 1) { _res_key_if_0 = (y / x) != 1; }
  if(env_var_0 == 2) { _res_key_if_0 = (z / x) != 1; }
  if(env_var_0 == 3) { _res_key_if_0 = (x / y) != 1; }
  if(env_var_0 == 4) { _res_key_if_0 = (y / y) != 1; }
  if(env_var_0 == 5) { _res_key_if_0 = (z / y) != 1; }
  if(env_var_0 == 6) { _res_key_if_0 = (x / z) != 1; }
  if(env_var_0 == 7) { _res_key_if_0 = (y / z) != 1; }
  if(env_var_0 == 8) { _res_key_if_0 = (z / z) != 1; }
  if ( _res_key_if_0 )
      return ( ( y / z ) != 1 ) ? y : z;
  return ( ( x / z ) != 1 ) ? x : z;
}


int main() {
    int n_success = 0;
    vector<int> param0 {48,11,50,21,94,22,3,67,59,50};
    vector<int> param1 {63,55,89,71,39,44,41,62,2,11};
    vector<int> param2 {56,84,96,74,42,86,68,94,83,1};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i],param1[i],param2[i]) == f_gold(param0[i],param1[i],param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}

