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
char f_gold ( string strA, string strB ) {
  int res = 0, i;
  for ( i = 0;
  i < strA . length ( );
  i ++ ) {
    res ^= strA [ i ];
  }
  for ( i = 0;
  i < strB . length ( );
  i ++ ) {
    res ^= strB [ i ];
  }
  return ( ( char ) ( res ) );
}


char f_filled ( const char * strA, const char * strB ) {
  unsigned int res = 0;
  for (;
  * strA != 0;
  strA ++ ) {
    res = res ^ ( unsigned int ) ( * strA ++ );
  }
  for (;
  * strB != 0;
  strB ++ ) {
    res = res ^ ( unsigned int ) ( * strB ++ );
  }
  return ( ( char ) ( res ) );
  ;
}



static // f_filled_inner(string param0, string param1)
{
char char_arr_param0[param0.length() + 1];
strcopy(char_arr_param0, param0.c_str());
char char_arr_param1[param1.length() + 1];
strcopy(char_arr_param1, param1.c_str());
return (//) f_filled(char_arr_param0,char_arr_param1);
}

int main() {
    int n_success = 0;
    vector<string> param0 {"obfLA mmMYvghH","2941","0111111","oWvbFstI","4937516500","101110100","hYZscJQFBE","58443","1100","ZUdYuIBVNaeeb"};
    vector<string> param1 {"obfLA  mmMYvghH","23941","01011111","oWvsbFstI","49376516500","1011210100","hYZscJQQFBE","584443","11000","ZUdYVuIBVNaeeb"};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled_inner(param0[i],param1[i]) == f_gold(param0[i],param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}