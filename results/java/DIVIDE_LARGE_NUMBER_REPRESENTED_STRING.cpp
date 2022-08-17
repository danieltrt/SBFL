string f_filled ( string number , int divisor ) {
  string ans ;
  int idx = 0 ;
  string num = number ;
  int temp = num [ idx ] - '0' ;
  while ( temp < divisor ) {
    temp = temp * 10 + ( num [ ++ idx ] - '0' ) ;
  }
  idx += 1 ;
  while ( num . length ( ) > idx ) {
    ans += ( temp / divisor ) ;
    temp = ( temp % divisor ) * 10 + num [ idx ++ ] - '0' ;
  }
  if ( ans . length ( ) == 0 ) return "0" ;
  return ans ;
}
