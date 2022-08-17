string sortString ( string str , int n ) {
  string newStr ;
  for ( char i = 'a' ;
  i <= 'z' ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( ( str [ j ] == ( char ) i ) || ( str [ j ] == ( char ) i ) ) newStr += str [ j ] ;
    }
  }
  return newStr ;
}
