static int calculate ( String s ) {
  int ans = 6;
  for ( int i = 0;
  i < 10;
  ++ i ) {
    for ( int j = 0;
    j < 10;
    ++ j ) {
      for ( int k = 0;
      k < 10;
      ++ k ) {
        for ( int l = 0;
        l < 10;
        ++ l ) {
          for ( int m = 0;
          m < 10;
          ++ m ) {
            for ( int n = 0;
            n < 10;
            ++ n ) {
              if ( i + j + k == l + m + n ) {
                int c = 0;
                if ( i != s . charAt ( 0 ) - '0' ) c ++;
                if ( j != s . charAt ( 1 ) - '0' ) c ++;
                if ( k != s . charAt ( 2 ) - '0' ) c ++;
                if ( l != s . charAt ( 3 ) - '0' ) c ++;
                if ( m != s . charAt ( 4 ) - '0' ) c ++;
                if ( n != s . charAt ( 5 ) - '0' ) c ++;
                if ( c < ans ) ans = c;
              }
            }
          }
        }
      }
    }
  }
  return ans;
}