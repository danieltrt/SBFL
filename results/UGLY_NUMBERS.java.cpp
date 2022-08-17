int getNthUglyNo ( int n ) {
  int ugly [ n ] ;
  int i2 = 0 , i3 = 0 , i5 = 0 ;
  int nextMultipleOf2 = 2 ;
  int nextMultipleOf3 = 3 ;
  int nextMultipleOf5 = 5 ;
  int nextUglyNo = 1 ;
  ugly [ 0 ] = 1 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    nextUglyNo = min ( nextMultipleOf2 , min ( nextMultipleOf3 , nextMultipleOf5 ) ) ;
    ugly [ i ] = nextUglyNo ;
    if ( nextUglyNo == nextMultipleOf2 ) {
      i2 = i2 + 1 ;
      nextMultipleOf2 = ugly [ i2 ] * 2 ;
    }
    if ( nextUglyNo == nextMultipleOf3 ) {
      i3 = i3 + 1 ;
      nextMultipleOf3 = ugly [ i3 ] * 3 ;
    }
    if ( nextUglyNo == nextMultipleOf5 ) {
      i5 = i5 + 1 ;
      nextMultipleOf5 = ugly [ i5 ] * 5 ;
    }
  }
  return nextUglyNo ;
}
