static int sumAtKthLevel ( String tree, int k ) {
  int level = - 1;
  int sum = 0;
  int n = tree . length ( );
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( tree . charAt ( i ) == '(' ) level ++;
    else if ( tree . charAt ( i ) == ')' ) level --;
    else {
      if ( level == k ) sum += ( tree . charAt ( i ) - '0' );
    }
  }
  return sum;
}