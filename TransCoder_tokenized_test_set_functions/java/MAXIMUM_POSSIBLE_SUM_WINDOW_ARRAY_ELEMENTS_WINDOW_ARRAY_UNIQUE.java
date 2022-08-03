static int returnMaxSum ( int A [ ], int B [ ], int n ) {
  Set < Integer > mp = new HashSet < Integer > ( );
  int result = 0;
  int curr_sum = 0, curr_begin = 0;
  for ( int i = 0;
  i < n;
  ++ i ) {
    while ( mp . contains ( A [ i ] ) ) {
      mp . remove ( A [ curr_begin ] );
      curr_sum -= B [ curr_begin ];
      curr_begin ++;
    }
    mp . add ( A [ i ] );
    curr_sum += B [ i ];
    result = Integer . max ( result, curr_sum );
  }
  return result;
}