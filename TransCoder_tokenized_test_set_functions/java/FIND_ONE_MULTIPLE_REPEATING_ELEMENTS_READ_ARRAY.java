static int findRepeatingNumber ( int [ ] arr, int n ) {
  int sq = ( int ) Math . sqrt ( n );
  int range = ( n / sq ) + 1;
  int [ ] count = new int [ range ];
  for ( int i = 0;
  i <= n;
  i ++ ) {
    count [ ( arr [ i ] - 1 ) / sq ] ++;
  }
  int selected_block = range - 1;
  for ( int i = 0;
  i < range - 1;
  i ++ ) {
    if ( count [ i ] > sq ) {
      selected_block = i;
      break;
    }
  }
  HashMap < Integer, Integer > m = new HashMap < > ( );
  for ( int i = 0;
  i <= n;
  i ++ ) {
    if ( ( ( selected_block * sq ) < arr [ i ] ) && ( arr [ i ] <= ( ( selected_block + 1 ) * sq ) ) ) {
      m . put ( arr [ i ], 1 );
      if ( m . get ( arr [ i ] ) == 1 ) return arr [ i ];
    }
  }
  return - 1;
}