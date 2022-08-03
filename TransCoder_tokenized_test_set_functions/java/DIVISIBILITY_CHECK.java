static void divisibilityCheck ( List < Integer > arr, int n ) {
  List < Integer > s = new ArrayList < Integer > ( );
  int max_ele = Integer . MIN_VALUE;
  for ( int i = 0;
  i < n;
  i ++ ) {
    s . add ( arr . get ( i ) );
    max_ele = Math . max ( max_ele, arr . get ( i ) );
  }
  LinkedHashSet < Integer > res = new LinkedHashSet < Integer > ( );
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( arr . get ( i ) != 0 ) for ( int j = arr . get ( i ) * 2;
    j <= max_ele;
    j += arr . get ( i ) ) {
      if ( s . contains ( j ) ) res . add ( j );
    }
  }
  List < Integer > list = new ArrayList < Integer > ( res );
  Collections . reverse ( list );
  for ( Integer temp : list ) System . out . print ( temp + " " );
}