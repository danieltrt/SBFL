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
int f_gold ( int a [ ], int n ) {
  sort ( a, a + n );
  int num1 = 0;
  int num2 = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( i % 2 == 0 ) num1 = num1 * 10 + a [ i ];
    else num2 = num2 * 10 + a [ i ];
  }
  return num2 + num1;
}


public : int f_filled ( vector < int > & a, int n ) {
  sort ( a . begin ( ), a . end ( ) );
  int num1 = 0, num2 = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( i % 2 == 0 ) num1 = num1 * 10 + a [ i ];
    else num2 = num2 * 10 + a [ i ];
  }
  return num2 + num1;
}



static // f_filled_inner(int   param0 [ ], int param1)
{
vector < int >  vect_param0(param0, param0 + param1);
return (//) f_filled(vect_param0,param1);
}

int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{4,16,29,30,38,83},{58,74,-28,-60,-6,66,-76,46,0,-24,28,-16,-14,24,-94,-56,-80,40,-18,-68,-8,-94,-88,-12,-20,-8},{0,1},{7,12,78,8},{-78,-48,-48,-26,8,34},{1,1,1,1,0,1,1,1,0,1,0,1,0,0,0,0,1,1,1,1,1,0,0,0,1,0,0,1,1,0},{2,3,5,7,25,30,31,38,42,45,52,53,56,59,60,71,74,76,80,90,91,98},{40,-62,-2,-58,60,38,48,-4,0,62,-52,-80,56,38,58,-72,32,-26,-14,70,58,-86,-32,56,-40,84,24,60,-46,-32,78,78,-66,20,-32,98,84,44,48,4,54,-66,6,-62,58},{0,0,0,0,0,0,1,1,1},{59,9,3,20,83,87,48,4,86,67,89,96,17,36,39,45,99,8,56,92,63,81,7,75,32,10,71,82,97,92,65,23,22,47,70,79,57,81,65,50}};
    vector<int> param1 {5,16,1,3,4,27,13,34,8,35};
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