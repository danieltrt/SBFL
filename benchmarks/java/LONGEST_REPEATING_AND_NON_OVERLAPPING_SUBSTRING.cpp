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
string f_gold ( string str ) {
  int n = str . length ( );
  int LCSRe [ n + 1 ] [ n + 1 ];
  memset ( LCSRe, 0, sizeof ( LCSRe ) );
  string res;
  int res_length = 0;
  int i, index = 0;
  for ( i = 1;
  i <= n;
  i ++ ) {
    for ( int j = i + 1;
    j <= n;
    j ++ ) {
      if ( str [ i - 1 ] == str [ j - 1 ] && LCSRe [ i - 1 ] [ j - 1 ] < ( j - i ) ) {
        LCSRe [ i ] [ j ] = LCSRe [ i - 1 ] [ j - 1 ] + 1;
        if ( LCSRe [ i ] [ j ] > res_length ) {
          res_length = LCSRe [ i ] [ j ];
          index = max ( i, index );
        }
      }
      else LCSRe [ i ] [ j ] = 0;
    }
  }
  if ( res_length > 0 ) for ( i = index - res_length + 1;
  i <= index;
  i ++ ) res . push_back ( str [ i - 1 ] );
  return res;
}


string f_filled ( string str ) {
  int n = str . length ( );
  int LCSRe [ n + 1 ] [ n + 1 ];

  string res = "";
  int res_length = 0;
  int i, index = 0;
  for ( i = 1;
  i <= n;
  i ++ ) {
    for ( int j = i + 1;
    j <= n;
    j ++ ) {
      if ( str [ i - 1 ] == str [ j - 1 ] && LCSRe [ i - 1 ] [ j - 1 ] < ( j - i ) ) {
        LCSRe [ i ] [ j ] = LCSRe [ i - 1 ] [ j - 1 ] + 1;
        if ( LCSRe [ i ] [ j ] > res_length ) {
          res_length = LCSRe [ i ] [ j ];
          index = max ( i, index );
        }
      }
      else {
        LCSRe [ i ] [ j ] = 0;
      }
    }
  }
  if ( res_length > 0 ) {
    for ( i = index - res_length + 1;
    i <= index;
    i ++ ) {
      res += str [ i - 1 ];
    }
  }
  return res;
}


int main(int argc, char** argv) {
    int n_success = 0;
    vector<string> param0 {"fbfHTjE","09285256323","0011000101110","ue JkVZTt","48387612426300","010","ddRrUz","1049162633793","100011","iJfadiVaQqv"};
    assert(argc > 1); int i = atol(argv[1]); assert(i < param0.size()); return f_filled(param0[i]) == f_gold(param0[i]);;
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}