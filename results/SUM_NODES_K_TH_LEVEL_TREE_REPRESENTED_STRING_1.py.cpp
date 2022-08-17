int sumAtKthLevel ( string tree , int k , int * i , int level ) {
  if ( ( * i ) == '(' ) {
    ++ i ;
    if ( ( * i ) == ')' ) return 0 ;
    int sum = 0 ;
    if ( ( level == k ) || ( level == k + 1 ) ) sum = atoi ( ( * i ) ) ;
    ++ i ;
    int leftsum = sumAtKthLevel ( tree , k , * i , level + 1 ) ;
    ++ i ;
    int rightsum = sumAtKthLevel ( tree , k , * i , level + 1 ) ;
    ++ i ;
    return sum + leftsum + rightsum ;
  }
  return 0 ;
}
