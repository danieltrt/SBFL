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
bool f_gold ( int a [ ], int b [ ], int n, int k ) {
  sort ( a, a + n );
  sort ( b, b + n, greater < int > ( ) );
  for ( int i = 0;
  i < n;
  i ++ ) if ( a [ i ] + b [ i ] < k ) return false;
  return true;
}


//TOFILL

int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{9,12,16,25,27,40,43,52,52,70,87,88,90,97,99},{-96,-90,-80,10,-84,-96,-28,-42,30,-92,-44,-14,18,-68,-94,6,-76,72,-90,42,70,-78,56,-26,8,74,12,-74,20,-86,-74,-90,-98,92,30,94,14,92,88,-98,42,-48},{0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1},{13,35,6,69,42,55,11,97,15,65,70,77,51,16,3,26,47,72,15,71,2,31,18,59,75,48},{-72,-70,-66,-64,-52,-52,-52,-48,-46,-42,-40,-34,-20,-4,-4,-2,2,4,16,16,18,18,32,36,52,54,56,56,58,68,72,74,84,84,90,90,92,94},{1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,0},{8,17,18,21,23,32,34,37,44,48,53,58,64,66,66,72,72,79,80,80,80,82,87,92,93,94,96,96,98},{-20,-22,-16,-80,-88,22,-78,-82,-50,32,28,-8,-48,80,62,-14,14,10,-78,78,52,94,-66,14,50,18,-38,-98,24,18,-28,24,10,-88,-14},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{75,31,58,10,92,65,45,72,53,91,39,33,10,13,67,85}};
    vector<vector<int>> param1 {{4,7,11,20,34,35,36,44,46,71,72,78,85,85,91},{-48,84,16,-72,96,-78,-76,-84,-76,-32,-50,62,-22,24,-32,94,8,-14,-20,44,-80,68,-44,60,94,-42,-44,-74,-98,-86,16,62,-80,18,-18,70,30,40,-56,76,-32,50},{0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1},{88,15,44,36,38,98,89,81,73,51,37,4,79,60,11,62,48,45,12,21,65,14,78,20,12,46},{-94,-76,-74,-56,-54,-50,-46,-38,-26,-24,-24,-22,-16,-10,-6,-4,-4,0,0,6,12,12,18,20,38,50,52,52,54,64,64,72,72,72,76,90,96,96},{1,1,0,0,0,1,0,1,0,1,1,1,1,1,0,1,0,0,1},{11,15,17,19,23,23,26,27,36,43,46,47,55,59,63,66,77,79,79,82,85,86,86,91,91,94,94,97,99},{6,-54,90,98,-30,88,36,88,38,12,46,-66,-80,32,42,-96,62,-44,-80,-14,20,2,70,-46,96,-40,52,56,96,-82,24,98,-16,90,66},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{41,91,78,28,40,71,74,69,71,12,7,21,92,19,39,34}};
    vector<int> param2 {10,40,11,25,26,13,20,31,31,14};
    vector<int> param3 {7,38,15,16,30,13,14,24,30,8};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),&param1[i].front(),param2[i],param3[i]) == f_gold(&param0[i].front(),&param1[i].front(),param2[i],param3[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}