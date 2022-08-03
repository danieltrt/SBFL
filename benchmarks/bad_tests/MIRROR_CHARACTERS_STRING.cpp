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
string f_gold ( string str, int n ) {
  string reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba";
  int l = str . length ( );
  for ( int i = n;
  i < l;
  i ++ ) str [ i ] = reverseAlphabet [ str [ i ] - 'a' ];
  return str;
}


string f_filled ( string str, int n ) {
  string reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba";
  int l = str . length ( );
  string answer = "";
  for ( int i = 0;
  i < n;
  i ++ ) {
    answer = answer + str [ i ];
  }
  for ( int i = n;
  i < l;
  i ++ ) {
    answer = answer + reverseAlphabet [ str [ i ] - 'a' ];
  }
  return answer;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"oncl","j","hz","pmfmw"};
    vector<int> param1 {4,1,2,5};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i],param1[i]) == f_gold(param0[i],param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}