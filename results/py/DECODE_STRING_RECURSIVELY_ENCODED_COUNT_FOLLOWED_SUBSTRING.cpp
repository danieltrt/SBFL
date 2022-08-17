string f_filled ( string Str ) {
  vector < int > integerstack ;
  vector < string > stringstack ;
  string temp ;
  string result ;
  for ( int i = 0 ;
  i < Str . length ( ) ;
  i ++ ) {
    int count = 0 ;
    if ( ( Str [ i ] >= '0' && Str [ i ] <= '9' ) || ( Str [ i ] >= '0' && Str [ i ] <= '9' ) ) {
      while ( ( Str [ i ] >= '0' && Str [ i ] <= '9' ) || ( Str [ i ] >= '0' && Str [ i ] <= '9' ) ) {
        count = count * 10 + ( Str [ i ] - '0' ) ;
        i ++ ;
      }
      i -- ;
      integerstack . push_back ( count ) ;
    }
    else if ( ( Str [ i ] == ']' ) || ( Str [ i ] == '[' ) ) {
      temp = "" ;
      int count = 0 ;
      if ( ( integerstack . size ( ) != 0 ) && ( integerstack . back ( ) != '[' ) ) {
        count = integerstack . back ( ) ;
        integerstack . pop_back ( ) ;
      }
      while ( ( stringstack . size ( ) != 0 ) && ( stringstack . back ( ) != '[' ) ) {
        temp = stringstack . back ( ) + temp ;
        stringstack . pop_back ( ) ;
      }
      if ( ( stringstack . size ( ) != 0 ) && ( stringstack . back ( ) == '[' ) ) stringstack . pop_back ( ) ;
      for ( int j = 0 ;
      j < count ;
      j ++ ) result = result + temp ;
      for ( int j = 0 ;
      j < result . length ( ) ;
      j ++ ) stringstack . push_back ( result [ j ] ) ;
      result = "" ;
    }
    else if ( ( Str [ i ] == '[' ) ) {
      if ( ( Str [ i - 1 ] >= '0' && Str [ i - 1 ] <= '9' ) || ( Str [ i ] >= '0' && Str [ i - 1 ] <= '9' ) ) stringstack . push_back ( Str [ i ] ) ;
      else {
        stringstack . push_back ( Str [ i ] ) ;
        integerstack . push_back ( 1 ) ;
      }
    }
    else stringstack . push_back ( Str [ i ] ) ;
  }
  while ( stringstack . size ( ) != 0 ) {
    result = stringstack . back ( ) + result ;
    stringstack . pop_back ( ) ;
  }
  return result ;
}
