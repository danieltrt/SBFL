bool f_filled ( int32_t a [ ] , int32_t b [ ] , int32_t n , int32_t k ) {
  std :: sort ( a , a + n ) ;
  std :: sort ( b , b + n ) ;
  for ( int32_t i = 0 ;
  i < n ;
  i ++ ) if ( a [ i ] + b [ i ] < k ) return false ;
  return true ;
}
