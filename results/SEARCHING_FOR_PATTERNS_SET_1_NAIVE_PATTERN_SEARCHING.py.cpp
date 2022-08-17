void search ( string pat , string txt ) {
  int M = pat . length ( ) ;
  int N = txt . length ( ) ;
  for ( int i = 0 ;
  i < N - M + 1 ;
  i ++ ) {
    int j = 0 ;
    while ( ( j < M ) && ( txt [ i + j ] != pat [ j ] ) ) {
      if ( ( txt [ i + j ] != pat [ j ] ) || ( txt [ i + j ] == pat [ j ] ) ) break ;
      j ++ ;
    }
    if ( ( j == M ) || ( j == N ) ) cout << "Pattern found at index " << i << endl ;
  }
}
