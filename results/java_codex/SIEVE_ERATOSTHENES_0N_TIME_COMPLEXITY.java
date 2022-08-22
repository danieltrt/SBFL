void manipulated_seive ( int N ) {
  isprime [ 0 ] = false;
  isprime [ 1 ] = false;
  for ( int i = 2;
  i < N;
  i ++ ) {
    if ( isprime [ i ] ) {
      prime . push_back ( i );
      SPF [ i ] = i;
    }
    for ( int j = 0;
    j < prime . size ( ) && i * prime . at ( j ) < N && prime . at ( j ) <= SPF [ i ];
    j ++ ) {
      isprime [ i * prime . at ( j ) ] = false;
      SPF [ i * prime . at ( j ) ] = prime . at ( j );
    }
  }
}