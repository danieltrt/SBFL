static int countSubstringWithEqualEnds ( String s ) {
  int result = 0;
  int n = s . length ( );
  for ( int i = 0;
  i < n;
  i ++ ) for ( int j = i;
  j < n;
  j ++ ) if ( s . charAt ( i ) == s . charAt ( j ) ) result ++;
  return result;
}