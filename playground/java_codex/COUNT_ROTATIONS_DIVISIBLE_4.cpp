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
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
using namespace std;
int f_gold ( string n ) {
  int len = n . length ( );
  if ( len == 1 ) {
    int oneDigit = n . at ( 0 ) - '0';
    if ( oneDigit % 4 == 0 ) return 1;
    return 0;
  }
  int twoDigit, count = 0;
  for ( int i = 0;
  i < ( len - 1 );
  i ++ ) {
    twoDigit = ( n . at ( i ) - '0' ) * 10 + ( n . at ( i + 1 ) - '0' );
    if ( twoDigit % 4 == 0 ) count ++;
  }
  twoDigit = ( n . at ( len - 1 ) - '0' ) * 10 + ( n . at ( 0 ) - '0' );
  if ( twoDigit % 4 == 0 ) count ++;
  return count;
}


int f_filled ( string n ) {
  int len = n . length ( );
  if ( len == 1 ) {
    int oneDigit = n [ 0 ] - '0';
    if ( oneDigit % 4 == 0 ) return 1;
    return 0;
  }
  int twoDigit, count = 0;
  for ( int i = 0;
  i < ( len - 1 );
  i ++ ) {
    twoDigit = ( n [ i ] - '0' ) * 10 + ( n [ i + 1 ] - '0' );
    if ( twoDigit % 4 == 0 ) count ++;
  }
  twoDigit = ( n [ len - 1 ] - '0' ) * 10 + ( n [ 0 ] - '0' );
  if ( twoDigit % 4 == 0 ) count ++;
  return count;
}

int main() {
    int n_success = 0;
    vector<string> param0 {"MRRuQJvxe","87395768","10111100110111","aVDUEfzG","55794792","111010","cndMLMJVmzuH","487717559382","11110","dRMDPyr"};
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