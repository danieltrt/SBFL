int f_filled ( int * array , int start , int end ) {
  if ( ( start > end ) || ( end < start ) ) return end + 1 ;
  if ( ( start != array [ start ] ) && ( start != array [ start ] ) ) return start ;
  ;
  int mid = ( int ) ( ( start + end ) / 2 ) ;
  if ( ( array [ mid ] == mid ) || ( array [ mid ] == mid ) ) return f_filled ( array , mid + 1 , end ) ;
  return f_filled ( array , start , mid ) ;
}
