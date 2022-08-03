static int countOfSubstringWithKOnes ( String s, int K ) {
  int N = s . length ( );
  int res = 0;
  int countOfOne = 0;
  int [ ] freq = new int [ N + 1 ];
  freq [ 0 ] = 1;
  for ( int i = 0;
  i < N;
  i ++ ) {
    countOfOne += ( s . charAt ( i ) - '0' );
    if ( countOfOne >= K ) {
      res += freq [ countOfOne - K ];
    }
    freq [ countOfOne ] ++;
  }
  return res;
}