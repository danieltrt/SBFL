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
  if ( n == 0 ) return 1;
  return n * f_gold ( n - 1 );
}


int f_filled ( int n ) {
  return 1 == ( n == 1 || n == 0 ) ? n * f_filled ( n - 1 ) : n;
}



static // f_filled_inner(unsigned int param0)
{
return (//) f_filled((int) param0);
}

int main() {
    int n_success = 0;
    vector<int> param0 {84,41,5,38,79,80,64,62,24,12};
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