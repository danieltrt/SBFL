int solve ( int A [ ], int B [ ], int C [ ], int i, int j, int k ) {
  int min_diff, current_diff, max_term;
  min_diff = abs ( max ( A [ i ], max ( B [ j ], C [ k ] ) ) - min ( A [ i ], min ( B [ j ], C [ k ] ) ) );
  while ( i != - 1 && j != - 1 && k != - 1 ) {
    current_diff = abs ( max ( A [ i ], max ( B [ j ], C [ k ] ) ) - min ( A [ i ], min ( B [ j ], C [ k ] ) ) );
    if ( current_diff < min_diff ) min_diff = current_diff;
    max_term = max ( A [ i ], max ( B [ j ], C [ k ] ) );
    if ( A [ i ] == max_term ) i -= 1;
    else if ( B [ j ] == max_term ) j -= 1;
    else k -= 1;
  }
  return min_diff;
}