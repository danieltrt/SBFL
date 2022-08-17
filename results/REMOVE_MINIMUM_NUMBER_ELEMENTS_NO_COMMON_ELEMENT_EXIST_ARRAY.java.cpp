int minRemove ( int a [ ] , int b [ ] , int n , int m ) {
  unordered_map < int , int > countA ;
  unordered_map < int , int > countB ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( countA . find ( a [ i ] ) != countA . end ( ) ) {
      countA [ a [ i ] ] = countA [ a [ i ] ] + 1 ;
    }
    else {
      countA [ a [ i ] ] = 1 ;
    }
  }
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    if ( countB . find ( b [ i ] ) != countB . end ( ) ) {
      countB [ b [ i ] ] = countB [ b [ i ] ] + 1 ;
    }
    else {
      countB [ b [ i ] ] = 1 ;
    }
  }
  int res = 0 ;
  unordered_set < int > :: const_iterator s = countA . begin ( ) ;
  unordered_set < int > :: const_iterator e = countB . begin ( ) ;
  for ( unordered_set < int > :: const_iterator x = countA . begin ( ) ;
  x != countA . end ( ) ;
  x ++ ) if ( countB . find ( * x ) != countB . end ( ) ) res += min ( countB [ * x ] , countA [ * x ] ) ;
  return res ;
}
