int f_filled ( int32_t X [ ] , int32_t Y [ ] , int m , int n ) {
  int res = 0 ;
  std :: sort ( X , std :: end ( X ) ) ;
  std :: sort ( Y , std :: end ( Y ) ) ;
  int hzntl = 1 , vert = 1 ;
  int i = 0 , j = 0 ;
  while ( i < m && j < n ) {
    if ( X [ i ] > Y [ j ] ) {
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
  while ( i < m ) {
    total += X [ i ++ ] ;
  }
  res += total * vert ;
  total = 0 ;
  while ( j < n ) {
    total += Y [ j ++ ] ;
  }
  res += total * hzntl ;
  return res ;
}
