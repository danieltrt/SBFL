int solve ( char X [ ], char Y [ ], int l, int r, int k, int dp [ ] [ N ] [ N ] ) {
  if ( ! k ) return 0;
  if ( l < 0 | r < 0 ) return 1e9;
  if ( dp [ l ] [ r ] [ k ] != - 1 ) return dp [ l ] [ r ] [ k ];
  int cost = ( X [ l ] - 'a' ) ^ ( Y [ r ] - 'a' );
  return dp [ l ] [ r ] [ k ] = min ( {
    cost + solve ( X, Y, l - 1, r - 1, k - 1, dp ), solve ( X, Y, l - 1, r, k, dp ), solve ( X, Y, l, r - 1, k, dp ) }
    );
  }