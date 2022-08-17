int f_filled ( string a ) {
  sort ( a . begin ( ) , a . end ( ) ) ;
  int count = 1 ;
  int answer = 0 ;
  for ( int i = 1 ;
  i < a . length ( ) ;
  i ++ ) {
    if ( a [ i ] == a [ i - 1 ] ) count ++ ;
    else {
      answer = answer + count * ( count - 1 ) / 2 ;
      count = 1 ;
    }
  }
  answer = answer + count * ( count - 1 ) / 2 ;
  return answer ;
}
