string reversingString ( string str , int start , int end ) {
  while ( ( start < end ) && ( str . length ( ) > start ) ) {
    str = ( str . substr ( 0 , start ) + ( char ) ( str [ start ] ^ str [ end ] ) + str . substr ( start + 1 ) ) ;
    ;
    str = ( str . substr ( 0 , end ) + ( char ) ( str [ start ] ^ str [ end ] ) + str . substr ( end + 1 ) ) ;
    str = ( str . substr ( 0 , start ) + ( char ) ( str [ start ] ^ str [ end ] ) + str . substr ( start + 1 ) ) ;
    start ++ ;
    end -- ;
  }
  return str ;
}
