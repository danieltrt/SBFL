void maxOverlap ( int * start , int * end , int n ) {
  int maxa = std :: max ( start , end ) ;
  int maxb = std :: max ( end , start ) ;
  int maxc = std :: max ( maxa , maxb ) ;
  int x [ maxc + 2 ] ;
  memset ( x , 0 , sizeof ( x ) ) ;
  int cur = 0 , idx = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    ++ x [ start [ i ] ] ;
    -- x [ end [ i ] + 1 ] ;
  }
  int maxy = std :: numeric_limits < int > :: min ( ) ;
  for ( int i = 0 ;
  i <= maxc ;
  i ++ ) {
    cur += x [ i ] ;
    if ( maxy < cur ) {
      maxy = cur ;
      idx = i ;
    }
  }
  cout << "Maximum value is:" << maxy << " at position: " << idx << "\n" ;
}
