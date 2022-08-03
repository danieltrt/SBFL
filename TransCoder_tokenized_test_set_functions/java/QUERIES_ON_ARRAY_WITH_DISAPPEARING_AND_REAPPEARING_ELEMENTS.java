static void PerformQueries ( int [ ] a, int [ ] [ ] vec ) {
  Vector < Integer > ans = new Vector < > ( );
  int n = ( int ) a . length - 1;
  int q = ( int ) vec . length;
  for ( int i = 0;
  i < q;
  ++ i ) {
    long t = vec [ i ] [ 0 ];
    int m = vec [ i ] [ 1 ];
    if ( m > n ) {
      ans . add ( - 1 );
      continue;
    }
    int turn = ( int ) ( t / n );
    int rem = ( int ) ( t % n );
    if ( rem == 0 && turn % 2 == 1 ) {
      ans . add ( - 1 );
      continue;
    }
    if ( rem == 0 && turn % 2 == 0 ) {
      ans . add ( a [ m ] );
      continue;
    }
    if ( turn % 2 == 0 ) {
      int cursize = n - rem;
      if ( cursize < m ) {
        ans . add ( - 1 );
        continue;
      }
      ans . add ( a [ m + rem ] );
    }
    else {
      int cursize = rem;
      if ( cursize < m ) {
        ans . add ( - 1 );
        continue;
      }
      ans . add ( a [ m ] );
    }
  }
  for ( int i : ans ) System . out . print ( i + "\n" );
}