bool isDivisible ( char str [ ], int k ) {
  int n = strlen ( str );
  int c = 0;
  for ( int i = 0;
  i < k;
  i ++ ) if ( str [ n - i - 1 ] == '0' ) c ++;
  return ( c == k );
}