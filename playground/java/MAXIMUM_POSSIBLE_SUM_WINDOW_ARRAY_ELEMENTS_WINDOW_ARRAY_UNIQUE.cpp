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
int f_gold ( int A [ ], int B [ ], int n ) {
  unordered_set < int > mp;
  int result = 0;
  int curr_sum = 0, curr_begin = 0;
  for ( int i = 0;
  i < n;
  ++ i ) {
    while ( mp . find ( A [ i ] ) != mp . end ( ) ) {
      mp . erase ( A [ curr_begin ] );
      curr_sum -= B [ curr_begin ];
      curr_begin ++;
    }
    mp . insert ( A [ i ] );
    curr_sum += B [ i ];
    result = max ( result, curr_sum );
  }
  return result;
}


int f_filled ( int A [ ] , int B [ ] , int n ) {
  set < int > mp ;
  int result = 0 ;
  int currSum = 0 , currBegin = 0 ;
  for ( int i = 0 ;
  i < n ;
  ++ i ) {
    while ( mp . find ( A [ i ] ) != mp . end ( ) ) {
      mp . erase ( A [ currBegin ] ) ;
      currSum -= B [ currBegin ] ;
      currBegin ++ ;
    }
    mp . insert ( A [ i ] ) ;
    currSum += B [ i ] ;
    result = max ( result , currSum ) ;
  }
  return result ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{4,8,10,10,16,23,33,36,43,47,50,55,56,72,84,85,86,86,88,90,92,99},{48,-22,84,76,50,-14,-82,28,86,-50,-40,10,48,20,-48,-84,-64,-48,-32,-84,-32,10,42,-10,-68,-16,-94,-76,42,-96,16,-64,60,8,-88,-62,82,-24,-28,40,18,8},{0,0,0,1},{74,64,93,72,75,90,46,72,91,98,57,58,76,29,88,3,86,1,78,74,56,54,57,3,94,2,14,32,67,62,1,30,78,95,40},{-94,-88,-68,-24,60,94},{0,0,0,0,0,1,0,0,1,0,0,0,0,1,1,0,0,0,0,0,1,0,1,0,1,1,1,0,0},{3,7,12,15,17,23,31,31,32,37,41,54,57,60,62,62,64,70,71,74,75,83,97,98},{-2,26,-74,96,-70,56,92,-74,-38,-18,36,44,-10,-26,26,-22,-58,78,86,22,76,50,88,-86,-80,-36,-48,90,-34,62,46,-56,-32},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{86,30,87,99,8,1,24,46,12,21,43,73,28,3,35,49,14,37,63,98,65,43,86,69,27,60,45,88,25,86,11,9,86,73,40,70,49,50,95,69,94}};
    vector<vector<int>> param1 {{8,26,30,35,45,47,55,56,59,61,64,66,67,69,73,77,78,81,82,85,86,99},{82,94,34,12,18,-68,14,-16,-30,-16,6,74,-68,76,-76,52,-32,-38,78,64,-60,-46,82,-60,98,-70,-52,-96,-6,-44,66,-66,22,-42,-66,4,-2,-48,-94,72,56,88},{0,0,1,1},{9,50,22,60,36,46,76,48,90,64,16,24,41,12,36,36,93,52,26,38,68,5,55,19,35,5,7,96,67,64,24,85,6,33,7},{-80,-72,-60,-42,-24,-6},{1,0,0,1,1,1,0,0,0,0,1,1,1,0,0,0,0,1,1,0,1,1,0,1,1,1,1,1,0},{3,10,10,12,12,14,15,19,19,20,25,27,27,28,40,41,50,51,53,57,60,65,75,99},{76,42,0,4,-96,-24,-50,-54,26,-8,-38,-46,42,-50,16,-2,-6,2,-8,56,64,-58,-96,2,-64,-66,-14,58,-76,-26,78,-96,48},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{27,66,77,34,98,75,43,27,79,32,54,40,29,47,63,15,23,33,59,76,27,31,92,43,12,20,97,67,11,12,83,79,52,46,51,36,87,96,90,6,62}};
    vector<int> param2 {20,30,2,20,4,22,22,17,39,34};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),&param1[i].front(),param2[i]) == f_gold(&param0[i].front(),&param1[i].front(),param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}