string censor ( string text , string word ) {
  string :: size_type wordPos = 0 ;
  string result ;
  string stars ;
  for ( int i = 0 ;
  i < word . length ( ) ;
  i ++ ) {
    stars += '*' ;
  }
  int index = 0 ;
  for ( string :: size_type i = 0 ;
  i < wordPos ;
  i ++ ) {
    if ( word [ i ] == word [ wordPos ] ) {
      wordPos = i ;
    }
    index ++ ;
  }
  for ( string :: size_type i = 0 ;
  i < wordPos ;
  i ++ ) {
    result += word [ i ] + ' ' ;
  }
  return result ;
}
