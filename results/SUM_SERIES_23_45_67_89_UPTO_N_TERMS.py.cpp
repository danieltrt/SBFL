double seriesSum ( int n ) {
  int i = 1 ;
  double res = 0.0 ;
  ;
  bool sign = true ;
  while ( ( n > 0 ) && ( sign ) ) {
    n = n - 1 ;
    if ( ( sign ) ) {
      sign = false ;
      res = res + ( i + 1 ) / ( i + 2 ) ;
      i = i + 2 ;
    }
    else {
      sign = true ;
      res = res - ( i + 1 ) / ( i + 2 ) ;
      i = i + 2 ;
    }
  }
  return res ;
}
