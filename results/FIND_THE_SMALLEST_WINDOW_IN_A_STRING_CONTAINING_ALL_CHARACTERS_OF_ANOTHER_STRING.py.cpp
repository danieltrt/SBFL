string findSubString ( string string , string pat ) {
  int len1 = string . length ( ) ;
  int len2 = pat . length ( ) ;
  if ( len1 < len2 ) {
    cout << "No such window exists" << endl ;
    return "" ;
  }
  vector < int > hash_pat ( no_of_chars , 0 ) ;
  vector < int > hash_str ( no_of_chars , 0 ) ;
  for ( int i = 0 ;
  i <= len2 ;
  i ++ ) hash_pat [ ( int ) pat [ i ] ] ++ ;
  int start = 0 , start_index = - 1 , min_len = numeric_limits < int > :: max ( ) ;
  int count = 0 ;
  for ( int j = 0 ;
  j <= len1 ;
  j ++ ) {
    hash_str [ ( int ) string [ j ] ] ++ ;
    if ( ( hash_pat [ ( int ) string [ j ] ] != 0 && hash_pat [ ( int ) string [ j ] ] <= hash_pat [ ( int ) string [ j ] ] ) count ++ ;
    if ( count == len2 ) {
      while ( ( hash_str [ ( int ) string [ start ] ] > hash_pat [ ( int ) string [ start ] || hash_pat [ ( int ) string [ start ] ] == 0 ) {
        if ( ( hash_str [ ( int ) string [ start ] ] > hash_pat [ ( int ) string [ start ] ] ) ) hash_str [ ( int ) string [ start ] ] -- ;
        start ++ ;
      }
      int len_window = j - start + 1 ;
      if ( min_len > len_window ) {
        min_len = len_window ;
        start_index = start ;
      }
    }
  }
  if ( start_index == - 1 ) {
    cout << "No such window exists" << endl ;
    return "" ;
  }
  return string . substr ( start_index , min_len ) ;
}
