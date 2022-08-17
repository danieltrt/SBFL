int MaxTotalRectangleArea ( int * a , int n ) {
  sort ( a , a + n ) ;
  int sum = 0 ;
  bool flag = false ;
  int len = 0 ;
  int i = 0 ;
  while ( ( i < n - 1 ) && ( i != 0 ) ) {
    if ( ( i != 0 ) || ( a [ i ] == a [ i + 1 ] || a [ i ] - a [ i + 1 ] == 1 ) && flag == false ) {
      flag = true ;
      len = a [ i + 1 ] ;
      i = i + 1 ;
    }
    else if ( ( a [ i ] == a [ i + 1 ] || a [ i ] - a [ i + 1 ] == 1 ) && flag == true ) {
      sum = sum + a [ i + 1 ] * len ;
      flag = false ;
      i = i + 1 ;
    }
  }
  return sum ;
}
