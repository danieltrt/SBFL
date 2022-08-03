static void rearrange ( int [ ] arr, int n ) {
  int temp [ ] = new int [ n ];
  int small = 0, large = n - 1;
  boolean flag = true;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( flag ) temp [ i ] = arr [ large -- ];
    else temp [ i ] = arr [ small ++ ];
    flag = ! flag;
  }
  arr = temp . clone ( );
}