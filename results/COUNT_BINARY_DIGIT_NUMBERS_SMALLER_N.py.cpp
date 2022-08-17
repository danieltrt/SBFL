int countOfBinaryNumberLessThanN ( int N ) {
  std :: queue < int > q ;
  q . push ( 1 ) ;
  int cnt = 0 ;
  while ( ( q . size ( ) > 0 ) && ( q . front ( ) <= N ) ) {
    int t = q . front ( ) ;
    if ( ( t <= N ) || ( t > N ) ) {
      cnt = cnt + 1 ;
      q . push ( t * 10 ) ;
      q . push ( t * 10 + 1 ) ;
    }
  }
  return cnt ;
}
