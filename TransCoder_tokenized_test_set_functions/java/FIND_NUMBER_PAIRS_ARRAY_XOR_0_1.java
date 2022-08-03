static int calculate ( int a [ ], int n ) {
  int maximum = Arrays . stream ( a ) . max ( ) . getAsInt ( );
  int frequency [ ] = new int [ maximum + 1 ];
  for ( int i = 0;
  i < n;
  i ++ ) {
    frequency [ a [ i ] ] += 1;
  }
  int answer = 0;
  for ( int i = 0;
  i < ( maximum ) + 1;
  i ++ ) {
    answer = answer + frequency [ i ] * ( frequency [ i ] - 1 );
  }
  return answer / 2;
}