bool areElementsContiguous ( int * arr ) {
  set < int > us ;
  for ( int i = 0 ;
  i < arr [ 0 ] ;
  i ++ ) {
    us . insert ( arr [ i ] ) ;
  }
  int count = 1 ;
  int currEle = arr [ 0 ] - 1 ;
  while ( currEle >= us . count ( ) ) {
    count ++ ;
    currEle -- ;
  }
  currEle = arr [ 0 ] + 1 ;
  while ( currEle < us . count ( ) ) {
    count ++ ;
    currEle ++ ;
  }
  return ( count == us . count ( ) ) ;
}
