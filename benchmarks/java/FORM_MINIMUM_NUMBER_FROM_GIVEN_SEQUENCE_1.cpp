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
string f_gold ( string seq ) {
  int n = seq . length ( );
  if ( n >= 9 ) return "-1";
  string result ( n + 1, ' ' );
  int count = 1;
  for ( int i = 0;
  i <= n;
  i ++ ) {
    if ( i == n || seq [ i ] == 'I' ) {
      for ( int j = i - 1;
      j >= - 1;
      j -- ) {
        result [ j + 1 ] = '0' + count ++;
        if ( j >= 0 && seq [ j ] == 'I' ) break;
      }
    }
  }
  return result;
}


string f_filled ( string seq ) {
  int n = seq . length ( );
  if ( n >= 9 ) return "-1";
  char result [ n + 1 ];
  int count = 1;
  for ( int i = 0;
  i <= n;
  i ++ ) {
    if ( i == n || seq [ i ] == 'I' ) {
      for ( int j = i - 1;
      j >= - 1;
      j -- ) {
        result [ j + 1 ] = ( char ) ( ( int ) '0' + count ++ );
        if ( j >= 0 && seq [ j ] == 'I' ) break;
      }
    }
  }
  return string ( result );
}


int main(int argc, char** argv) {
    int n_success = 0;
    vector<string> param0 {"D","I","DD","II","DIDI","IIDDD","DDIDDIID","176297","1","XHkhZq"};
    assert(argc > 1); int i = atol(argv[1]); assert(i < param0.size()); return f_filled(param0[i]) == f_gold(param0[i]);;
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}