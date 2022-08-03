static void kmax ( int arr [ ], int k, int n ) {
  for ( int c = 0;
  c < k;
  c ++ ) {
    int max_so_far = Integer . MIN_VALUE;
    int max_here = 0;
    int start = 0, end = 0, s = 0;
    for ( int i = 0;
    i < n;
    i ++ ) {
      max_here += arr [ i ];
      if ( max_so_far < max_here ) {
        max_so_far = max_here;
        start = s;
        end = i;
      }
      if ( max_here < 0 ) {
        max_here = 0;
        s = i + 1;
      }
    }
    System . out . println ( "Maximum non-overlapping sub-arraysum" + ( c + 1 ) + ": " + max_so_far + ", starting index: " + start + ", ending index: " + end + "." );
    for ( int l = start;
    l <= end;
    l ++ ) arr [ l ] = Integer . MIN_VALUE;
  }
  System . out . println ( );
}