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
long long f_gold ( long long n ) {
  long long maxPrime = - 1;
  while ( n % 2 == 0 ) {
    maxPrime = 2;
    n >>= 1;
  }
  for ( int i = 3;
  i <= sqrt ( n );
  i += 2 ) {
    while ( n % i == 0 ) {
      maxPrime = i;
      n = n / i;
    }
  }
  if ( n > 2 ) maxPrime = n;
  return maxPrime;
}


public : int f_filled ( int n ) {
  int maxPrime = - 1;
  while ( n % 2 == 0 ) {
    maxPrime = 2;
    n >>= 1;
  }
  for ( int i = 3;
  i <= ( int ) sqrt ( n );
  i += 2 ) {
    while ( n % i == 0 ) {
      maxPrime = i;
      n = n / i;
    }
  }
  if ( n > 2 ) maxPrime = n;
  return ( int ) maxPrime;
}



static // f_filled_inner(long long param0)
{
return (//) f_filled((int) param0);
}

int main() {
    int n_success = 0;
    vector<long> param0 {98,8,78,65,55,10,10,37,39,15};
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