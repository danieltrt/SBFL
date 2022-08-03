int selectRandom ( int x ) {
  static int res;
  static int count = 0;
  count ++;
  if ( count == 1 ) res = x;
  else {
    int i = rand ( ) % count;
    if ( i == count - 1 ) res = x;
  }
  return res;
}