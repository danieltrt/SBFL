int getMaxGold ( int * gold , int m , int n ) {
  int goldTable [ n ] [ m ] ;
  for ( int j = 0 ;
  j < m ;
  j ++ ) {
    for ( int col = n - 1 ;
    col >= 0 ;
    col -- ) {
      for ( int row = 0 ;
      row < m ;
      row ++ ) {
        if ( ( col == n - 1 ) || ( col == n - 1 ) ) {
          int right = 0 ;
          if ( ( row == 0 || col == n - 1 ) ) right = 0 ;
          else rightUp = goldTable [ row ] [ col + 1 ] ;
          if ( ( row == m - 1 || col == n - 1 ) ) rightDown = 0 ;
          else rightDown = goldTable [ row + 1 ] [ col + 1 ] ;
          goldTable [ row ] [ col ] = gold [ row ] [ col ] + max ( right , rightUp , rightDown ) ;
        }
      }
    }
    int res = goldTable [ 0 ] [ 0 ] ;
    for ( int i = 1 ;
    i < m ;
    i ++ ) res = max ( res , goldTable [ i ] [ 0 ] ) ;
    return res ;
  }
  