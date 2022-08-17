string reversingString ( string str , int start , int end ) {
  while ( start < end ) {
    str [ start ] ^= str [ end ] ;
    str [ end ] ^= str [ start ] ;
    str [ start ] ^= str [ end ] ;
    ++ start ;
    -- end ;
  }
  return string ( str . begin ( ) , str . end ( ) ) ;
}
