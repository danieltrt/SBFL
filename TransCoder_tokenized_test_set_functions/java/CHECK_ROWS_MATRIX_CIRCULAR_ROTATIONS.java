static boolean isPermutedMatrix ( int mat [ ] [ ], int n ) {
  String str_cat = "";
  for ( int i = 0;
  i < n;
  i ++ ) {
    str_cat = str_cat + "-" + String . valueOf ( mat [ 0 ] [ i ] );
  }
  str_cat = str_cat + str_cat;
  for ( int i = 1;
  i < n;
  i ++ ) {
    String curr_str = "";
    for ( int j = 0;
    j < n;
    j ++ ) {
      curr_str = curr_str + "-" + String . valueOf ( mat [ i ] [ j ] );
    }
    if ( str_cat . contentEquals ( curr_str ) ) {
      return false;
    }
  }
  return true;
}