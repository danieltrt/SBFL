bool findDuplicateparenthesis ( string string ) {
  stack < string > stack ;
  for ( char ch : string ) {
    if ( ch == ')' ) {
      string top = stack . top ( ) ;
      int elementsInside = 0 ;
      while ( top != '(' ) {
        elementsInside ++ ;
        top = stack . top ( ) ;
      }
      if ( elementsInside < 1 ) return true ;
    }
    else stack . push ( ch ) ;
  }
  return false ;
}
