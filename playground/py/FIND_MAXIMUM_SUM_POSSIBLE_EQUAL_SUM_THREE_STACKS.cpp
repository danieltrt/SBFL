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
int f_gold ( int stack1 [ ], int stack2 [ ], int stack3 [ ], int n1, int n2, int n3 ) {
  int sum1 = 0, sum2 = 0, sum3 = 0;
  for ( int i = 0;
  i < n1;
  i ++ ) sum1 += stack1 [ i ];
  for ( int i = 0;
  i < n2;
  i ++ ) sum2 += stack2 [ i ];
  for ( int i = 0;
  i < n3;
  i ++ ) sum3 += stack3 [ i ];
  int top1 = 0, top2 = 0, top3 = 0;
  int ans = 0;
  while ( 1 ) {
    if ( top1 == n1 || top2 == n2 || top3 == n3 ) return 0;
    if ( sum1 == sum2 && sum2 == sum3 ) return sum1;
    if ( sum1 >= sum2 && sum1 >= sum3 ) sum1 -= stack1 [ top1 ++ ];
    else if ( sum2 >= sum3 && sum2 >= sum3 ) sum2 -= stack2 [ top2 ++ ];
    else if ( sum3 >= sum2 && sum3 >= sum1 ) sum3 -= stack3 [ top3 ++ ];
  }
}


int f_filled ( int * stack1 , int * stack2 , int * stack3 , int n1 , int n2 , int n3 ) {
  int sum1 = 0 , sum2 = 0 , sum3 = 0 ;
  for ( int i = 0 ;
  i < n1 ;
  i ++ ) sum1 += stack1 [ i ] ;
  for ( int i = 0 ;
  i < n2 ;
  i ++ ) sum2 += stack2 [ i ] ;
  for ( int i = 0 ;
  i < n3 ;
  i ++ ) sum3 += stack3 [ i ] ;
  int top1 = 0 , top2 = 0 , top3 = 0 ;
  int ans = 0 ;
  while ( ( 1 ) ) {
    if ( ( top1 == n1 || top2 == n2 || top3 == n3 ) ) return 0 ;
    if ( ( sum1 == sum2 && sum2 == sum3 ) || ( sum1 >= sum2 && sum1 >= sum3 ) ) {
      sum1 -= stack1 [ top1 ] ;
      top1 = top1 + 1 ;
    }
    else if ( ( sum2 >= sum3 && sum2 >= sum3 ) || ( sum2 >= sum2 && sum2 >= sum3 ) ) {
      sum2 -= stack2 [ top2 ] ;
      top2 = top2 + 1 ;
    }
    else if ( ( sum3 >= sum2 && sum3 >= sum1 ) ) {
      sum3 -= stack3 [ top3 ] ;
      top3 = top3 + 1 ;
    }
  }
  return sum1 + sum2 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3 + sum3

int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{4,10,11,24,27,33,34,36,36,40,42,43,52,58,67,69,77,86,86,88},{40,54,14,58,-64,-60,-98,-64,-52,30,0,-42,74,46,-14,76,84,74,-24,30,96,88,-98,82,44,-86,-92,-52,28,62},{0,0},{64,40,45,93,30,79,24,95,1,84,74,5,9,6,22,33,10,53,33,9,31,21,22,77,21,93,86,68,92,57,27,82,87,11,51,2,27,2,24,57,20,2,32,43},{-94,-50,-24,-12,-6,-6,8,26,28,44},{1,1,0,0,0,0,1,0,0,0,1,0,1,0,1,0,0,1,0,0,1,1,0,1,0,0,1,1,1,1,0,1,1,0,1,0,1,1,1,0,1},{3,3,4,5,9,18,21,22,25,27,28,33,35,39,39,43,57,58,59,63,65,65,72,77,78,78,80,80,88,92,99},{40,28,-84,-38,82,2,38,10,-10,20,-54,48,56,38,-98,68,-8,-30,-96,-16,28,94,-52,28,34,68,-46,44,-28,-52,-48,-14,-30,24,56,8,-30,-46,18,-68,86,-12},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{22,31,75,48,30,39,82,93,26,87,77,87,67,88,19,51,54,48,6,37,38,27}};
    vector<vector<int>> param1 {{4,13,34,40,41,47,47,52,55,62,66,66,69,70,73,74,75,76,85,98},{24,34,-52,50,-8,-48,-28,68,-12,-26,0,6,-76,-94,-12,8,38,-88,30,98,-78,-54,-48,42,26,-76,4,46,26,60},{1,1},{48,85,55,12,24,26,88,76,15,34,23,61,2,99,11,37,65,74,92,96,68,50,67,98,89,17,62,18,51,61,41,41,90,64,89,51,48,95,9,86,28,54,64,35},{-96,-94,-86,-70,-52,-18,-6,20,52,52},{1,0,0,0,0,0,1,0,0,0,1,1,0,1,0,0,1,0,1,0,0,0,0,1,0,1,1,0,0,0,0,1,1,0,0,1,0,1,0,1,1},{3,17,18,23,24,24,26,28,34,48,53,54,56,61,64,67,69,74,77,79,79,81,81,82,84,84,85,86,88,92,96},{26,24,-50,18,78,-90,62,88,-36,-96,78,6,-94,-2,-28,-38,66,72,-36,14,-48,-64,-24,82,92,-16,-26,-12,6,34,30,-46,48,-22,34,-64,4,-32,84,-20,32,-22},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{18,20,53,87,85,63,6,81,89,82,43,76,59,60,79,96,29,65,5,56,96,95}};
    vector<vector<int>> param2 {{6,8,10,12,14,29,41,52,53,54,55,66,69,73,77,77,78,80,90,99},{-8,-24,54,28,92,94,0,62,28,80,82,2,88,-4,-28,80,44,34,-98,36,28,76,-48,40,98,4,22,-36,-20,-70},{0,0},{99,77,11,20,33,91,5,68,75,67,37,70,59,26,2,62,6,97,95,38,46,89,29,61,27,93,26,74,98,85,91,92,40,97,58,44,20,57,65,62,65,26,74,58},{-70,-40,-22,4,12,12,38,54,72,74},{0,0,1,1,0,0,0,0,1,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0,0,1,0,0,1,1,1,0,0,1,1,1,0,0,1,0},{1,3,5,8,15,16,27,27,27,28,29,30,32,35,36,37,44,47,57,65,69,70,70,76,76,83,85,87,88,90,92},{66,26,-90,-40,-52,-98,84,88,40,-92,30,28,32,92,18,-34,-42,64,-34,70,-72,28,44,34,76,-78,46,-48,20,54,-2,66,6,56,52,-98,-48,-70,-60,94,90,10},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1},{10,76,49,36,41,18,60,44,81,34,56,7,13,83,82,16,7,38,33,55,91,54}};
    vector<int> param3 {10,26,1,42,5,39,24,32,16,19};
    vector<int> param4 {12,28,1,27,5,34,16,37,23,16};
    vector<int> param5 {18,15,1,31,5,26,29,41,22,17};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),&param1[i].front(),&param2[i].front(),param3[i],param4[i],param5[i]) == f_gold(&param0[i].front(),&param1[i].front(),&param2[i].front(),param3[i],param4[i],param5[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}