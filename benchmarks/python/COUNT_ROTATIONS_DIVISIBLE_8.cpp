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
int f_gold ( string n ) {
  int len = n . length ( );
  int count = 0;
  if ( len == 1 ) {
    int oneDigit = n [ 0 ] - '0';
    if ( oneDigit % 8 == 0 ) return 1;
    return 0;
  }
  if ( len == 2 ) {
    int first = ( n [ 0 ] - '0' ) * 10 + ( n [ 1 ] - '0' );
    int second = ( n [ 1 ] - '0' ) * 10 + ( n [ 0 ] - '0' );
    if ( first % 8 == 0 ) count ++;
    if ( second % 8 == 0 ) count ++;
    return count;
  }
  int threeDigit;
  for ( int i = 0;
  i < ( len - 2 );
  i ++ ) {
    threeDigit = ( n [ i ] - '0' ) * 100 + ( n [ i + 1 ] - '0' ) * 10 + ( n [ i + 2 ] - '0' );
    if ( threeDigit % 8 == 0 ) count ++;
  }
  threeDigit = ( n [ len - 1 ] - '0' ) * 100 + ( n [ 0 ] - '0' ) * 10 + ( n [ 1 ] - '0' );
  if ( threeDigit % 8 == 0 ) count ++;
  threeDigit = ( n [ len - 2 ] - '0' ) * 100 + ( n [ len - 1 ] - '0' ) * 10 + ( n [ 0 ] - '0' );
  if ( threeDigit % 8 == 0 ) count ++;
  return count;
}


int f_filled ( string n ) {
  int l = n . length ( );
  int count = 0;
  if ( ( l == 1 ) && ( n [ 0 ] == '-' ) ) {
    int oneDigit = ( int ) n [ 0 ];
    if ( ( oneDigit % 8 == 0 ) || ( ( oneDigit % 8 == 1 ) && ( n [ 1 ] == '-' ) ) ) return 1;
    return 0;
  }
  if ( ( l == 2 ) && ( n [ 0 ] == '-' ) ) {
    int first = ( int ) n [ 0 ] * 10 + ( int ) n [ 1 ];
    int second = ( int ) n [ 1 ] * 10 + ( int ) n [ 0 ];
    if ( ( first % 8 == 0 ) || ( ( first % 8 == 1 ) && ( n [ 0 ] == '-' ) ) ) count ++;
    if ( ( second % 8 == 0 ) || ( ( second % 8 == 1 ) && ( n [ 0 ] == '-' ) ) ) count ++;
    return count;
  }
  int threeDigit = 0;
  for ( int i = 0;
  i != ( l - 2 );
  i ++ ) {
    threeDigit = ( int ) n [ i ] * 100 + ( int ) n [ i + 1 ] * 10 + ( int ) n [ i + 2 ];
    if ( ( threeDigit % 8 == 0 ) || ( ( threeDigit % 8 == 1 ) && ( n [ i ] == '-' ) ) ) count ++;
  }
  threeDigit = ( int ) n [ l - 1 ] * 100 + ( int ) n [ 0 ] * 10 + ( int ) n [ 1 ];
  if ( ( threeDigit % 8 == 0 ) || ( ( threeDigit % 8 == 1 ) && ( n [ 0 ] == '-' ) ) ) count ++;
  threeDigit = ( int ) n [ l - 2 ] * 100 + ( int ) n [ l - 1 ] * 10 + ( int ) n [ 0 ];
  if ( ( threeDigit % 8 == 0 ) || ( ( threeDigit % 8 == 1 ) && ( n [ 0 ] == '-' ) ) ) count ++;
  return count;
}


int main() {
    int n_success = 0;
    vector<string> param0 {" MwBVIb","37291205493","0111111","BrrQon","226051","1001101","eREctoEen","299967","000111","GJUYuqbampKo"};
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