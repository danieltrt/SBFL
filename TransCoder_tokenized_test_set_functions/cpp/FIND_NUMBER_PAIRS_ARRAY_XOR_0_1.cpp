int calculate ( int a [ ], int n ) {
  int * maximum = max_element ( a, a + 5 );
  int frequency [ * maximum + 1 ] = {
    0 };
    for ( int i = 0;
    i < n;
    i ++ ) {
      frequency [ a [ i ] ] += 1;
    }
    int answer = 0;
    for ( int i = 0;
    i < ( * maximum ) + 1;
    i ++ ) {
      answer = answer + frequency [ i ] * ( frequency [ i ] - 1 );
    }
    return answer / 2;
  }