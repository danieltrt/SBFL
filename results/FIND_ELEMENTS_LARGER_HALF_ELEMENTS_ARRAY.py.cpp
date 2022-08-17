int findLarger ( int arr [ ] , int n ) {
  int x [ n ] ;
  sort ( arr , arr + n ) ;
  for ( int i = n / 2 ;
  i < n ;
  i ++ ) cout << x [ i ] << endl ;
  return 0 ;
}
