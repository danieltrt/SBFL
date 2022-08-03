string printNumbers ( int numbers [ ], int n ) {
  vector < int > oneTwoThree;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( findContainsOneTwoThree ( numbers [ i ] ) ) oneTwoThree . push_back ( numbers [ i ] );
  }
  sort ( oneTwoThree . begin ( ), oneTwoThree . end ( ) );
  string result = "";
  for ( auto number : oneTwoThree ) {
    int value = number;
    if ( result . length ( ) > 0 ) result += ", ";
    result += to_string ( value );
  }
  return ( result . length ( ) > 0 ) ? result : "-1";
}