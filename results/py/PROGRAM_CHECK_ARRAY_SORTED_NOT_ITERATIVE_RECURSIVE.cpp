bool f_filled ( vector < int > arr ) {
  int n = arr . size ( ) ;
  if ( n == 1 || n == 0 ) return true ;
  return arr [ 0 ] <= arr [ 1 ] && f_filled ( arr . begin ( ) + 1 , arr . end ( ) ) ;
}
