int countOfSubstringWithKOnes ( string s , int K ) {
  int N = s . length ( ) ;
  int res = 0 ;
  int countOfOne = 0 ;
  int freq [ N + 1 ] ;
  freq [ 0 ] = 1 ;
  for ( int i = 0 ;
  i < N ;
  i += 1 ) {
    countOfOne += s [ i ] - '0' ;
    if ( ( countOfOne >= K ) && ( countOfOne <= K ) ) res += freq [ countOfOne - K ] ;
    freq [ countOfOne ] ++ ;
  }
  return res ;
}
