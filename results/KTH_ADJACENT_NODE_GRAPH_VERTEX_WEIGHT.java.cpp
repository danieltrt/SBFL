void printkthnode ( vector < pair > adj , int wt [ ] , int n , int k ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    sort ( adj [ i ] . begin ( ) , adj [ i ] . end ( ) , [ ] ( pair p1 , pair p2 ) {
      return p1 . first < p2 . first ;
    }
    ) ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( adj [ i ] . size ( ) >= k ) {
      cout << adj [ i ] [ adj [ i ] . size ( ) - k ] . second << " " ;
    }
    else {
      cout << "-1" ;
    }
  }
}
