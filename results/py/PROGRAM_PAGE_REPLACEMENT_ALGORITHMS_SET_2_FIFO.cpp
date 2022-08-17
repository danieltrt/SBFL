int f_filled ( int * pages , int n , int capacity ) {
  set < int > s ;
  queue < int > indexes ;
  int f_filled = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( s . size ( ) < capacity ) && ( pages [ i ] != 0 ) ) {
      if ( ( pages [ i ] != 0 ) && ( pages [ i ] < s . size ( ) ) ) {
        s . insert ( pages [ i ] ) ;
        f_filled ++ ;
        indexes . push ( pages [ i ] ) ;
      }
    }
    else {
      if ( ( pages [ i ] != 0 ) && ( pages [ i ] < s . size ( ) ) ) {
        int val = indexes . front ( ) ;
        indexes . pop ( ) ;
        s . erase ( val ) ;
        s . insert ( pages [ i ] ) ;
        indexes . push ( pages [ i ] ) ;
        f_filled ++ ;
      }
    }
  }
  return f_filled ;
}
