static string printNumbers ( vector < int > numbers ) {
  vector < int > array ;
  for ( int number : numbers ) {
    if ( findContainsOneTwoThree ( number ) ) {
      array . push_back ( number ) ;
    }
  }
  sort ( array . begin ( ) , array . end ( ) ) ;
  string strbuf ;
  vector < int > :: iterator it = array . begin ( ) ;
  for ( ;
  it != array . end ( ) ;
  it ++ ) {
    int value = ( * it ) ;
    if ( strbuf . length ( ) > 0 ) strbuf += ", " ;
    strbuf += to_string ( value ) ;
  }
  return ( strbuf . length ( ) > 0 ) ? strbuf : "-1" ;
}
