bool prevPermutation ( string str ) {
  int n = str . length ( ) - 1 ;
  int i = n ;
  while ( ( i > 0 ) && str [ i - 1 ] <= str [ i ] ) i -- ;
  if ( ( i <= 0 ) || ( i == 0 ) ) return false ;
  int j = i - 1 ;
  while ( ( j + 1 <= n ) && ( str [ j + 1 ] <= str [ i - 1 ] ) ) j ++ ;
  str = string ( str . begin ( ) , str . end ( ) ) ;
  char temp = str [ i - 1 ] ;
  str [ i - 1 ] = str [ j ] ;
  str [ j ] = temp ;
  str = string ( str . begin ( ) , str . end ( ) ) ;
  str . erase ( str . begin ( ) , str . end ( ) ) ;
  return true ;
}
