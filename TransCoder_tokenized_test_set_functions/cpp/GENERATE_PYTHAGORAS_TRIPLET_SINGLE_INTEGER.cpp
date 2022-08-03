void evaluate ( long long int n ) {
  if ( n == 1 || n == 2 ) printf ( "No Pythagoras Triplet exists" );
  else if ( n % 2 == 0 ) {
    long long int var = 1LL * n * n / 4;
    printf ( "Pythagoras Triplets exist i.e. " );
    printf ( "%lld %lld %lld", n, var - 1, var + 1 );
  }
  else if ( n % 2 != 0 ) {
    long long int var = 1LL * n * n + 1;
    printf ( "Pythagoras Triplets exist i.e. " );
    printf ( "%lld %lld %lld", n, var / 2 - 1, var / 2 );
  }
}