bool f_filled ( int n , int i ) {
  if ( n <= 2 ) return ( n == 2 ) ? true : false ;
  if ( n % i == 0 ) return false ;
  if ( i * i > n ) return true ;
  return f_filled ( n , i + 1 ) ;
}
