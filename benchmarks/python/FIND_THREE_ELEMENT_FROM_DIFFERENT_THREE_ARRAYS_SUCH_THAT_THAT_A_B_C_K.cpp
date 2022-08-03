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
bool f_gold ( int a1 [ ], int a2 [ ], int a3 [ ], int n1, int n2, int n3, int sum ) {
  for ( int i = 0;
  i < n1;
  i ++ ) for ( int j = 0;
  j < n2;
  j ++ ) for ( int k = 0;
  k < n3;
  k ++ ) if ( a1 [ i ] + a2 [ j ] + a3 [ k ] == sum ) return true;
  return false;
}


bool f_filled ( int * a1, int * a2, int * a3, int n1, int n2, int n3, int sum ) {
  for ( int i = 0;
  i != n1;
  ++ i ) {
    for ( int j = 0;
    j != n2;
    ++ j ) {
      for ( int k = 0;
      k != n3;
      ++ k ) {
        if ( ( a1 [ i ] + a2 [ j ] + a3 [ k ] == sum ) && ( a1 [ i ] + a2 [ j ] + a3 [ k ] == sum ) ) {
          return true;
        }
      }
    }
  }
  return false;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{4,9,10,19,24,25,26,30,36,43,44,49,52,62,66,69,72,77,80,80,82,84,90,93,94,98},{-24,-80,-72,80,-96,-94,64,18,12,16,74,16,54,66,-96,-90,54,72,-32,-2,90,-18,-98,12,-42,-30,-82,-56,-86,40},{0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1},{28,15,21,28,85,68,24},{-86,-82,-66,-44,-44,-38,-22,-6,-2,14,26,40,54,58,60,66,72,80,94,96,98},{1,1,1,0,1,1,1,0,0,1,1,1,1,0,1,1,0,0,0,1,1,0,0,0,1,0,1,1,1,0,0,1,0,1},{44,53,85,85,86,88,93},{70,-38,62,-34,74,-32,-58,-34,-54},{0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1},{41,64,39,96,54,54,57,4,82,43,44,56,1}};
    vector<vector<int>> param1 {{4,8,17,20,22,25,27,30,31,33,35,35,38,41,49,51,60,61,66,67,69,82,84,85,86,88},{30,-60,-24,18,40,44,-40,62,66,-38,50,-74,-42,-86,-82,-8,50,-72,-2,-48,-38,-20,-8,56,-32,68,94,80,-48,0},{0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1},{57,46,47,49,16,81,60},{-96,-86,-74,-56,-52,-42,-32,-22,-16,-10,-4,-4,10,42,48,52,58,62,84,90,96},{0,1,1,1,1,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,1,1,0,1,1,0,1,0,1},{4,5,8,15,29,40,91},{48,-86,-18,14,88,92,-56,-8,-74},{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},{44,58,40,87,22,82,8,81,88,42,15,14,81}};
    vector<vector<int>> param2 {{12,14,17,20,22,27,29,31,32,38,41,43,56,59,59,64,66,67,68,69,71,76,83,83,85,99},{-24,80,50,-56,-92,20,86,-42,-30,96,40,-32,-64,54,-38,-72,-70,54,-28,98,60,98,-12,-30,-30,68,-66,68,-58,52},{0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1},{76,49,6,44,71,24,57},{-92,-92,-90,-82,-62,-44,-42,-40,-38,-36,-22,-20,-8,12,22,26,30,44,54,64,86},{1,0,1,0,0,0,1,1,1,0,1,1,1,0,0,0,1,1,0,0,1,1,1,0,1,0,0,0,0,1,1,1,0,0},{30,53,71,75,76,82,84},{8,8,32,76,76,94,22,-60,-42},{0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1},{64,20,24,42,37,46,6,47,12,93,8,5,11}};
    vector<int> param3 {25,26,14,6,13,25,5,6,15,7};
    vector<int> param4 {18,22,14,5,20,25,3,6,14,8};
    vector<int> param5 {16,20,14,5,17,23,4,6,10,6};
    vector<int> param6 {222,21,2,73,6,0,3,7,13,10};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),&param1[i].front(),&param2[i].front(),param3[i],param4[i],param5[i],param6[i]) == f_gold(&param0[i].front(),&param1[i].front(),&param2[i].front(),param3[i],param4[i],param5[i],param6[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}