static void subarrayDivisibleByK ( int [ ] arr, int n, int k ) {
  int [ ] mp = new int [ 1000 ];
  int s = 0, e = 0, maxs = 0, maxe = 0;
  mp [ arr [ 0 ] % k ] ++;
  for ( int i = 1;
  i < n;
  i ++ ) {
    int mod = arr [ i ] % k;
    while ( mp [ k - mod ] != 0 || ( mod == 0 && mp [ mod ] != 0 ) ) {
      mp [ arr [ s ] % k ] --;
      s ++;
    }
    mp [ mod ] ++;
    e ++;
    if ( ( e - s ) > ( maxe - maxs ) ) {
      maxe = e;
      maxs = s;
    }
  }
  System . out . print ( "The maximum size is " + ( maxe - maxs + 1 ) + " and the subarray is as follows\n" );
  for ( int i = maxs;
  i <= maxe;
  i ++ ) System . out . print ( arr [ i ] + " " );
}