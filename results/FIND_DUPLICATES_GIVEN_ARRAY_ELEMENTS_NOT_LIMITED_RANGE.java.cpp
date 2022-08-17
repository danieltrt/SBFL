static void printDuplicates ( int * arr , int n ) {
  map < int , int > map ;
  int count = 0 ;
  bool dup = false ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( map . find ( arr [ i ] ) != map . end ( ) ) {
      count = map [ arr [ i ] ] ;
      map [ arr [ i ] ] = count + 1 ;
    }
    else {
      map [ arr [ i ] ] = 1 ;
    }
  }
  for ( map . find ( arr [ n ] ) != map . end ( ) ) {
    if ( map [ arr [ n ] ] > 1 ) {
      cout << map [ arr [ n ] ] << " " ;
      dup = true ;
    }
  }
  if ( ! dup ) cout << "-1" ;
}
