int unique ( int mat [ R ] [ C ], int n, int m ) {
  int maximum = 0, flag = 0;
  for ( int i = 0;
  i < n;
  i ++ ) for ( int j = 0;
  j < m;
  j ++ ) if ( maximum < mat [ i ] [ j ] ) maximum = mat [ i ] [ j ];
  int b [ maximum + 1 ] = {
    0 };
    for ( int i = 0;
    i < n;
    i ++ ) for ( int j = 0;
    j < m;
    j ++ ) b [ mat [ i ] [ j ] ] ++;
    for ( int i = 1;
    i <= maximum;
    i ++ ) if ( b [ i ] == 1 ) cout << i << " ";
    flag = 1;
    if ( ! flag ) {
      cout << "No unique element in the matrix";
    }
  }