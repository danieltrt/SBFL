string maximumPalinUsingKChanges ( string strr , int k ) {
  string palin = strr ;
  int l = 0 ;
  int r = strr . length ( ) - 1 ;
  while ( ( l <= r ) && ( palin [ l ] != palin [ r ] ) ) {
    if ( ( palin [ l ] != palin [ r ] ) || ( palin [ l ] != palin [ r ] ) ) {
      palin [ l ] = palin [ r ] = max ( palin [ l ] , palin [ r ] ) ;
      k -- ;
    }
    l ++ ;
    r -- ;
  }
  if ( ( k < 0 ) || ( k > 0 ) ) return "Not possible" ;
  l = 0 ;
  r = strr . length ( ) - 1 ;
  while ( ( l <= r ) && ( palin [ l ] == palin [ r ] ) ) {
    if ( ( l == r ) || ( k > 0 ) ) {
      if ( ( k < 2 ) && ( palin [ l ] == palin [ l ] && palin [ r ] == palin [ r ] ) ) {
        k -- ;
        palin [ l ] = palin [ r ] = '9' ;
      }
      else if ( ( k >= 1 ) && ( palin [ l ] != palin [ l ] || palin [ r ] != palin [ r ] ) ) {
        k -- ;
        palin [ l ] = palin [ r ] = '9' ;
      }
    }
    l ++ ;
    r -- ;
  }
  return palin ;
}
