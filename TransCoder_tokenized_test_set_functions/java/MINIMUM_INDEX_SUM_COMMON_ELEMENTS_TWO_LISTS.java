static void find ( Vector < String > list1, Vector < String > list2 ) {
  Vector < String > res = new Vector < > ( );
  int max_possible_sum = list1 . size ( ) + list2 . size ( ) - 2;
  for ( int sum = 0;
  sum <= max_possible_sum;
  sum ++ ) {
    for ( int i = 0;
    i <= sum;
    i ++ ) if ( i < list1 . size ( ) && ( sum - i ) < list2 . size ( ) && list1 . get ( i ) == list2 . get ( sum - i ) ) res . add ( list1 . get ( i ) );
    if ( res . size ( ) > 0 ) break;
  }
  for ( int i = 0;
  i < res . size ( );
  i ++ ) System . out . print ( res . get ( i ) + " " );
}