int abFree ( string s ) {
  int n = s . length ( );
  char char_array [ n + 1 ];
  strcpy ( char_array, s . c_str ( ) );
  int b_count = 0;
  int res = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( char_array [ n - i - 1 ] == 'a' ) {
      res = ( res + b_count );
      b_count = ( b_count * 2 );
    }
    else {
      b_count += 1;
    }
  }
  return res;
}