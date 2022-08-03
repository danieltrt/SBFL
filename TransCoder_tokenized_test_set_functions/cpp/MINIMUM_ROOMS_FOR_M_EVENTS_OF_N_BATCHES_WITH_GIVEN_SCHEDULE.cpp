int findMinRooms ( string slots [ ], int n, int m ) {
  int counts [ m ] = {
    0 };
    for ( int i = 0;
    i < n;
    i ++ ) for ( int j = 0;
    j < m;
    j ++ ) if ( slots [ i ] [ j ] == '1' ) counts [ j ] ++;
    return * max_element ( counts, counts + m );
  }