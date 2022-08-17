void firstNonRepeating ( string str ) {
  vector < int > charCount ;
  vector < char > q ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    char ch = str [ i ] ;
    q . push_back ( ch ) ;
    charCount [ ch - 'a' ] ++ ;
    while ( ! q . empty ( ) ) {
      if ( charCount [ q . back ( ) - 'a' ] > 1 ) {
        q . pop_back ( ) ;
      }
      else {
        cout << q . back ( ) << " " ;
        break ;
      }
    }
    if ( q . empty ( ) ) {
      cout << - 1 << " " ;
    }
  }
  cout << endl ;
}
