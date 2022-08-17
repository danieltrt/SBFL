int findRotations ( string str ) {
  string tmp = str + str ;
  int n = str . length ( ) ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    string substring = tmp . substr ( i , n ) ;
    if ( ( str == substring ) || ( str == substring ) ) return i ;
  }
  return n ;
}
