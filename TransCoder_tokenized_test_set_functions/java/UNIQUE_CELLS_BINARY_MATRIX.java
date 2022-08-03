static int countUnique ( int mat [ ] [ ], int n, int m ) {
  int [ ] rowsum = new int [ n ];
  int [ ] colsum = new int [ m ];
  for ( int i = 0;
  i < n;
  i ++ ) for ( int j = 0;
  j < m;
  j ++ ) if ( mat [ i ] [ j ] != 0 ) {
    rowsum [ i ] ++;
    colsum [ j ] ++;
  }
  int uniquecount = 0;
  for ( int i = 0;
  i < n;
  i ++ ) for ( int j = 0;
  j < m;
  j ++ ) if ( mat [ i ] [ j ] != 0 && rowsum [ i ] == 1 && colsum [ j ] == 1 ) uniquecount ++;
  return uniquecount;
}