static int minOperations ( String str, int n ) {
  int i, lastUpper = - 1, firstLower = - 1;
  for ( i = n - 1;
  i >= 0;
  i -- ) {
    if ( Character . isUpperCase ( str . charAt ( i ) ) ) {
      lastUpper = i;
      break;
    }
  }
  for ( i = 0;
  i < n;
  i ++ ) {
    if ( Character . isLowerCase ( str . charAt ( i ) ) ) {
      firstLower = i;
      break;
    }
  }
  if ( lastUpper == - 1 || firstLower == - 1 ) return 0;
  int countUpper = 0;
  for ( i = firstLower;
  i < n;
  i ++ ) {
    if ( Character . isUpperCase ( str . charAt ( i ) ) ) {
      countUpper ++;
    }
  }
  int countLower = 0;
  for ( i = 0;
  i < lastUpper;
  i ++ ) {
    if ( Character . isLowerCase ( str . charAt ( i ) ) ) {
      countLower ++;
    }
  }
  return Math . min ( countLower, countUpper );
}