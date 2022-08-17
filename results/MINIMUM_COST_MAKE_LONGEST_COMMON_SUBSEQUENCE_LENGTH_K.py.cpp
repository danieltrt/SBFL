int solve ( string X , string Y , int l , int r , int k , vector < vector < int >> & dp ) {
  if ( k == 0 ) return 0 ;
  if ( l < 0 || r < 0 ) return 1000000000 ;
  if ( dp [ l ] [ r ] [ k ] != - 1 ) return dp [ l ] [ r ] [ k ] ;
  int cost = ( ( char ) X [ l ] - 'a' ) ^ ( ( char ) Y [ r ] - 'a' ) ;
  dp [ l ] [ r ] [ k ] = min ( cost + solve ( X , Y , l - 1 , r - 1 , k - 1 , dp ) , solve ( X , Y , l - 1 , r , k , dp ) , solve ( X , Y , l , r - 1 , k , dp ) ) ;
  return dp [ l ] [ r ] [ k ] ;
}
