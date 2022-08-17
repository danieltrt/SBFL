int longestNull ( string str ) {
  vector < pair < char , int >> arr ;
  arr . push_back ( make_pair ( '@' , - 1 ) ) ;
  int maxlen = 0 ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  ++ i ) {
    arr . push_back ( make_pair ( str [ i ] , i ) ) ;
    while ( arr . size ( ) >= 3 && arr [ arr . size ( ) - 3 ] [ 0 ] == '1' && arr [ arr . size ( ) - 2 ] [ 0 ] == '0' && arr [ arr . size ( ) - 1 ] [ 0 ] == '0' ) {
      arr . erase ( arr . size ( ) - 3 ) ;
      arr . erase ( arr . size ( ) - 2 ) ;
      arr . erase ( arr . size ( ) - 1 ) ;
    }
    int tmp = arr [ arr . size ( ) - 1 ] [ 1 ] ;
    maxlen = max ( maxlen , i - tmp ) ;
  }
  return maxlen ;
}
