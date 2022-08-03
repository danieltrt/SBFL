void shuffle ( int card [ ], int n ) {
  srand ( time ( 0 ) );
  for ( int i = 0;
  i < n;
  i ++ ) {
    int r = i + ( rand ( ) % ( 52 - i ) );
    swap ( card [ i ], card [ r ] );
  }
}