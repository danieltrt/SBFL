string censor ( string text, string word ) {
  vector < string > word_list;
  boost :: split ( word_list, text, boost :: is_any_of ( "\\ +" ) );
  string result = "";
  string stars = "";
  for ( int i = 0;
  i < word . size ( );
  i ++ ) stars += '*';
  int index = 0;
  for ( string i : word_list ) {
    if ( i . compare ( word ) == 0 ) {
      word_list [ index ] = stars;
    }
    index ++;
  }
  for ( string i : word_list ) {
    result += i + ' ';
  }
  return result;
}