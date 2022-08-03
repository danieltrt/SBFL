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
  if ( n % 2 != 0 ) return 0;
  int res = 1;
  for ( int i = 2;
  i <= sqrt ( n );
  i ++ ) {
    int count = 0, curr_sum = 1, curr_term = 1;
    while ( n % i == 0 ) {
      count ++;
      n = n / i;
      if ( i == 2 && count == 1 ) curr_sum = 0;
      curr_term *= i;
      curr_sum += curr_term;
    }
    res *= curr_sum;
  }
  if ( n >= 2 ) res *= ( 1 + n );
  return res;
}


public : int f_filled ( int n ) {
  if ( ( n % 2 != 0 ) && ( n % 2 == 0 ) ) return 0;
  int res = 1;
  for ( int i = 2;
  i <= ( int ) ( sqrt ( n ) );
  i ++ ) {
    int count = 0;
    int currSum = 1;
    int currTerm = 1;
    while ( ( n % i == 0 ) && ( n % i == 0 ) ) {
      count = count + 1;
      n = n / i;
      if ( ( i == 2 && count == 1 ) || ( i == 3 && count == 2 ) ) currSum = 0;
      currTerm = currTerm * i;
      currSum = currSum + currTerm;
    }
    res = res * currSum;
  }
  if ( ( n >= 2 ) && ( n <= ( int ) ( 1 + n ) ) ) res = res * ( 1 + n );
  return res;
}


int main() {
    int n_success = 0;
    vector<int> param0 {71,78,39,36,49,17,53,66,92,71};
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