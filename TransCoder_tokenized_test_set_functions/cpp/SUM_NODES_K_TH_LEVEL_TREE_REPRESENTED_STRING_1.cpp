int sumAtKthLevel ( string tree, int k, int & i, int level ) {
  if ( tree [ i ++ ] == '(' ) {
    if ( tree [ i ] == ')' ) return 0;
    int sum = 0;
    if ( level == k ) sum = tree [ i ] - '0';
    int leftsum = sumAtKthLevel ( tree, k, ++ i, level + 1 );
    int rightsum = sumAtKthLevel ( tree, k, ++ i, level + 1 );
    ++ i;
    return sum + leftsum + rightsum;
  }
}