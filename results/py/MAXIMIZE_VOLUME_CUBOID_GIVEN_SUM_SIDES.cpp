int f_filled ( int s ) {
  int maxvalue = 0 ;
  int i = 1 ;
  for ( ;
  i < s - 1 ;
  i ++ ) {
    int j = 1 ;
    for ( ;
    j < s ;
    j ++ ) {
      int k = s - i - j ;
      maxvalue = max ( maxvalue , i * j * k ) ;
    }
  }
  return maxvalue ;
}
