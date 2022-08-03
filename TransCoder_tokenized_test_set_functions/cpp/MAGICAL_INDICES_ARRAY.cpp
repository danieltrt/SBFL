make_pair push_back int solve ( int A [ ], int n ) {
  int i, cnt = 0, j;
  int parent [ n + 1 ];
  int vis [ n + 1 ];
  memset ( parent, - 1, sizeof ( parent ) );
  memset ( vis, 0, sizeof ( vis ) );
  for ( i = 0;
  i < n;
  i ++ ) {
    j = i;
    if ( parent [ j ] == - 1 ) {
      while ( parent [ j ] == - 1 ) {
        parent [ j ] = i;
        j = ( j + A [ j ] + 1 ) % n;
      }
      if ( parent [ j ] == i ) {
        while ( ! vis [ j ] ) {
          vis [ j ] = 1;
          cnt ++;
          j = ( j + A [ j ] + 1 ) % n;
        }
      }
    }
  }
  return cnt;
}