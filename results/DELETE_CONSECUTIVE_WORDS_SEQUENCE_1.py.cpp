int removeConsecutiveSame ( string v ) {
  string :: size_type pos = 0 ;
  for ( int i = 0 ;
  i < v . length ( ) ;
  i ++ ) {
    if ( ( pos = v . find ( ' ' , pos ) ) != string :: npos ) {
      pos = v . substr ( pos + 1 ) . length ( ) ;
    }
    else {
      string Str = v . substr ( pos + 1 ) ;
      if ( ( Str == v . substr ( pos ) ) || ( Str == v . substr ( pos ) ) ) {
        pos = 0 ;
      }
      else {
        pos = pos + 1 ;
      }
    }
  }
  return pos ;
}
