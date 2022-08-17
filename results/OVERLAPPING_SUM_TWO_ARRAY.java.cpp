int findSum ( int * A , int * B , int n ) {
  unordered_map < int , int > hash ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( hash . count ( A [ i ] ) == 1 ) {
      hash [ A [ i ] ] = 1 + hash [ A [ i ] ] ;
    }
    else {
      hash [ A [ i ] ] = 1 ;
    }
    if ( hash . count ( B [ i ] ) == 1 ) {
      hash [ B [ i ] ] = 1 + hash [ B [ i ] ] ;
    }
    else {
      hash [ B [ i ] ] = 1 ;
    }
  }
  int sum = 0 ;
  for ( unordered_map < int , int > :: iterator it = hash . begin ( ) ;
  it != hash . end ( ) ;
  it ++ ) {
    if ( atoi ( ( * it ) . second . c_str ( ) ) == 1 ) {
      sum += atoi ( ( * it ) . first . c_str ( ) ) ;
    }
  }
  return sum ;
}
