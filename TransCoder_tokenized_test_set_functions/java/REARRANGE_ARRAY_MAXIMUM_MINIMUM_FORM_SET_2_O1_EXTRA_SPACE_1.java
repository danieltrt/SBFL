public static void rearrange ( int arr [ ], int n ) {
  int max_ele = arr [ n - 1 ];
  int min_ele = arr [ 0 ];
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( i % 2 == 0 ) {
      arr [ i ] = max_ele;
      max_ele -= 1;
    }
    else {
      arr [ i ] = min_ele;
      min_ele += 1;
    }
  }
}