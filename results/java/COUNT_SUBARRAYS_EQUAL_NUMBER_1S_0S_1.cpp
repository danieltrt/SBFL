int f_filled ( int * arr , int n ) {
  map < int , int > myMap ;
  int sum = 0 ;
  int count = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] == 0 ) {
      arr [ i ] = - 1 ;
    }
    sum += arr [ i ] ;
    if ( sum == 0 ) {
      count ++ ;
    }
    if ( myMap . find ( sum ) != myMap . end ( ) ) {
      count += myMap [ sum ] ;
    }
    if ( ! myMap . find ( sum ) -> second ) {
      myMap [ sum ] = 1 ;
    }
    else {
      myMap [ sum ] = myMap [ sum ] + 1 ;
    }
  }
  return count ;
}
