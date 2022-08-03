static int solve ( int [ ] A, int [ ] B, int [ ] C ) {
  int i, j, k;
  i = A . length - 1;
  j = B . length - 1;
  k = C . length - 1;
  int min_diff, current_diff, max_term;
  min_diff = Math . abs ( Math . max ( A [ i ], Math . max ( B [ j ], C [ k ] ) ) - Math . min ( A [ i ], Math . min ( B [ j ], C [ k ] ) ) );
  while ( i != - 1 && j != - 1 && k != - 1 ) {
    current_diff = Math . abs ( Math . max ( A [ i ], Math . max ( B [ j ], C [ k ] ) ) - Math . min ( A [ i ], Math . min ( B [ j ], C [ k ] ) ) );
    if ( current_diff < min_diff ) min_diff = current_diff;
    max_term = Math . max ( A [ i ], Math . max ( B [ j ], C [ k ] ) );
    if ( A [ i ] == max_term ) i -= 1;
    else if ( B [ j ] == max_term ) j -= 1;
    else k -= 1;
  }
  return min_diff;
}