int findPossibleMoves ( int * * mat , int p , int q ) {
  static int n = 2 , m = 2 ;
  ;
  int X [ 8 ] = {
    2 , 1 , - 1 , - 2 , - 2 , - 1 , 1 , 2 }
    ;
    int Y [ 8 ] = {
      1 , 2 , 2 , 1 , - 1 , - 2 , - 2 , - 1 }
      ;
      int count = 0 ;
      for ( int i = 0 ;
      i < 8 ;
      i ++ ) {
        int x = p + X [ i ] ;
        int y = q + Y [ i ] ;
        if ( ( x >= 0 && y >= 0 && x < n && y < m && mat [ x ] [ y ] == 0 ) count ++ ;
      }
      return count ;
    }
    