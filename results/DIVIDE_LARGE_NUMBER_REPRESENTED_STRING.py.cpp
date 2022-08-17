string longDivision ( string number , int divisor ) {
  string ans ;
  int idx = 0 ;
  int temp = number [ idx ] - '0' ;
  while ( ( temp < divisor ) && ( temp != '0' ) ) {
    temp = ( temp * 10 + number [ idx + 1 ] - '0' ) ;
    idx ++ ;
  }
  idx ++ ;
  while ( ( ( number . length ( ) ) > idx ) && ( temp != '0' ) ) {
    ans += ( char ) floor ( temp / divisor ) + ( char ) '0' ;
    temp = ( ( temp % divisor ) * 10 + number [ idx ] - '0' ) ;
    idx ++ ;
  }
  ans += ( char ) floor ( temp / divisor ) + ( char ) '0' ;
  if ( ( ans . length ( ) == 0 ) ) return "0" ;
  string returnans ;
  if ( ( ans . length ( ) == 0 ) && ( temp != '0' ) ) returnans = "0" ;
  else returnans = ans + "." + number [ idx ] + "." + number [ idx + 1 ] + "." + number [ idx + 2 ] + "." + number [ idx + 3 ] + "." + number [ idx + 4 ] + "." + number [ idx + 5 ] + "." + number [ idx + 6 ] + "." + number [ idx + 7 ] + "." + number [ idx + 8 ] + "." + number [ idx + 9 ] + "." + number [ idx + 10 ] + "." + number [ idx + 11 ] + "." + number [ idx + 12 ] + "." + number [ idx + 13 ] + "." + number [ idx + 14 ] + "." + number [ idx + 15 ] + "." + number [ idx + 16 ] + "." + number [ idx + 17 ] + "." + number [ idx + 18 ] + "." + number [ idx + 19 ] + "." + number [ idx + 20 ] + "." + number [ idx + 21 ] + "." + number [ idx + 22 ] + "." + number [ idx + 23 ] + "." + number [ idx + 24 ] + "." + number [ idx + 25 ] + "." + number [ idx + 26 ] + "." + number [ idx + 27 ] + "." + number [ idx + 28 ]