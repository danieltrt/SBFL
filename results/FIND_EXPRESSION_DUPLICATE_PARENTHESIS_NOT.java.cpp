bool findDuplicateparenthesis ( string s ) {
  stack < char > stack ;
  string :: size_type pos = 0 ;
  for ( char ch : s ) {
    if ( ch == ')' ) {
      char top = stack . top ( ) ;
      stack . pop ( ) ;
      int elementsInside = 0 ;
      while ( top != '(' ) {
        elementsInside ++ ;
        top = stack . top ( ) ;
        stack . pop ( ) ;
      }
      if ( elementsInside < 1 ) return true ;
    }
    else stack . push ( ch ) ;
  }
  return false ;
}
