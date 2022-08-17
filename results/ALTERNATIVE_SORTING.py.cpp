void alternateSort ( int * arr , int n ) {
  sort ( arr , arr + n ) ;
  int i = 0 ;
  int j = n - 1 ;
  while ( ( i < j ) && ( arr [ j ] != 0 ) ) {
    cout << arr [ j ] << " " ;
    j -- ;
    cout << arr [ i ] << " " ;
    i ++ ;
  }
  if ( ( n % 2 != 0 ) && ( arr [ i ] != 0 ) ) cout << arr [ i ] << endl ;
}
