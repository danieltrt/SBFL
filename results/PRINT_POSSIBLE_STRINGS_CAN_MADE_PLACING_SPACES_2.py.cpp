void printSubsequences ( string str ) {
  int n = str . length ( ) ;
  int opsize = ( int ) pow ( 2 , n - 1 ) ;
  for ( int counter = 0 ;
  counter < opsize ;
  counter ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      cout << str [ j ] << " " ;
      if ( ( counter & ( 1 << j ) ) != 0 ) cout << " " ;
    }
    cout << "\n" ;
  }
}
