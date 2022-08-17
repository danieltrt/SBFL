void findPair ( int arr [ ] , int n ) {
  map < int , int > s ;
  s [ arr [ 0 ] ] = 1 ;
  s [ arr [ 1 ] ] = 1 ;
  bool found = false ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      if ( arr [ i ] + arr [ j ] == s . find ( arr [ i ] ) != s . end ( ) ) {
        cout << arr [ i ] << " " << arr [ j ] << endl ;
        found = true ;
      }
    }
  }
  if ( found == false ) cout << "Not exist" << endl ;
}
