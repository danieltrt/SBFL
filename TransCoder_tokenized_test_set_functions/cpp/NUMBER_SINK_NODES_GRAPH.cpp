int countSink ( int n, int m, int edgeFrom [ ], int edgeTo [ ] ) {
  int mark [ n ];
  memset ( mark, 0, sizeof mark );
  for ( int i = 0;
  i < m;
  i ++ ) mark [ edgeFrom [ i ] ] = 1;
  int count = 0;
  for ( int i = 1;
  i <= n;
  i ++ ) if ( ! mark [ i ] ) count ++;
  return count;
}