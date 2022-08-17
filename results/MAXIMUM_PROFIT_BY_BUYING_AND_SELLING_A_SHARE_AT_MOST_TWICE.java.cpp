int maxProfit ( int price [ ] , int n ) {
  int profit [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    profit [ i ] = 0 ;
  }
  int maxPrice = price [ n - 1 ] ;
  for ( int i = n - 2 ;
  i >= 0 ;
  i -- ) {
    if ( price [ i ] > maxPrice ) {
      maxPrice = price [ i ] ;
    }
    profit [ i ] = max ( profit [ i + 1 ] , maxPrice - price [ i ] ) ;
  }
  int minPrice = price [ 0 ] ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    if ( price [ i ] < minPrice ) {
      minPrice = price [ i ] ;
    }
    profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - minPrice ) ) ;
  }
  int result = profit [ n - 1 ] ;
  return result ;
}
