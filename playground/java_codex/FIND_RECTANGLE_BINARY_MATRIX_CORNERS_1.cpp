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
bool f_gold ( const vector < vector < int > > & m ) {
  int rows = m . size ( );
  if ( rows == 0 ) return false;
  int columns = m [ 0 ] . size ( );
  for ( int y1 = 0;
  y1 < rows;
  y1 ++ ) for ( int x1 = 0;
  x1 < columns;
  x1 ++ ) if ( m [ y1 ] [ x1 ] == 1 ) for ( int y2 = y1 + 1;
  y2 < rows;
  y2 ++ ) for ( int x2 = x1 + 1;
  x2 < columns;
  x2 ++ ) if ( m [ y1 ] [ x2 ] == 1 && m [ y2 ] [ x1 ] == 1 && m [ y2 ] [ x2 ] == 1 ) return true;
  return false;
}


bool f_filled ( int m [ ] [ ] ) {
  int rows = m . length;
  if ( rows == 0 ) return false;
  int columns = m [ 0 ] . length;
  for ( int y1 = 0;
  y1 < rows;
  y1 ++ ) for ( int x1 = 0;
  x1 < columns;
  x1 ++ ) if ( m [ y1 ] [ x1 ] == 1 ) for ( int y2 = y1 + 1;
  y2 < rows;
  y2 ++ ) for ( int x2 = x1 + 1;
  x2 < columns;
  x2 ++ ) if ( m [ y1 ] [ x2 ] == 1 && m [ y2 ] [ x1 ] == 1 && m [ y2 ] [ x2 ] == 1 ) return true;
  return false;
}

int main() {
    int n_success = 0;
    vector<vector<vector<int>>> param0 {{{33,27,56,17,90,10,92},{20,12,1,45,94,64,42,91,5,51},{60,52},{48,98,56,44,78,88},{30,8,22,41,6,79,15,48,92,2,70,66,88,85,42,30},{19,42,69,71,6,97,48,51,68,65,90,99,29,56,53,67,86,38,88,21,33,79,34,12,92,27,44,13,46,70,54,87,57},{60,87,77,22,9,81,52,91,48,25,16,34,64,50,38,30,5,2,52,93,31,62},{75,98,28,32,33,87,3,38,57,38,9,88,68,61,18,34,36,71,44,99,43,25,92,30,20,85,99,78,22,38,25,44,20,50,48,54,63,23},{28,59,16,49,73,43,13,55,80,47,27,5,61,92,86,70,34,26,29,1,75,94,78,41,91,14,74,11,19,35,87,17,89,53,51,83,58,20,77,33,60,46},{47,2,17,93,96,18,41,19,21,94,67,75,15,15,49,24,66,55,71,43,55,13,6,67,23,69,82},{16,43,86,98,37,88,84,29,4,30,46,27,69,96},{82,12,57,2,83,23,57,56,58,23,64,1,19,52,76,78,95},{67,62,56,93,92,72,18,35,16,22,17,36,91,30,91,4,60,41,89,36},{31,19,74,59,39,36,76},{53,5,82,26,51,8,38,42,29,7,1,62,56,51,24,77},{85,53,29,56,58,57,47,49,97,89,13,5},{58,14,40,27,72,44,18,18,10,44,2,19,10,25,6,77,97,47,18,9,39,39,75},{21,67,71,57,23,8,41,82,91,20,9,19,2,17,63,43,28,62,25},{55,16,43,76,15,10,21,14,98,70,48,30,39,18,45,30,58,24,77,76,86,2,78,31},{30,18,24,92,77,2,14,90,13,47,39,3,21,19,16,64},{2,37,34,44,31,30,2,24,1,1,44,81,74,60,50,84,75,86,80,3,1,80,38,14,5,75,79,85,52,49,13,37,57,84,63,37,62,41,96,65,1,50,57,64,20,4,37,82},{42,7,11,6,6,52,84,59,34,24,94,93,15,5,39,51,69,12,54,69,92},{79,31,22,78,67,20,36,9,82,67,80,94,13,26,6,22,1,77,21,89,77,55,27,45,4,30,59,80,98,61,25,13},{1,61,32,35,9,71,95,64,86,22,85,94},{34,80,27,19,82,78,31,40},{20,19,64,24,20,62,76,77,57,39,4},{7,95,29,19,84,97,55,51,62,6,44,19},{22,22,16,81,17,30,59,45,29,17,87,74,45,37,87,91,79,91,46,58},{86,44},{35,80,7,10,80,62,79,81,68,75,30,52,23,45,43,30,81,8},{80,11,14,94,81,44,23,9,54,91,29,85,8,70,69,52},{90,23,44,91,46,50,92,67,80,96,86,12,78,72,5,39,15,11,47,6,53,74,49,2,55,77,51,42,2,43,9,40,8,72,28,55,47,75,39,95,24,71,17},{35,50,89,64,25,88,7,57,49,42,32,97,13,68,47,91,58,78,60,38,28,9,62,11,16,69,67,28,68,19,42,19,98,94,97,34,31,26,61,62,24,20,38,9},{50,74,79,63,28,28,89,10,32,11},{15,59,63,45,86,21,51,55,94,84,6,45,11,49,99,82,80,81,19,32,78,74,4,24,70,21,36,23,70,87,71,75,28,49,30,93,56,23,44,27,49}},{{11,70,30,12,22,41,7,64,33,26,30,14,88,33,23,1,43},{87,64,19,26,58,61,27,52,34,24,81,99,37,43,23,36,20,66,88,49,60,45,96,26,34,88,97,79},{21,75,5,51,12,77,65,3,63,95,50,62,38,73,63,4,25,96,17,22,8,99,33,35,9,67,68,77,60,99,86,54,23,61,25,30,97,70,49,72},{38,97,53,66,52,27,35,1,87,24,59,66,27,31,33,32,63,79,61,30,75,33,19,99,66,93,18,26,81,56,61,68,21,94,37,34,27,12,78,1,49,33,31},{19,83,1,12,42,64,28,87,86,60,98,50,17,13,42,75,38,14,94,7,83,48,52,10,22,99,21,34,97,22,80,4,14,49,7,24,46,86,18,31,69,72,7,68},{68},{32,82,40,71,54,62,66,31,51,47,89,47,38,93,51,51,68,86,63,53,91,26,46,56,59,17,81,54,31,29,86,36,83,20,50,60,48,19,86,18,28,67,70,8},{39,81,48,34,15,68,39,74,40,34,17,32,45,75,25,74,15,43,53,32,1,52,31,13,41,40,45,93,9,15,58,25,34,37,1,52,79,38,96,47,65,87,74,72,78},{33,74,44,12,34,25,32,36,79,54,81,40,55,11,10,55,60,67,21,11,90,13,71,45,71,7,27,97,63,77,59,50,96,70,77,16,95},{18,90,66,27,26,81,78,67,15,82,14},{96,65,67,31,72,58,5,48,56,98,82,53},{61,67,11,63,46,8,93,96,75,79,51,45,78,24},{38,9,58,7,83,62,37,37,10,34},{58,44,72,71,21,24,30,46},{79,31,85,77,58,74,68,66,53,96,53,98,56},{17,69,4,41,83,86,25,97,9,27,71,32,85,78,44,61,3,9,85,87},{24,33,5,13,2,9,76,62,72,46,78,66,36,74,78,21,69,32,52,45,24,70,42,57,99,25,81,37,88,37,33,89,12,82,3,33,40},{9,21},{67,88,29,90,37,28,43,10,48,68,74,23,25,69,22,23,27,85,9,44,48,33,26,42,29,74,85,1,64,56,16},{18,52,35,78,93,48,8,33,61,16,56,98,69,79,50,25,11,8,13,20,96,14,93,10,99,74,28,31},{99,89,29,70,27,71,64,62,35,55,74,59,24,88,91,28,71,53,69,9,56,73,98,62,12,48,52,6,79,19,82,23,15,26,58,12},{12,90,73,78,85,31},{12,63,16,21,18,73,36,81,65,39,11,38,16,85,66,67,7,34,39,91,39,9,11,53},{12,27,23,32,97,4,90,87,68,76,62,73,53,52,72,13,94,83,29,4,61,7,97,72,87,93,17,24,78,56,54,45,61,3,84,69,15},{49,4,97,7,82,25,45,62,44,25,30,99,76,9,49},{31,56,52,48,85,93,40,34,10,77,17,35,16,33,13,81,50,4,57,7,18,25},{20,49,46,44,39,3,9,20,36,28,73,43,96,96,39,81,13,8,11,31,36,93,47,1,89,2,58,76,32,17,15,27},{57,55,81,6,76,78,8,42},{59,1,14,67,27,21,26,88,41,29,62,1,78,3,78,17,26,39,87,23,8,66,72,32,17,67,2,36,45,81,66,90},{96,64,39,49,53,82,88,76,39,26,78,30,99,80,6,45,26,14},{73,92,24,60,43,90,50,40},{77,11,86,37,84},{38,22,88,69,54,28,3,18,89,63,59,73,11,50,65,35,38,73,44,4,49,12,66,63,6,21,20,51,52,57,13,59,56,17,83},{64,71,5,44,58,36,40,82,39,12,63,54,83,27,28,10,3,95,60,39},{26,40,14,91,24,99,1,35,34,8,20,40,64,9,85,66},{92,82,19,88,78,31,92,6,33,81,34,60,55,77,88,79,73,71,44,18,87,39,78,10,36,95,20,97,46},{59,73,4,37,80,51,12,8,46,73,8,42,32,75,54,73,84,73,73,97,83,57,57,19,13,82,36},{50,71,88,31,48,7,72,19,68,2,47,18,87,37,68,97,4,3,63,41,10,70,97,1,9,51,96,99,57,69,74,92,80,38,57},{62,76,16,47,19,77,87,36,40,94,42,22,93,81},{48,10,34,52,24,21,53,26,98,46,37,10,84,13,37,31,51,82,98,13,54,49,83,51,48},{78,88,6,53,91,29,3,50,10,61,64,48,70,3,79,8,82,30,34,48,74,23,42,6,8,49,56,88,22,33,31,49,65,93,18,90,24,75,73,54,63,89,27,36,45}},{{19,66,29,41,66,76,21,58,50,69,77,4,71,60,48,11,43,15,20,54,13,81,55,12,89,66,60,75,95,49,89,43,46,72,33,47,14,60,81,3,4,27},{44},{88,54,94,24,38,7,98,37,64,92,67,28,38,31,5,7,46,52,84,22,95,67,41,91,75,32,31},{30,88,47,79,92,83,11,51,55,83,31,40,28,46,13,91,25,2,96,23,48,40,48,23,6,58,22,56,28,46,24,34,25,99,32,95,59,49,75,31,2,87,6,17},{72,33,96,20,54,9,50,44,13,80,14,15,92,38,10,61,74,36,26,89,92,90,7,81,98,61,97,49,92,30,99,94,27,55,62,57,65,68,41,5,64,8,21},{99,86,38,3,77,73,17,26,98,75,74,28,75,97,34,19,89},{30,13,68,27,79,40,2,72,20,37,94,92,20,15,78,49,21,78,42,16,27,77,52}},{{95,26,62,49,1,3,4,80,39,89,1,81,51,44,58},{30,74,80,21,35,93,35,85,54,2,57,72,25,74,99,20,95,12,77,44,49,40},{14,85,9,46,55,44,52,72,79,25,94,67,34,53,18,88,36,38,48,12,61,38,46,65,31,50,70,49,94,66,83,45,7},{69,92}},{{7,13,48,32,22,86,84,21,41,47,14,68,60,21,75,93,85,79,55,68,75,41,65,91,87,35,14,19,58,65,39,8,72,30,68,54,40,16},{14,55,36,17,17,25,29,57,66,29,79,26},{65,13,10,98,49,65,95,66,34,8,89,84,82,12,27,39,77,50,52,29,72,94,99,4},{31,49,84,24,51,9,49,16,94,37,56,31,94,55,66,31},{83,34,96,28,43,55,30,92,44,47,33,96,56,43,76,49,21,8,35,27,26,46,51,93,24,1,64,26,96,58,61,5,4,31,17},{96,50,67,33,52,15,37,87,80,53,48,19,48,7,20,31,45,75},{16,68,99,53,61,34,32,41,56,30,24,34,97,86,69,50,59,73,74,69,10,95,34,58,48,72,84,9,47,89,72,78,35,41,56,80,16,14,65,65,42,24,19,75,86,63,37,1,56},{41,99},{53,98,10,55,55,74,62,49,23}},{{36,25,6,99,30,98,86,41,36,15,59,42,46,93,32,96,15,29,82,37,21,11,71,95},{97,70,80,9,66,26,54,38,49},{32,85,11,16,9,2,21,47,51,62,7,83,54,92,99},{19,49,52},{42,26,11,8,11,82,33,67,6,58,98,52,79,63,57},{45,44,62,78,72,94,61,66,1,32,43,25,48,73,72,45,33,61,95,72,15,94,40,27,77,59,11,35,55,74,75,6,96,65,93,80,45,29,75,68,49,60,39,12,66,40,42},{88,41,78,96,40,25,60,42,85,95,86,13,13,36,13,80,30,99,36,89,45,20,93,26,94,95,36,74,62,93},{1,84,16,27,20,3,96,6,84,35,88,87,96,28,40,15},{63,60,38,11,62,87,8,9,57,29,66,97,42,10,66,94,79,99,36,61,47,90,2,12,69,89,63,83,96,67,4,95},{88,12,39,91,62,89,69,31,29,59,12,28,38,11,46,95},{1},{23,26,8,83,78,8,59,93,38,70,8,53,71,17,67,37,99,96,82,88,83,96,59,89,35,99,5,32,13,2,70,41,44,25,37,61,35,46,1,84,78,1,93,6,28,51,49,79,41},{88},{94,90,57,31,11,93,92,72,78,7,70,70,16,78,14,5,93,80,7,6,8,98,90,39,10,27,59,79,99,9,27,92,22,29,72,32,14,42,61,95,95,20},{47,78,29,28,95,78,13,48,39,20,15,94,24,21,85,15,5,78,38,57,13,50,51,94,98,34,73,23,6,98,88,4,82,95,44,59,21,8,71,30,44,2,42,37,49,93,43,13},{58,43,75,30,27,69,1,6,95,67,54,7,54,8,47,76,59,75,90,69,33,75,85,3,15,38,93,32,72,35,26,43,12},{46,83,6,14,71,94,4,82,62,60,91,16,56,54,79,82,21,2,36,50,87,3,77},{46,92,33,68,88,34,19,3,84,56,54,95,14,77,92,69,45,21,28,57,31,5,99,17,57,22,75,65,58,96,91,97,56,4,26,48,92,90,32,74,45,41},{76,18,56,96,24,77,50,56,82,81,21,44,9,23,79},{65,10,78,19,37,77,26,12,11,87,33,11,33,4,70,55,45,5,89,36,82,52,71,8,8,99,49,79,81,63,81,40,1},{33,39,45,37,35,30,77,35,82,3,95,95,92,47,17,80,85,5,98,94,58,50,67,69,49,75,6,33,87,1,8,34,67,47,77,16,31,1,85,36,10,69,38,85,74,27,68,89,81},{84,65,8,68,67,50,95,63,82,74,15,23},{83,80,38,10,81,7,98,74,99,28,83,28,32,73,57,3,58,99,91,87,4,77,29,70,67,68,58,34,65,5,40,77,68,68,97,4,44},{21,9,42,33,60,19,12,34,2,86,17,71,69,21,70,74,82,82,56,23,67},{40,35,52,70,26,77,34,73,94,38,73,17,11,20},{25,63,66,86,25,5,3,65,14,46,42},{43,33,99,51,18,69,11},{96,26,41,60,74,6,2,8,58,98,34,75,78,43,42,65,65,55,97,91,38,9,43,12,46,32,14,86,69,48},{72,30,96,85,98,65,18,56,87,30,25,33,95,10,61,30,60,23,60,16,47,87,37,88,21,19},{50,40,70,94,42,49,87,37,74,43,51,77,27,4,52,73,1,68,78,67,90,6,71,63,90,35,86,76,68,79,57,45,27,29,1,75,60,29,1,66,74},{79,49,53,14,41,85,96,98,32,94,50,74,11,32,37,58,32,79,24,55,29,54,90,78,76,11,4,94,68},{76,58,2,68,78,6,13,58,6,48}},{{57,64,14,43,52,77,97,18,3,79,44,66,11,35,18,48,57},{86,90,14,56,73,83,6,42,30,37,50,48,18,35,86,29,72,57,23,65,69,14,57,54,40,54,26,92,66,85,87,10,55,30,54,43,5,46,63,64},{22,4,3,49,18,86,34,79,89,5,72,8,33,25,89,2,91,61,18,2,33,40,31,40,40,39,53,81,12,59,85,43,35},{59,9,89,87,75,3,25,94},{12,24,74,40,84,44,23,24,76,63,11,23,46,70,55,74,60,61,70,28,4,7,80,84,33,99,55,6,88,63,19,54,23,32,15,7,74,36,21,85,88,30},{27,92,34,86,22,20,3,1,90,78,69,7,45,13,63,40,94,54,3,41,74,47,65,15,2,76,29,52,46,94,21,69,11,24},{98,83,78,29,95,2,75,70,89,11,35,89,7,64,6,80,21,79,62,8,44,24,46,30,52,56,31,36,23,88,14,3,2,16,12,90},{96,81,1,36,86,5,88,13,32,50,22,7,46,8,34,46,92,46,95,6,17,35},{69,41,27,54,96},{59},{2,78,98,45,39,88,2,41,92,83,32,81,57,49,24,22},{64,13,96,53,72,82,4,57,37,89,16,96,9,83,87,52,9,7,86},{63,17,29},{79,30,42,4,41,31,69,2,13,38},{40,81,16,26,91,29,37,75,99,81,47,55,63,96,98,15,4,90,53,65,79,53,68,36,21,52,80,30},{5,60,40,57,16,25,95,59,68,37,58,82,28,79,16,4,12},{38,82,85,42,23,36,63,80,84,3,65,16},{20,45,4,47,88,66,62,84,69,77,34,95,7,79,4,12,9,8,28,55,36,42,96,23,35,92,49,71,33,19,46,91},{94,29,68,9,55,89,85,4,64,69,18,21,30,97,39,61,69,85,53,45,52,62,56,58,22,70,39,95,32,68,81,42,90,50,89,18,45,78,78,3,74,50,20,11},{66,11,7,37,6,57,16,50,58,9,21,14,73,73,90,6,7,88,3,4,96,11,54,84,38,28,41},{1},{6,28,27,52,59,13,62,14,31,32},{59,68,76,71,24,89,30,26,66,45,88,52,72,7,52,66,79,26,96,59,52},{54,41,50,4},{80,98,4,65,77,86,43,27,13,39,4,94,96,92,13,51,24,19,6,6,85,89,62,44,11,59,55,52,60,37,15,61,59,51,21,86,93,48,68,21,62,35,80,85,35,23},{7,34,53,84,9,35,55,79,15,38,85,43,50,80,29,48,87,67,8,2,96,19,11,75,26,13,91,34,37,68,67,18,24,43,5,41},{35,53,64,42,80,51,83,91,75,40,31,25,67,71,25,61,63,60,55,75,33,64,66,41,93,22,35,60,63,59,82,20,60,57,5,4,7,43,14,50,73,94,63,52,29,48,9,19},{7,13,41,22,63,48,32,49,8,25,15,37,56,24,78},{58,45,33,18,33,48,50,64,65,74,98,78,9,48,70,5,71,63,89,38,57,84,94,40,23,34,34,98,85,61,13,38,92,98,15,64,56,23,91,9,50,18,18,83,72,94,10,71,9},{13,39,36,80,40,81,12,27,85,91,5,51,90,65,2,72,5,85,29,55,91,75,8,91,81,10,15,31,3,73,23,88,18},{46,65,69,68,42,57,88,3,7,17,66,83,46},{99,15,31,56,63,6},{96,39,93,78,2,12,66,76,5,16,56,63,55,74,54,98,7,45,53,4,6,66,6,68,14,2,87,50,94,43,39,58,21,4,55,14,49,59,62},{19,96,21,54,61,88,11,79,75,71,56,57,12,36,44,43,84,95,92,80,51,9,36,6,11,78,63,94,75,80,5,84,14,44,86,82,69,23,47},{34,45,44,41},{39,23,58,48,32,92,36,32,24,18,22,1,9,2,83,37,19,91,60,81,79,25,68,9,12,26},{44,92,92,12,71,22,94,98,34,62,7,97,97,97,60,51,13,41,35,75,97,21,30,61,41,70,82,7,31,66,5,40,62,25,69,31},{96,1},{1,65},{30,59,74,49,14,90,88,38,91,36,4,44,28,71,59,25,97,79,93,10,7,73,73,37,37,57,71,61,79,62,84,57,39,53,36,49,7,77,47,54,92,53,96,46,69,39,45,94,67},{19,93,99,75,96,15},{86,97,1,75,11,45,22,59,96,14,62,39,33,3,62,41,39,18,24,3,34,50,81,39,73,81,37,53,54,94,26,94,6,2,96,19,7,48,58,53,3,24,40,60,76},{73,4,8,42,10,24,84,69},{42,2,49,32,11,68,26,90,23,2,62,49},{98,3,84,46,32,87,25,52,79,56,9,9,72,50,23,50},{92,71,50,10,78,29,48,9,16,54,12,87,50,80,27,36,7,69,56,45,72,27,77,95,96,49}},{{84,47,93,51},{97,74,57,83,5,70,92,1,11,2,8,57,81},{76,66,34,36,74,51,30,35,76,48,3,88,26,27,37,86,2,53,26,52,65,99,23,77,13,58,6,40,26,62,83,59,24,95,54,24,63,58,32,71,60,15,75,29,37,29,4},{71,18,87,98,77,23,80,15},{28,42,8,9,21,65,70,98,10,16,1,77,5,70,57,90,92,43,94,12,93,8,97,6,84,32,59,92,4,34,45,40,25,73,25,92,72,71,87,92,88,44,30,38,78},{93,6,77,55},{29,89,30,59,86,80,20},{6,31,25,81,75,64,79,37,56,30,71,4,86,53,31,81,56,86,36,76,30,96,19,99,3,15,4,82,87,7,35,55,10,3,52,19,2,1,4,80,32},{31,43,73,35,53},{77,93,1,13,82,55,74,3,77,19,23,30,73,24,74,68,99,60,5,65,53,9,33,73,73,76,62,40,28,44,14,25,38,97,99,37,90,48,41,99,70,77},{70,6,5,28,81,26,11,36,26,1,65,51,56,62,35,14,80,19,58,86,48,48,90,71,38,3,40,42,26},{8,13,98,48,25,57,55,61,44,83,6,86,22,88},{23,83,44,7,90,99,7,21,47,55},{47,92,94,44,92,99,28,96,94,51,23,33,27,7,99,30,49,87,31,79,95,13,7,22,93,60,96,61,90,57,23,84,69,60,17,29,77},{26,62,80,46,59,9,81,99,21,68,12,1,73,40,35,87,64,94,31,51,88,26},{9,95,69,50,63,28,83,12,81,57,16,22,23,97,36,78,91,5,50,21,1,14,92,10,62,19,30,82,81,84,41,40,78,88,68,27,4,78,61,99,8,67,82,58,38,42,64,43,29},{22,93,76,24,74,65,56,33,91,89,16,70,33,7,98,46,82,32,26,2,34,27,67,85,66,82,20,8},{63,98,27,78,7,32,13,25,58,5,46,10,30,47,79,65,33,84,60,95,18,79,69,20,36,43,13,20,72,30,32,94,59,8,70,7,54,18,50,56,65,61,70,3},{23,26,33,14,79,93,32,58,80,76,40,2,55},{48,40,9,29},{89,96,17,74,98,15,1,46,38,55,90,20,85,93,91,22,54},{72,14,76,72,64,61,27,93,87,63,55,95,32,66,19,74,34},{52,25,67,46,11,1,47,54,86,72,24,46,92,17,23,31,46,53,63,74,22,8,64,54,88,4,9,39,3,56,17,15,13,41,44,49,64},{53,42,4,10},{29,46,14,53,84,80,65,84,79,74,54,18,1,95,48,36,2,44,84,76,22,33,60,20,6,14,42,26,60,42,89,62,76,20,40,66,2,81,92,29,27,6,9,63,96,31,14},{18,81,90,96,76,61,26,17,22,24,42,66,98,17,65,80,23,65,77,90,47,56,17,3,15,51,14},{39,13,16,88,62,59,78}},{{94,44,83,3,47,11,36,61,29,34,43,94,79,3},{35,91,27,32,31,95,89,92,86,26,9,30,64,56,73,85,39,14,97,77,29,89,59,16,20,53,89,87,3,77,77,69,36,24,52,52,65,41,94,4,85,38,70,76,26,92,92,23,34},{80,40,74,57,81,40,53,27,82,44,51,91,42,31,55,79,52,66,53,27,23,24,53,72,58,11,23,82,67,41,88,84,95,78,76,73},{72,93,81,5,86,85,55,44,69,70,60,61,52,1,95,4,70,44,68,93,64,12,95,21,4,54,19,74,39,36,74,4,82,33,30,76,32,59,78,56,56,96,44,7,64,83,95},{36,69,97,32,86,60,10,45,74,25,74,72,73,56,46,71,51,95,31,95,97,95,40,64,15,63,78,63,72,23,71,19,57,51,7,27,50,58,31,6,90,41,70},{83,15,4,37,90,29,28,42,8,85,91,2,16,4,76,34,67,67,11,6,28,40,73,32,53,35,52,92,34,15,71,4,86,27,95,15,74,85,74,25,9,72,80,74,45,81,62},{90,54,30,4,42,25,99,8,74,27,77,35,91,8,17,28,39,83,62,90,49,18,94,38},{99,81,47,87,32,25,26,32,93,93,20,74,5,43,8,41,40,9,6,36,63,26,77},{3,73,96,98,94,41,51,93,75,93,93,31,26,11,26,29,83,77,23,84,13,58,62,31,22,83,14,70,45,89,63,82,74,80,73,58},{11,52},{52,49,6,36,12,79,79,89,58,21,43,21,32,15,68,46,43,11,37,71,58,59,50,28,66},{11,79,89,58,33,23,75,50,73,44,76},{89,9,37,14,7,43,93,70,46,79,58,85,22},{4,10,22,46,13,41,56,37,39,58,87,19,15,88,33,46,13,67,84,9,13,16,58,82,79,77,84,79,39,98,53,84,19,9,93,30,6,82,8,43,17},{62,21,34,86,98,44,81,14,82,54,44,53,36,33,2,68,19,37,60,68,6,31,44,52,95,78,24,20,56,58,11,31,61,79,84,20,35,53,79,60,18,30,43,90},{6,16,42,48,89,31,13,89,14,73,44,91,12,1,36,34,94,86,86,82,45,99,38,2,1,76,26,90,30,61,21,43,26,6,44,98,69,41,48,40,90,76,61,17,81,74,92,54,16},{15,8,16,84,86,34,34,75,92,67,54},{19,31,62,89,26,96,91,32,78,42,84,66,79,29,48,49,5,70,2,71,36,90,70,86,80,28,71,77,3},{17,5,88,70,37},{17,76,71,38,5,87,77,36,76,29,14,36,18,80,23,39},{21,37,68,55,90,49,24,88,13,97,97,61,71,29,89,75,98},{73,87,99,92,49,12,74,59,64,19,89,53,12,44,73,81,57,88,72,37,4,56,81,14,29,81,84,98,98,60,75,98,86,51,88},{35,7,98,35,89,39,27,69,30},{23},{91,65,2,73,12,91,47,14,48,1,69,95,81,59,36,79,35,9},{54,25,8,41,64,96,84,47,85},{68,54,56,89,25,27,83,2,24,87,86,4,96,29,69,93,32,2,22,75,28,44,81,49,13,26,67,78,55,39,33,5,62,95,80,95,78,34,36,30,98,99},{96,64,38,15,13,52,35,51,58,8,62,66,33,36,70,75,5,34,54,8,27,99,3,26,47,1,61,75},{85,51,48,48,79,4,61,32,30,94,40,65,7,86,75,27,89,47,19,99,55,96,24,70,37,27,26,47,33,81,36,13,14,39,90,92,54,93,83,93,67,35,47,75,54},{17,66,58,44,36,32,93,79,30,62,88,4,94,41,56,74,27,11,91,2,95,11,44,93,51,31,68,95,71,44,41,81,69,38,28,13,73,7,63,8,89,14,35},{82,91,99,3,24,5,56,84,15,51,33,55,78,52,19,32,36,81,73,34,57,45,79,36,13,73,39,79,43,50,3,73,70,30,3,88},{2,3,98,55,1,88,84,56,66,26,36,29,51,1,35,48,93,99,73,93,68,89,97,51,35,6,38,30,84,9,1,92,10,67,42,99},{92},{50,66,97,64,10,81,14,33,2,75,7,68,82,82,40,2,45,70,6,92,74,58,53,51,73,22,99,5,7,68,2,26,95,4,47,27,18,90,89,14,9},{80,61,92,13,68,82,89,28,7,35},{69,15,28,27,60,79,20},{38,31,3,33,58,82,75,73,67,42,42,76,23,15,81,82,16,63,71,68,44,26,78,31,48,15,65,65,51,37,49,16,68,61,93,13,59,23,34,84},{62,63,60,5,95,90,78,58,87,37,26,13,55,81,30,19,80,82,4,24},{8,11,45},{64,21,66,1,72,10,36,85,24,90,27,68,81,63,46,91,3,81,83,44,33,67,72,31,96},{12,84,24,51,57,17,46,58,74,28,82,85,64,23,31,77,23,97,34,56,90,47,36},{76,18,75,5,93,67,79,43,73,16,46,19,19,54,38,56,99,60,88,31,48},{88,10,77,8,66,37,46,51,95,71,43,78,24,14,78,9,88,76,33,27,58},{37,14,60,29,82,67,7,19,7,47,33,87,69,21,77,82,55,73,68,43,89,97,50,92,91,33,31,96,13,84,18,86,96,61,74,22,51,4,76,23,97,63,66},{93,33,45,89,72,53,28,7,43,51,64,71,29,49,7,49,65,99,60,75,12,72,97,4,41,41,68,44,47,26,66},{6,37,42,78,68,92}},{{73,76,46,23,86,18,9,70,59,62,16,29,73},{61,96,64,50,73,94,12,57,61},{94,91,84,25,31,11,12,3,44,40,49,47,25,34,98,31},{52,39,9,83,41,89,28,13,32,34,4,24,92,74,70,24,59,42,84,98,35,77,38,58,3,80,35,21,80},{86,91,2,3,3,90,9,69,43,69,63,3,64,81,37,50,57,58},{55,86,11,29,5,8,54,40,67,51,99,37,65,70,6,89,77,95,44,64,27,91,16,12,73,51,43,15,51,44,21,44,4,84},{59,63,28,26,57,36,55,65,66,74,61,39,94,55,37,4,36,36,39,51,92,11,50,87,37,51,53,77,24,77,22,45,92,31,21,99,73,18,72,55,59,76},{63,51,4,58,65,63,19,79,25,31,9,79,67,32,37,34,19,65,24,36,48,75},{12,97,13,26,16,69,64,92,90,72,61,1,40,13,59,1,44,44,70,50},{62,3,60,24,42,25,91,49,8,73,93,22,4,22,67,30,6,58,85,14,63,74,11,12,8,11,95,2,88,98,37,41,87,82,62,62,51},{52,74,28,24,98,78,22,44,90,79,47,99,22,30,28,37,39,91,35,7,57,99},{40,79,99,66,98,1,47,99,10,54,28,79,43,1,74,28,93,95,85,36,44,52,70,58,83,77,29,68,31,77,31,75,69,12,76},{17,55,59,48,74,43,12,36,24,73,94,69,22,20,34,66,44,9,84},{71,66,21,8,26,93,80,30,3,80,35,63,61,43,12,81,79,53,83,5,15,69,26,46,17,4,89,86,68,97,33,48,47},{47,27,37,82,69,28,65,13,74,14,67,81,43,61,75,95,54,45,98,87,5,27,69,6,99,82,55,45,26,58,52,19,97,22,41,24,74,9,27,11,87},{53,94,37,35,74,93,43,72,98,29,72,82,89,92,7,20,70,38,90,55,51,5,72,48,14,98,95,93,65,79,60,31,42,55,51,4},{24,57,83,16,92,22,33,51,80,19,78,68,29,67,99},{80,76,99,52,90,30,67,49,13,57,93,90,44,68,44,48,72,54,98,15,17,34,40,69,1},{67,81,18,33,82,69,42,42,57,88,82,9,9,75,83,87,37,81,15,86,52,24,7,44,58,90,21,70,29,81,82,88,23,2,33,39,5,76,98,85,93,74,11,79,52},{51,76,56,56,63,69,51,29,29,88,33,13,58,52,94,15,6,3,38,52,43,22,78,41,92,50,26,3,86,71,68,76,87,8,25},{98},{6,60,39,44,3,58,75,97,29,49,88,44,92,43,12,5,38,75,57,3,85,16,86,62,16,40,76,37,5,69,16,63,84,78,74,18,4,89,73,67,60,56,10,3,61,64,24}}};

     for (int i =0; i < param0.size(); i+=2 )
        for (int j =0; j < param0[i].size(); ++j )
            for (int k =0; k < param0[i][j].size(); ++k )
                param0[i][j][k]= param0[i][j][k] %2;

    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i]) == f_gold(param0[i]))
        {
            n_success+=1;
        }
    }
    for (int i =0; i < param0.size(); ++i )
        for (int j =0; j < param0[i].size(); ++j )
            for (int k =0; k < param0[i][j].size(); ++k )
                param0[i][j][k] %=2;
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}