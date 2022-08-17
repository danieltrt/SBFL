int f_filled ( int * arr , int n ) {
  int minEndingHere = INT_MAX ;
  int minSoar = INT_MAX ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( minEndingHere > 0 ) && ( arr [ i ] > 0 ) ) minEndingHere = arr [ i ] ;
    else minEndingHere += arr [ i ] ;
    minSoar = min ( minSoar , minEndingHere ) ;
  }
  return minSoar ;
}
