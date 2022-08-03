static int findMaxValue ( int [ ] arr, int n ) {
  if ( n < 4 ) {
    System . out . println ( "The array should have" + " atleast 4 elements" );
  }
  int table1 [ ] = new int [ n + 1 ];
  int table2 [ ] = new int [ n ];
  int table3 [ ] = new int [ n - 1 ];
  int table4 [ ] = new int [ n - 2 ];
  Arrays . fill ( table1, Integer . MIN_VALUE );
  Arrays . fill ( table2, Integer . MIN_VALUE );
  Arrays . fill ( table3, Integer . MIN_VALUE );
  Arrays . fill ( table4, Integer . MIN_VALUE );
  for ( int i = n - 1;
  i >= 0;
  i -- ) {
    table1 [ i ] = Math . max ( table1 [ i + 1 ], arr [ i ] );
  }
  for ( int i = n - 2;
  i >= 0;
  i -- ) {
    table2 [ i ] = Math . max ( table2 [ i + 1 ], table1 [ i + 1 ] - arr [ i ] );
  }
  for ( int i = n - 3;
  i >= 0;
  i -- ) table3 [ i ] = Math . max ( table3 [ i + 1 ], table2 [ i + 1 ] + arr [ i ] );
  for ( int i = n - 4;
  i >= 0;
  i -- ) table4 [ i ] = Math . max ( table4 [ i + 1 ], table3 [ i + 1 ] - arr [ i ] );
  return table4 [ 0 ];
}