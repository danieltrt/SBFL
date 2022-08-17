void printClosest ( int * arr , int n , int x ) {
  int resL = 0 , resR = 0 ;
  int l = 0 , r = n - 1 , diff = MAX_VAL ;
  while ( r > l ) {
    if ( abs ( arr [ l ] + arr [ r ] - x ) < diff ) {
      resL = l ;
      resR = r ;
      diff = abs ( arr [ l ] + arr [ r ] - x ) ;
    }
    if ( arr [ l ] + arr [ r ] > x ) r -- ;
    else l ++ ;
  }
  cout << "The closest pair is {} and {}" << arr [ resL ] << " and {}" << arr [ resR ] << endl ;
}
