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
using namespace std;
bool f_gold ( string & str ) {
  vector < bool > mark ( 26, false );
  int index;
  for ( int i = 0;
  i < str . length ( );
  i ++ ) {
    if ( 'A' <= str [ i ] && str [ i ] <= 'Z' ) index = str [ i ] - 'A';
    else if ( 'a' <= str [ i ] && str [ i ] <= 'z' ) index = str [ i ] - 'a';
    mark [ index ] = true;
  }
  for ( int i = 0;
  i <= 25;
  i ++ ) if ( mark [ i ] == false ) return ( false );
  return ( true );
}


bool f_filled ( string str ) {
  bool mark [ 26 ];
  int index = 0;
  for ( int i = 0;
  i < str . length ( );
  i ++ ) {
    if ( 'A' <= str [ i ] && str [ i ] <= 'Z' ) {
      index = str [ i ] - 'A';
    }
    else if ( 'a' <= str [ i ] && str [ i ] <= 'z' ) {
      index = str [ i ] - 'a';
    }
    mark [ index ] = true;
  }
  for ( int i = 0;
  i <= 25;
  i ++ ) if ( mark [ i ] == false ) return ( false );
  return ( true );
}



static // f_filled_inner(string & param0)
{
return (//) f_filled((string) param0);
}

int main() {
    int n_success = 0;
    vector<string> param0 {
    "The quick brown fox jumps over the lazy dog ",
    "The quick brown fox jumps over the dog",
    "abcdefghijklmnopqrstuvwxyz",
    "AbcdefghijKlmnopqrstUVwxyz",
    "The quicK broWn fOX jumps over the laZYy dog ",
    "AbcdefghijKlmnopqrstVwxyz",
    "U",
    "397548458372",
    "11",
    "iwCiUFU r"};
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