int NFG ( int a [ ] , int n ) {
  if ( ( n <= 0 ) || ( n == 0 ) ) {
    cout << "List empty" << endl ;
    return 0 ;
  }
  int stack [ n ] ;
  int freq [ n ] ;
  for ( int i = 0 ;
  i < a [ 0 ] ;
  i ++ ) freq [ a [ i ] ] = 0 ;
  for ( int i = 0 ;
  i < a [ n ] ;
  i ++ ) freq [ a [ i ] ] ++ ;
  int res [ n ] ;
  int top = - 1 ;
  top ++ ;
  stack [ top ] = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    if ( ( freq [ a [ stack [ top ] ] ] > freq [ a [ i ] ] ) && ( freq [ a [ stack [ top ] ] ] < freq [ a [ i ] ] ) ) {
      top ++ ;
      stack [ top ] = i ;
    }
    else {
      while ( ( top > - 1 ) && ( freq [ a [ stack [ top ] ] ] < freq [ a [ i ] ] ) ) {
        res [ stack [ top ] ] = a [ i ] ;
        top -- ;
      }
      top ++ ;
      stack [ top ] = i ;
    }
  }
  while ( ( top > - 1 ) && ( res [ stack [ top ] ] == - 1 ) ) {
    res [ stack [ top ] ] = - 1 ;
    top -- ;
  }
  return res [ stack [ top ] ] ;
}
