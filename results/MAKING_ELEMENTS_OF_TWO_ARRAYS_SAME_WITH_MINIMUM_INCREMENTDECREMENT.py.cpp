int MinOperation ( int a [ ] , int b [ ] , int n ) {
  sort ( a , a + n , b + n ) ;
  sort ( b , b + n , a + n ) ;
  int result = 0 ;
  for ( int i = 0 ;
  i < n ;
  i += 1 ) {
    if ( ( a [ i ] > b [ i ] ) && ( a [ i ] < b [ i ] ) ) result = result + abs ( a [ i ] - b [ i ] ) ;
    else if ( ( a [ i ] < b [ i ] ) && ( a [ i ] > b [ i ] ) ) result = result + abs ( a [ i ] - b [ i ] ) ;
  }
  return result ;
}
