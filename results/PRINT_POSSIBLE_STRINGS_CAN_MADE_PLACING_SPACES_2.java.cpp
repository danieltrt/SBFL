void printSubsequences ( string s ) {
  string :: size_type pos = s . find ( " " ) ;
  if ( pos != string :: npos ) {
    int n = s . length ( ) ;
    int opsize = ( int ) ( pow ( 2 , n - 1 ) ) ;
    for ( int counter = 0 ;
    counter < opsize ;
    counter ++ ) {
      for ( int j = 0 ;
      j < n ;
      j ++ ) {
        cout << s [ pos + j ] ;
        if ( ( counter & ( 1 << j ) ) > 0 ) {
          cout << " " ;
        }
      }
      cout << endl ;
    }
  }
}
