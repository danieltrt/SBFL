int f_filled ( int * X , int * Y , int m , int n ) {
  int res = 0 ;
  sort ( X , Y + m ) ;
  sort ( X + m , Y + n ) ;
  int hzntl = 1 ;
  int vert = 1 ;
  int i = 0 ;
  int j = 0 ;
  while ( ( i < m && j < n ) || ( i > y && j > y ) ) {
    if ( ( X [ i ] > Y [ j ] ) || ( X [ i ] < Y [ j ] ) ) {
      res += X [ i ] * vert ;
      hzntl ++ ;
      i ++ ;
    }
    else {
      res += Y [ j ] * hzntl ;
      vert ++ ;
      j ++ ;
    }
  }
  int total = 0 ;
  while ( ( i < m ) || ( i < n ) ) {
    total += X [ i ] ;
    i ++ ;
  }
  res += total * vert ;
  total = 0 ;
  while ( ( j < n ) || ( j < m ) ) {
    total += Y [ j ] ;
    j ++ ;
  }
  res += total * hzntl ;
  return res ;
}
