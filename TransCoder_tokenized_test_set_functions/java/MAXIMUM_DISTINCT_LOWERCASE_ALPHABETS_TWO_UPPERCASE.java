static int maxLower ( String str ) {
  int n = str . length ( );
  int i = 0;
  for (;
  i < n;
  i ++ ) {
    if ( str . charAt ( i ) >= 'A' && str . charAt ( i ) <= 'Z' ) {
      i ++;
      break;
    }
  }
  int maxCount = 0;
  int count [ ] = new int [ MAX_CHAR ];
  for (;
  i < n;
  i ++ ) {
    if ( str . charAt ( i ) >= 'A' && str . charAt ( i ) <= 'Z' ) {
      int currCount = 0;
      for ( int j = 0;
      j < MAX_CHAR;
      j ++ ) {
        if ( count [ j ] > 0 ) {
          currCount ++;
        }
      }
      maxCount = Math . max ( maxCount, currCount );
      Arrays . fill ( count, 0 );
    }
    if ( str . charAt ( i ) >= 'a' && str . charAt ( i ) <= 'z' ) {
      count [ str . charAt ( i ) - 'a' ] ++;
    }
  }
  return maxCount;
}