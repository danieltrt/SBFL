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
#include <bits/stdc++.h>
using namespace std;
void f_gold ( char s1 [ ], char s2 [ ], int index = 0 ) {
  s2 [ index ] = s1 [ index ];
  if ( s1 [ index ] == '\0' ) return;
  f_gold ( s1, s2, index + 1 );
}


//TOFILL

int main() {
    int n_success = 0;
    vector<vector<char>> param0 {{'v'},{'6','8','3','3','5','2','5','6','9','9','2','6','2','1','9','3','7'},{'0','0','0','0','0','0','0','0','0','0','0','0','0','0','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},{'e','G','a','r','F','U','W','k','u','z','y','v','A','W','m','G','H','O','I','a','u','V','f','B','q','e','E','e','L','c',' ','w','K',' ','K','j','j','s','q','u','n','i','T','a','Y'},{'0','0','0','0','1','1','1','2','2','2','2','2','2','3','3','3','3','4','4','4','4','5','5','6','6','6','7','7','7','7','7','7','8','8','9','9','9','9'},{'1','0','0','1','0','1','1','1','0','0','0','1','0','0','0','1','1','0','0','0','0','1','1'},{' ','B','D','D','D','E','E','E','G','H','J','K','K','K','L','N','O','S','V','W','Y','Z','b','c','d','d','f','f','f','f','f','f','i','k','k','o','t','u','v','x','x','z'},{'4'},{'0','0','0','0','0','0','0','0','0','1','1','1','1','1','1','1','1'},{'D','I','u','K','e','s','n','z','d','y','S','P','y','r'}};
    vector<vector<char>> param1 {{'Z'},{'8','6','0','2','8','0','8','7','0','5','4','5','9','4','5','4','4'},{'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},{'S','m','d','a','W','N','F','H','B','E','h','M','z','H','c','X','l','a','R','e','D','D','q','V','U','w','o','K','u','n','b','k','Y','M','L','H','L','X','H','r','D','o','A','Y','H'},{'0','0','0','0','0','1','1','1','2','2','2','3','3','4','4','4','5','5','5','5','6','6','7','7','7','7','7','8','8','8','8','9','9','9','9','9','9','9'},{'1','1','0','0','0','1','0','1','1','0','0','0','1','0','1','0','1','1','0','1','1','0','1'},{'G','G','J','K','L','N','Q','R','R','S','U','W','X','Y','Y','a','b','b','b','c','d','e','e','f','f','h','j','j','k','k','l','m','m','n','o','s','t','t','w','z','z','z'},{'8'},{'0','0','0','0','0','0','0','0','1','1','1','1','1','1','1','1','1'},{'N','h','M','N','n','F','Y','L','G','w','o','G','y','q'}};
    vector<int> param2 {0,11,34,41,33,13,40,0,12,7};
    vector<vector<char>> filled_function_param0 {{'v'},{'6','8','3','3','5','2','5','6','9','9','2','6','2','1','9','3','7'},{'0','0','0','0','0','0','0','0','0','0','0','0','0','0','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},{'e','G','a','r','F','U','W','k','u','z','y','v','A','W','m','G','H','O','I','a','u','V','f','B','q','e','E','e','L','c',' ','w','K',' ','K','j','j','s','q','u','n','i','T','a','Y'},{'0','0','0','0','1','1','1','2','2','2','2','2','2','3','3','3','3','4','4','4','4','5','5','6','6','6','7','7','7','7','7','7','8','8','9','9','9','9'},{'1','0','0','1','0','1','1','1','0','0','0','1','0','0','0','1','1','0','0','0','0','1','1'},{' ','B','D','D','D','E','E','E','G','H','J','K','K','K','L','N','O','S','V','W','Y','Z','b','c','d','d','f','f','f','f','f','f','i','k','k','o','t','u','v','x','x','z'},{'4'},{'0','0','0','0','0','0','0','0','0','1','1','1','1','1','1','1','1'},{'D','I','u','K','e','s','n','z','d','y','S','P','y','r'}};
    vector<vector<char>> filled_function_param1 {{'Z'},{'8','6','0','2','8','0','8','7','0','5','4','5','9','4','5','4','4'},{'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},{'S','m','d','a','W','N','F','H','B','E','h','M','z','H','c','X','l','a','R','e','D','D','q','V','U','w','o','K','u','n','b','k','Y','M','L','H','L','X','H','r','D','o','A','Y','H'},{'0','0','0','0','0','1','1','1','2','2','2','3','3','4','4','4','5','5','5','5','6','6','7','7','7','7','7','8','8','8','8','9','9','9','9','9','9','9'},{'1','1','0','0','0','1','0','1','1','0','0','0','1','0','1','0','1','1','0','1','1','0','1'},{'G','G','J','K','L','N','Q','R','R','S','U','W','X','Y','Y','a','b','b','b','c','d','e','e','f','f','h','j','j','k','k','l','m','m','n','o','s','t','t','w','z','z','z'},{'8'},{'0','0','0','0','0','0','0','0','1','1','1','1','1','1','1','1','1'},{'N','h','M','N','n','F','Y','L','G','w','o','G','y','q'}};
    vector<int> filled_function_param2 {0,11,34,41,33,13,40,0,12,7};
    for(int i = 0; i < param0.size(); ++i)
    {
        f_filled(&filled_function_param0[i].front(),&filled_function_param1[i].front(),filled_function_param2[i]);
        f_gold(&param0[i].front(),&param1[i].front(),param2[i]);
        if(equal(begin(param0[i]), end(param0[i]), begin(filled_function_param0[i])) && equal(begin(param1[i]), end(param1[i]), begin(filled_function_param1[i])) && param2[i] == filled_function_param2[i])
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}