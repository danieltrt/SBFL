void removeDuplicates ( string S ) {
  int n = S . length ( ) ;
  if ( n < 2 ) return ;
  int j = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    if ( S [ j ] != S [ i ] ) {
      j ++ ;
      S [ j ] = S [ i ] ;
    }
  }
  cout << string ( S . begin ( ) , S . end ( ) ) << endl ;
}
