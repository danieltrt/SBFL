static void findpath ( int [ ] [ ] graph, int n ) {
  Vector < Integer > numofadj = new Vector < > ( );
  for ( int i = 0;
  i < n;
  i ++ ) numofadj . add ( accumulate ( graph [ i ], 0 ) );
  int startPoint = 0, numofodd = 0;
  for ( int i = n - 1;
  i >= 0;
  i -- ) {
    if ( numofadj . elementAt ( i ) % 2 == 1 ) {
      numofodd ++;
      startPoint = i;
    }
  }
  if ( numofodd > 2 ) {
    System . out . println ( "No Solution" );
    return;
  }
  Stack < Integer > stack = new Stack < > ( );
  Vector < Integer > path = new Vector < > ( );
  int cur = startPoint;
  while ( ! stack . isEmpty ( ) || accumulate ( graph [ cur ], 0 ) != 0 ) {
    if ( accumulate ( graph [ cur ], 0 ) == 0 ) {
      path . add ( cur );
      cur = stack . pop ( );
    }
    else {
      for ( int i = 0;
      i < n;
      i ++ ) {
        if ( graph [ cur ] [ i ] == 1 ) {
          stack . add ( cur );
          graph [ cur ] [ i ] = 0;
          graph [ i ] [ cur ] = 0;
          cur = i;
          break;
        }
      }
    }
  }
  for ( int ele : path ) System . out . print ( ele + " -> " );
  System . out . println ( cur );
}