static void KMP ( int m, int n, String str2, String str1 ) {
  int pos = 0, len = 0;
  int [ ] p = new int [ m + 1 ];
  int k = 0;
  char [ ] ch1 = str1 . toCharArray ( );
  char [ ] ch2 = str2 . toCharArray ( );
  for ( int i = 2;
  i <= n;
  i ++ ) {
    while ( k > 0 && ch1 [ k ] != ch1 [ i - 1 ] ) k = p [ k ];
    if ( ch1 [ k ] == ch1 [ i - 1 ] ) ++ k;
    p [ i ] = k;
  }
  for ( int j = 0, i = 0;
  i < m;
  i ++ ) {
    while ( j > 0 && j < n && ch1 [ j ] != ch2 [ i ] ) j = p [ j ];
    if ( j < n && ch1 [ j ] == ch2 [ i ] ) j ++;
    if ( j > len ) {
      len = j;
      pos = i - j + 1;
    }
  }
  System . out . println ( "Shift = " + pos );
  System . out . println ( "Prefix = " + str1 . substring ( 0, len ) );
}