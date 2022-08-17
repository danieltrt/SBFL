void maxOverlap ( string start , string end ) {
  int n = start . length ( ) ;
  int maxa = max ( start . begin ( ) , start . end ( ) ) ;
  int maxb = max ( end . begin ( ) , end . end ( ) ) ;
  int maxc = max ( maxa , maxb ) ;
  int * x = ( maxc + 2 ) * new int [ n ] ;
  int cur = 0 ;
  ;
  int idx = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    x [ start [ i ] ] ++ ;
    x [ end [ i ] + 1 ] -- ;
  }
  int maxy = - 1 ;
  for ( int i = 0 ;
  i <= maxc ;
  i ++ ) {
    cur += x [ i ] ;
    if ( maxy < cur ) {
      maxy = cur ;
      idx = i ;
    }
  }
  cout << "Maximum value is: {0:d}" << maxy << " at position: {0:d}" << idx << endl ;
}
