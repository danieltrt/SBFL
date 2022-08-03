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
int f_gold ( char s [ ] ) {
  int n = strlen ( s );
  int count = 0;
  for ( int i = 0;
  i < n;
  ++ i ) if ( s [ i ] == '4' || s [ i ] == '8' || s [ i ] == '0' ) count ++;
  for ( int i = 0;
  i < n - 1;
  ++ i ) {
    int h = ( s [ i ] - '0' ) * 10 + ( s [ i + 1 ] - '0' );
    if ( h % 4 == 0 ) count = count + i + 1;
  }
  return count;
}


int f_filled ( string s ) {
  int n = s . length ( );
  int count = 0;
  for ( int i = 0;
  i < n;
  i += 1 ) {
    if ( ( s [ i ] == '4' || s [ i ] == '8' || s [ i ] == '0' ) && ( s [ i + 1 ] == '4' || s [ i + 1 ] == '0' ) ) {
      count ++;
    }
  }
  for ( int i = 0;
  i < n - 1;
  i += 1 ) {
    int h = ( ( int ) s [ i ] - '0' ) * 10 + ( ( int ) s [ i + 1 ] - '0' );
    if ( ( h % 4 ) == 0 ) {
      count = count + i + 1;
    }
  }
  return count;
}



static // f_filled_inner(char   param0 [ ])
{
string string_param0(param0);
return (//) f_filled(string_param0);
}

int main() {
    int n_success = 0;
    vector<string> param0 {"Qaq","9400761825850","0011001111","lasWqrLRq","5662","110"," tOYKf","6536991235305","11111","uZftT iDHcYiCt"};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled_inner(&param0[i].front()) == f_gold(&param0[i].front()))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}