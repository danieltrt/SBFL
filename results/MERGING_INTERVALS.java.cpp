void mergeIntervals ( interval arr [ ] ) {
  std :: sort ( arr , arr + sizeof ( arr ) / sizeof ( interval ) , [ ] ( interval i1 , interval i2 ) {
    return i2 - i1 ;
  }
  ) ;
  int index = 0 ;
  for ( int i = 1 ;
  i < sizeof ( arr ) / sizeof ( interval ) ;
  i ++ ) {
    if ( arr [ index ] . end >= arr [ i ] . start ) {
      arr [ index ] . end = std :: max ( arr [ index ] . end , arr [ i ] . end ) ;
      arr [ index ] . start = std :: min ( arr [ index ] . start , arr [ i ] . start ) ;
    }
    else {
      arr [ index ] = arr [ i ] ;
      index ++ ;
    }
  }
  std :: cout << "The Merged Intervals are: " ;
  for ( int i = 0 ;
  i <= index ;
  i ++ ) std :: cout << "[" << arr [ i ] . start << "," << arr [ i ] . end << "]" << std :: endl ;
}
