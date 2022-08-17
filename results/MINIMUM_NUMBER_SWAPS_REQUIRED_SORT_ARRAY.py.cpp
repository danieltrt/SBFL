int minSwaps ( int * arr ) {
  int n = sizeof ( int ) * arr ;
  int * arrpos [ ] = {
    * arr , * arr + 1 }
    ;
    std :: sort ( arrpos , arrpos + n , [ ] ( int it ) {
      return it + 1 ;
    }
    ) ;
    bool vis [ n ] ;
    int ans = 0 ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      if ( vis [ i ] || arrpos [ i ] [ 0 ] == i ) continue ;
      int cycle_size = 0 ;
      int j = i ;
      while ( ! vis [ j ] ) {
        vis [ j ] = true ;
        j = arrpos [ j ] [ 0 ] ;
        cycle_size ++ ;
      }
      if ( cycle_size > 0 ) ans += ( cycle_size - 1 ) ;
    }
    return ans ;
  }
  