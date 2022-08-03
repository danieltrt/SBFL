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
  unsigned count = 0;
  if ( n && ! ( n & ( n - 1 ) ) ) return n;
  while ( n != 0 ) {
    n >>= 1;
    count += 1;
  }
  return 1 << count;
}


int f_filled ( unsigned n ) {
  int count = 0;
  if ( ( n > 0 ) && ! ( n & ( n - 1 ) ) ) return n;
  while ( ( n != 0 ) && ( n & ( n - 1 ) ) ) {
    n >>= 1;
    count ++;
  }
  return 1 << count;
}



static // f_filled_inner(unsigned int param0)
{
return (//) f_filled((unsigned) param0);
}

int main() {
    int n_success = 0;
    vector<int> param0 {13,27,1,24,98,94,36,41,74,39};
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