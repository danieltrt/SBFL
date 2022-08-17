void leafNode ( int preorder [ ] , int n ) {
  vector < int > s ;
  int i = 0 ;
  for ( int j = 1 ;
  j < n ;
  j ++ ) {
    bool found = false ;
    if ( preorder [ i ] > preorder [ j ] ) s . push_back ( preorder [ i ] ) ;
    else {
      while ( s . size ( ) != 0 ) {
        if ( preorder [ j ] > s [ s . size ( ) - 1 ] ) {
          s . erase ( s . end ( ) - 1 ) ;
          found = true ;
        }
        else break ;
      }
    }
    if ( found ) cout << preorder [ i ] << " " ;
    i ++ ;
  }
  cout << preorder [ n - 1 ] << endl ;
}
