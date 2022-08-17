void findElements ( int arr [ ] , int n ) {
  int first = std :: numeric_limits < int > :: min ( ) ;
  int second = std :: numeric_limits < int > :: max ( ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] > first ) {
      second = first ;
      first = arr [ i ] ;
    }
    else if ( arr [ i ] > second ) {
      second = arr [ i ] ;
    }
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( arr [ i ] < second ) std :: cout << arr [ i ] << " " ;
}
