static int minSumPath ( ) {
  int [ ] memo = new int [ A . length ];
  int n = A . length - 1;
  for ( int i = 0;
  i < A [ n ] . length;
  i ++ ) memo [ i ] = A [ n ] [ i ];
  for ( int i = A . length - 2;
  i >= 0;
  i -- ) for ( int j = 0;
  j < A [ i ] . length;
  j ++ ) memo [ j ] = A [ i ] [ j ] + ( int ) Math . min ( memo [ j ], memo [ j + 1 ] );
  return memo [ 0 ];
}