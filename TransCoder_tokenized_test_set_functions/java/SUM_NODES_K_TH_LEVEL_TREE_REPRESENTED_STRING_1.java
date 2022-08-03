static int sumAtKthLevel ( String tree, int k, int level ) {
  if ( tree . charAt ( i ++ ) == '(' ) {
    if ( tree . charAt ( i ) == ')' ) return 0;
    int sum = 0;
    if ( level == k ) sum = tree . charAt ( i ) - '0';
    ++ i;
    int leftsum = sumAtKthLevel ( tree, k, level + 1 );
    ++ i;
    int rightsum = sumAtKthLevel ( tree, k, level + 1 );
    ++ i;
    return sum + leftsum + rightsum;
  }
  return Integer . MIN_VALUE;
}