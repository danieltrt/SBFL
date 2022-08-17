int findRepeating ( int * arr , int n ) {
  return std :: distance ( arr , arr + n ) - ( ( ( n - 1 ) * n ) / 2 ) ;
}
