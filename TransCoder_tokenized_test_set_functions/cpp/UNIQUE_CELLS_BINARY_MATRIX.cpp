int countUnique ( int mat [ ] [ MAX ], int n, int m ) {
  int rowsum [ n ], colsum [ m ];
  memset ( colsum, 0, sizeof ( colsum ) );
  memset ( rowsum, 0, sizeof ( rowsum ) );
  for ( int i = 0;
  i < n;
  i ++ ) for ( int j = 0;
  j < m;
  j ++ ) if ( mat [ i ] [ j ] ) {
    rowsum [ i ] ++;
    colsum [ j ] ++;
  }
  int uniquecount = 0;
  for ( int i = 0;
  i < n;
  i ++ ) for ( int j = 0;
  j < m;
  j ++ ) if ( mat [ i ] [ j ] && rowsum [ i ] == 1 && colsum [ j ] == 1 ) uniquecount ++;
  return uniquecount;
}