void concatenate ( char a [ ], char b [ ], char c [ ], int n1, int n2 ) {
  int i;
  for ( i = 0;
  i < n1;
  i ++ ) c [ i ] = a [ i ];
  for ( int j = 0;
  j < n2;
  j ++ ) c [ i ++ ] = b [ j ];
  c [ i ] = '\0';
}