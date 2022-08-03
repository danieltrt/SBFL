static void countSubsequence ( String s, int n ) {
  int cntG = 0, cntF = 0, result = 0, C = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    switch ( s . charAt ( i ) ) {
      case 'G' : cntG ++;
      result += C;
      break;
      case 'F' : cntF ++;
      C += cntG;
      break;
      default : continue;
    }
  }
  System . out . println ( result );
}