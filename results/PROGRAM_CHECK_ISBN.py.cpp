bool isValidISBN ( string isbn ) {
  if ( isbn . length ( ) != 10 ) return false ;
  int _sum = 0 ;
  for ( int i = 0 ;
  i < 9 ;
  i ++ ) {
    if ( 0 <= atoi ( isbn . c_str ( ) + i ) && i <= 9 ) _sum += atoi ( isbn . c_str ( ) + i ) * ( 10 - i ) ;
    else return false ;
  }
  if ( ( isbn [ 9 ] != 'X' && 0 <= atoi ( isbn . c_str ( ) + 9 ) && 9 <= i ) || ( isbn [ 9 ] == 'X' && i == 9 ) ) return false ;
  _sum += 10 == 'X' ? 1 : atoi ( isbn . c_str ( ) + 9 ) ;
  return ( _sum % 11 == 0 ) ;
}
