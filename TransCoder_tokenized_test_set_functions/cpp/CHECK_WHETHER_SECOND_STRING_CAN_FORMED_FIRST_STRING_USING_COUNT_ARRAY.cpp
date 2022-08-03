bool canMakeStr2 ( string str1, string str2 ) {
  int count [ MAX ] = {
    0 };
    for ( int i = 0;
    i < str1 . length ( );
    i ++ ) count [ str1 [ i ] ] ++;
    for ( int i = 0;
    i < str2 . length ( );
    i ++ ) {
      if ( count [ str2 [ i ] ] == 0 ) return false;
      count [ str2 [ i ] ] --;
    }
    return true;
  }