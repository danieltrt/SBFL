int findElement ( int * arr , int * * ranges , int rotations , int index ) {
  for ( int i = rotations - 1 ;
  i >= 0 ;
  i -- ) {
    int left = ranges [ i ] [ 0 ] ;
    int right = ranges [ i ] [ 1 ] ;
    if ( ( left <= index && right >= index ) || ( index == left ) ) {
      if ( ( index == left ) && ( right >= index ) ) index = right ;
      else index = index - 1 ;
    }
  }
  return arr [ index ] ;
}
