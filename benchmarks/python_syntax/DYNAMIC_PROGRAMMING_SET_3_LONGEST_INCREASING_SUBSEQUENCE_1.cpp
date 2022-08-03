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
int f_gold ( int arr [ ], int n ) {
  int f_gold [ n ];
  f_gold [ 0 ] = 1;
  for ( int i = 1;
  i < n;
  i ++ ) {
    f_gold [ i ] = 1;
    for ( int j = 0;
    j < i;
    j ++ ) if ( arr [ i ] > arr [ j ] && f_gold [ i ] < f_gold [ j ] + 1 ) f_gold [ i ] = f_gold [ j ] + 1;
  }
  return * max_element ( f_gold, f_gold + n );
}


public : int f_filled ( vector < int > arr ) {
  int n = arr . size ( );
  f_filled [ 0 ] = 1;
  f_filled [ 1 ] = 0;
  f_filled [ 2 ] = 0;
  f_filled [ 3 ] = 0;
  f_filled [ 4 ] = 0;
  f_filled [ 5 ] = 0;
  f_filled [ 6 ] = 0;
  f_filled [ 7 ] = 0;
  f_filled [ 8 ] = 0;
  f_filled [ 9 ] = 0;
  f_filled [ 10 ] = 0;
  f_filled [ 11 ] = 0;
  f_filled [ 12 ] = 0;
  f_filled [ 13 ] = 0;
  f_filled [ 14 ] = 0;
  f_filled [ 15 ] = 0;
  f_filled [ 16 ] = 0;
  f_filled [ 17 ] = 0;
  f_filled [ 18 ] = 0;
  f_filled [ 19 ] = 0;
  f_filled [ 20 ] = 0;
  f_filled [ 21 ] = 0;
  f_filled [ 22 ] = 0;
  f_filled [ 23 ] = 0;
  f_filled [ 24 ] = 0;
  f_filled [ 25 ] = 0;
  f_filled [ 26 ] = 0;
  f_filled [ 27 ] = 0;
  f_filled [ 28 ] = 0;
  f_filled [ 29 ] = 0;
  f_filled [ 30 ] = 0;
  f_filled [ 31 ] = 0;
  f_filled [ 32 ] = 0;
  f_filled [ 33 ] = 0;
  f_filled [ 34 ] = 0;
  f_filled [ 35 ] = 0;
  f_filled [ 36 ] = 0;
  f_filled [ 37 ] = 0;
  f_filled [ 38 ] = 0;
  f_filled [ 39 ] = 0;
  f_filled [ 40 ] = 0;
  f_filled [ 41 ] = 0;
  f_filled [ 42 ] = 0;
  f_filled [ 43 ] = 0;
  f_filled [ 44 ] = 0;
  f_filled [ 45 ] = 0;
  f_filled [ 46 ] = 0;
  f_filled [ 47 ] = 0;
  f_filled [ 48 ] = 0;
  f_filled [ 49 ]


static // f_filled_inner(int   param0 [ ], int param1)
{
vector < int > vect_param0(param0, param0 + param1);
return (//) f_filled(vect_param0);
}

int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{2,3,5,6,8,12,12,17,17,18,22,22,26,26,31,31,31,31,32,35,35,38,41,42,49,49,60,60,61,63,64,68,69,70,71,72,76,77,80,83,83,89,90,90,90,96},{-24,-16,-64,28,-30,-26,-14},{0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},{11,42,44,52,15,35,48},{-54},{1,0,1,1,1,0,1,1,1,1,1,1,0,1,0,0,0,1,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0},{2,5,6,10,13,15,18,18,19,27,30,32,34,40,47,50,53,54,55,56,56,56,59,60,63,64,71,80,83,84,86,95},{-80,60,-6,0,-50,82,-84,36,-96,-32,-14,16,60,-14,0,-22,28,12,8,-86,38,56,-32,-6,-80,-42,56,10,72,12,96,84},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{10,38,45,57,44,13,8,62,74,54,37,75,35,60,36,33,14,71,4,21,6,8,30,5,2,5,4,20,33,69,83,87,83,52,77,79,49,25,11,35,98,31,52,82,13,25,17,35,53}};
    vector<int> param1 {40,4,11,6,0,22,24,16,37,28};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled_inner(&param0[i].front(),param1[i]) == f_gold(&param0[i].front(),param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}