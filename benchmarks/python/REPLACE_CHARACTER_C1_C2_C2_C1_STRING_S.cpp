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
string f_gold ( string s, char c1, char c2 ) {
  int l = s . length ( );
  for ( int i = 0;
  i < l;
  i ++ ) {
    if ( s [ i ] == c1 ) s [ i ] = c2;
    else if ( s [ i ] == c2 ) s [ i ] = c1;
  }
  return s;
}


void f_filled ( string & s, char c1, char c2 ) {
  int l = s . length ( );
  for ( int i = 0;
  i < l;
  i ++ ) {
    if ( ( s [ i ] == c1 ) || ( s [ i ] == c2 ) ) {
      s . f_filled ( 0, i, c2 );
    }
    else if ( ( s [ i ] == c2 ) || ( s [ i ] == c1 ) ) {
      s . f_filled ( 0, i, c1 );
    }
  }
}



static // f_filled_inner(string param0, char param1, char param2)
{
return (//) f_filled((string &) param0,param1,param2);
}

int main() {
    int n_success = 0;
    vector<string> param0 {"IZTSMw j","7288334","010110000","b gJX","734","1","xCaUKdhA","4370992644981","01010","ZNIFGshaWA"};
    vector<char> param1 {'W','6','1','t','4','1','X','5','0','Q'};
    vector<char> param2 {'k','9','1','P','4','1','S','6','1','x'};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled_inner(param0[i],param1[i],param2[i]) == f_gold(param0[i],param1[i],param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}