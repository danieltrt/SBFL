void kLargest ( int * arr , int k ) {
  sort ( arr , arr + k ) ;
  for ( int i = 0 ;
  i < k ;
  i ++ ) cout << arr [ i ] << " " ;
}
