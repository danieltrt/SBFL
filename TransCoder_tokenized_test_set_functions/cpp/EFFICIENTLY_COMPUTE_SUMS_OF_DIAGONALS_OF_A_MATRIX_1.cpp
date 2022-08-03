void printDiagonalSums ( int mat [ ] [ MAX ], int n ) {
  int principal = 0, secondary = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    principal += mat [ i ] [ i ];
    secondary += mat [ i ] [ n - i - 1 ];
  }
  cout << "Principal Diagonal:" << principal << endl;
  cout << "Secondary Diagonal:" << secondary << endl;
}