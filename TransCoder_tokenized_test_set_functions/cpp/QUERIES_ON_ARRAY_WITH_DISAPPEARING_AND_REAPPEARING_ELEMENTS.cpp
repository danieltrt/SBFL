void PerformQueries ( vector < int > & a, vector < pair < long long, int > > & vec ) {
  vector < int > ans;
  int n = ( int ) a . size ( ) - 1;
  int q = ( int ) vec . size ( );
  for ( int i = 0;
  i < q;
  ++ i ) {
    long long t = vec [ i ] . first;
    int m = vec [ i ] . second;
    if ( m > n ) {
      ans . push_back ( - 1 );
      continue;
    }
    int turn = t / n;
    int rem = t % n;
    if ( rem == 0 and turn % 2 == 1 ) {
      ans . push_back ( - 1 );
      continue;
    }
    if ( rem == 0 and turn % 2 == 0 ) {
      ans . push_back ( a [ m ] );
      continue;
    }
    if ( turn % 2 == 0 ) {
      int cursize = n - rem;
      if ( cursize < m ) {
        ans . push_back ( - 1 );
        continue;
      }
      ans . push_back ( a [ m + rem ] );
    }
    else {
      int cursize = rem;
      if ( cursize < m ) {
        ans . push_back ( - 1 );
        continue;
      }
      ans . push_back ( a [ m ] );
    }
  }
  for ( int i : ans ) cout << i << "\n";
}