string encodedChar ( string str , int k ) {
  string expand ;
  int freq ;
  int i = 0 ;
  while ( ( i < str . length ( ) ) && ( str [ i ] >= 'a' && str [ i ] <= 'z' ) ) {
    temp += str [ i ] ;
    i ++ ;
  }
  while ( ( i < str . length ( ) ) && ( str [ i ] >= '1' && str [ i ] <= '9' ) ) {
    freq = freq * 10 + str [ i ] - '0' ;
    i ++ ;
  }
  for ( int j = 1 ;
  j <= freq ;
  j += 1 ) expand += temp ;
  if ( ( freq == 0 ) || ( freq == 1 ) ) expand += temp ;
  return expand [ k - 1 ] ;
}
