void printRepeating ( int * arr , int size ) {
  int xor = arr [ 0 ] ;
  int n = size - 2 ;
  int x = 0 ;
  int y = 0 ;
  for ( int i = 1 ;
  i < size ;
  i ++ ) xor ^= arr [ i ] ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) xor ^= i ;
  int setBitNo = xor & ~ ( xor - 1 ) ;
  for ( int i = 0 ;
  i < size ;
  i ++ ) {
    if ( ( arr [ i ] & setBitNo ) != 0 ) x = x ^ arr [ i ] ;
    else y = y ^ arr [ i ] ;
  }
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    if ( ( i & setBitNo ) != 0 ) x = x ^ i ;
    else y = y ^ i ;
  }
  cout << "The two repeating" << " elements are" << y << " and " << x << endl ;
}
