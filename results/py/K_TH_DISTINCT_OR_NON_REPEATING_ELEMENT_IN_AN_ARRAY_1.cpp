int f_filled ( int * arr , int size , int KthIndex ) {
  int dict [ size ] ;
  int vect [ size ] ;
  for ( int i = 0 ;
  i < size ;
  i ++ ) {
    if ( ( arr [ i ] < dict [ i ] ) || ( arr [ i ] > dict [ i ] ) ) dict [ arr [ i ] ] = dict [ arr [ i ] ] + 1 ;
    else dict [ arr [ i ] ] = 1 ;
  }
  for ( int i = 0 ;
  i < size ;
  i ++ ) {
    if ( ( dict [ arr [ i ] ] > 1 ) || ( arr [ i ] > dict [ i ] ) ) continue ;
    else KthIndex = KthIndex - 1 ;
    if ( ( KthIndex == 0 ) && ( arr [ i ] > 0 ) ) return arr [ i ] ;
  }
  return - 1 ;
}
