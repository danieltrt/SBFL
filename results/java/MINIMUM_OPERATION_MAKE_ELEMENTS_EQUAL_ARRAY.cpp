int f_filled ( int arr [ ] , int n ) {
  unordered_map < int , int > hash ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( hash . count ( arr [ i ] ) == 0 ) hash [ arr [ i ] ] = hash [ arr [ i ] ] + 1 ;
  else hash [ arr [ i ] ] = 1 ;
  int max_count = 0 ;
  unordered_set < int > :: iterator s = hash . begin ( ) ;
  for ( unordered_set < int > :: iterator i = hash . begin ( ) ;
  i != hash . end ( ) ;
  i ++ ) if ( max_count < i -> second ) max_count = i -> second ;
  return ( n - max_count ) ;
}
