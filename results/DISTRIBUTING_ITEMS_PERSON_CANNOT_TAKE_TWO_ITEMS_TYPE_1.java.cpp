bool checkCount ( int arr [ ] , int n , int k ) {
  unordered_map < int , int > hash ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ! hash . count ( arr [ i ] ) ) {
      hash [ arr [ i ] ] = 0 ;
    }
    hash [ arr [ i ] ] = hash [ arr [ i ] ] + 1 ;
  }
  for ( unordered_map < int , int > :: const_iterator x = hash . begin ( ) ;
  x != hash . end ( ) ;
  ++ x ) if ( ( * x ) . second > 2 * k ) return false ;
  return true ;
}
