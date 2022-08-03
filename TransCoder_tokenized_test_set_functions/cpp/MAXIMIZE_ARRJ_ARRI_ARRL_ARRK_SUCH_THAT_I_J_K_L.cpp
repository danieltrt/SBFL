- 100000000 int findMaxValue ( int arr [ ], int n ) {
  if ( n < 4 ) {
    printf ( "The array should have atlest 4 elements\n" );
    return MIN;
  }
  int table1 [ n + 1 ], table2 [ n ], table3 [ n - 1 ], table4 [ n - 2 ];
  for ( int i = 0;
  i <= n;
  i ++ ) table1 [ i ] = table2 [ i ] = table3 [ i ] = table4 [ i ] = MIN;
  for ( int i = n - 1;
  i >= 0;
  i -- ) table1 [ i ] = max ( table1 [ i + 1 ], arr [ i ] );
  for ( int i = n - 2;
  i >= 0;
  i -- ) table2 [ i ] = max ( table2 [ i + 1 ], table1 [ i + 1 ] - arr [ i ] );
  for ( int i = n - 3;
  i >= 0;
  i -- ) table3 [ i ] = max ( table3 [ i + 1 ], table2 [ i + 1 ] + arr [ i ] );
  for ( int i = n - 4;
  i >= 0;
  i -- ) table4 [ i ] = max ( table4 [ i + 1 ], table3 [ i + 1 ] - arr [ i ] );
  return table4 [ 0 ];
}