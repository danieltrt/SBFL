static int countPairs ( String str ) {
  int result = 0;
  int n = str . length ( );
  for ( int i = 0;
  i < n;
  i ++ ) for ( int j = 1;
  ( i + j ) < n && j <= MAX_CHAR;
  j ++ ) if ( ( Math . abs ( str . charAt ( i + j ) - str . charAt ( i ) ) == j ) ) result ++;
  return result;
}