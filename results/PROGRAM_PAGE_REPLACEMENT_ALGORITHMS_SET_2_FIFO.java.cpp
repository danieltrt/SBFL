int pageFaults ( int pages [ ] , int n , int capacity ) {
  set < int > s ( capacity ) ;
  queue < int > indexes ;
  int pageFaults = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( s . size ( ) < capacity ) {
      if ( ! s . count ( pages [ i ] ) ) {
        s . insert ( pages [ i ] ) ;
        pageFaults ++ ;
        indexes . push ( pages [ i ] ) ;
      }
    }
    else {
      if ( ! s . count ( pages [ i ] ) ) {
        int val = indexes . top ( ) ;
        indexes . pop ( ) ;
        s . erase ( val ) ;
        s . insert ( pages [ i ] ) ;
        indexes . push ( pages [ i ] ) ;
        pageFaults ++ ;
      }
    }
  }
  return pageFaults ;
}
