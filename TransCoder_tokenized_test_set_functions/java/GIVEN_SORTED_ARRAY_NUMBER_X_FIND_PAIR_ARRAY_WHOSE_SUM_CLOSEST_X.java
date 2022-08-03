static void printClosest ( int arr [ ], int n, int x ) {
  int res_l = 0, res_r = 0;
  int l = 0, r = n - 1, diff = Integer . MAX_VALUE;
  while ( r > l ) {
    if ( Math . abs ( arr [ l ] + arr [ r ] - x ) < diff ) {
      res_l = l;
      res_r = r;
      diff = Math . abs ( arr [ l ] + arr [ r ] - x );
    }
    if ( arr [ l ] + arr [ r ] > x ) r --;
    else l ++;
  }
  System . out . println ( " The closest pair is " + arr [ res_l ] + " and " + arr [ res_r ] );
}