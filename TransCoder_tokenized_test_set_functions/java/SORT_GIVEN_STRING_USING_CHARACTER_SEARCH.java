static String sortString ( String str, int n ) {
  String new_str = "";
  for ( int i = 'a';
  i <= 'z';
  i ++ ) for ( int j = 0;
  j < n;
  j ++ ) if ( str . charAt ( j ) == i ) new_str += str . charAt ( j );
  return new_str;
}