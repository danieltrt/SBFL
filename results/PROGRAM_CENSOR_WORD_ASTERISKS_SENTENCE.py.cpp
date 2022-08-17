string censor ( string text , string word ) {
  string :: size_type wordPos = text . find ( word ) ;
  string result ;
  string stars = "*" ;
  int count = 0 ;
  int index = 0 ;
  for ( int i = 0 ;
  i < wordPos ;
  i ++ ) {
    if ( text . substr ( index , i - index ) == word ) {
      stars += stars ;
    }
    index ++ ;
  }
  result = string ( wordPos , count ) ;
  return result ;
}
