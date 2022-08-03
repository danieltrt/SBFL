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
double f_gold ( int n ) {
  int i = 1;
  double res = 0.0;
  bool sign = true;
  while ( n > 0 ) {
    n --;
    if ( sign ) {
      sign = ! sign;
      res = res + ( double ) ++ i / ++ i;
    }
    else {
      sign = ! sign;
      res = res - ( double ) ++ i / ++ i;
    }
  }
  return res;
}


double f_filled ( int n ) {
  int i = 1;
  double res = 0.0;
  bool sign = true;
  while ( ( n > 0 ) && ( sign ) ) {
    n = n - 1;
    if ( ( sign ) || ( n < 0 ) ) {
      sign = false;
      res = res + ( i + 1 ) / ( i + 2 );
      i = i + 2;
    }
    else {
      sign = true;
      res = res - ( i + 1 ) / ( i + 2 );
      i = i + 2;
    }
  }
  return res;
}


int main() {
    int n_success = 0;
    vector<int> param0 {49,4,60,90,96,29,86,47,77,87};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(abs(1 - (0.0000001 + abs(f_gold(param0[i])) )/ (abs(f_filled(param0[i])) + 0.0000001)) < 0.001)
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}