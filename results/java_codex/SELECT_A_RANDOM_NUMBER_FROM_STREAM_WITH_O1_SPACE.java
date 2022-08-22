int selectRandom ( int x ) {
  count ++;
  if ( count == 1 ) res = x;
  else {
    Random r = new Random ( );
    int i = r . nextInt ( count );
    if ( i == count - 1 ) res = x;
  }
  return res;
}