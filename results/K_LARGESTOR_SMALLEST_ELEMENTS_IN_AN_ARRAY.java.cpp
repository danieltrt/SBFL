void k_largest ( int32_t * arr , int32_t k ) {
  std :: sort ( arr , arr + k ) ;
  for ( int32_t i = 0 ;
  i < k ;
  i ++ ) {
    std :: cout << arr [ i ] << " " ;
  }
}
