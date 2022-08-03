static boolean checkSorted ( int n ) {
  Stack < Integer > st = new Stack < Integer > ( );
  int expected = 1;
  int fnt;
  while ( q . size ( ) != 0 ) {
    fnt = q . peek ( );
    q . poll ( );
    if ( fnt == expected ) expected ++;
    else {
      if ( st . size ( ) == 0 ) {
        st . push ( fnt );
      }
      else if ( st . size ( ) != 0 && st . peek ( ) < fnt ) {
        return false;
      }
      else st . push ( fnt );
    }
    while ( st . size ( ) != 0 && st . peek ( ) == expected ) {
      st . pop ( );
      expected ++;
    }
  }
  if ( expected - 1 == n && st . size ( ) == 0 ) return true;
  return false;
}