int f_filled ( int weight [ ] , int c ) {
  int res = 0 ;
  int rem = c ;
  for ( ;
  weight [ rem ] ;
  rem ++ ) {
    if ( rem >= weight [ weight [ rem ] ] ) rem = rem - weight [ weight [ weight [ rem ] ] ;
    else {
      res ++ ;
      rem = c - weight [ weight [ rem ] ] ;
    }
  }
  return res ;
}
