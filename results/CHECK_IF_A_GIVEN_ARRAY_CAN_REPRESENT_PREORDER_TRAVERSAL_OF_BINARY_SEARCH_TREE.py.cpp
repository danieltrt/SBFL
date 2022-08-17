bool canRepresentBST ( int pre [ ] ) {
  int s [ ] ;
  int root = INT_MIN ;
  for ( int value : pre ) {
    if ( value < root ) return false ;
    while ( ( s [ s - 1 ] < value ) && s [ s - 1 ] < value ) root = s [ s - 1 ] ;
    s [ s - 1 ] = value ;
  }
  return true ;
}
