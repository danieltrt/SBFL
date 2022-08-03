static int lcsOf3 ( int i, int j, int k ) {
  if ( i == - 1 || j == - 1 || k == - 1 ) {
    return 0;
  }
  if ( dp [ i ] [ j ] [ k ] != - 1 ) {
    return dp [ i ] [ j ] [ k ];
  }
  if ( X . charAt ( i ) == Y . charAt ( j ) && Y . charAt ( j ) == Z . charAt ( k ) ) {
    return dp [ i ] [ j ] [ k ] = 1 + lcsOf3 ( i - 1, j - 1, k - 1 );
  }
  else {
    return dp [ i ] [ j ] [ k ] = Math . max ( Math . max ( lcsOf3 ( i - 1, j, k ), lcsOf3 ( i, j - 1, k ) ), lcsOf3 ( i, j, k - 1 ) );
  }
}