bool checkSorted ( int n, queue < int > & q ) {
  stack < int > st;
  int expected = 1;
  int fnt;
  while ( ! q . empty ( ) ) {
    fnt = q . front ( );
    q . pop ( );
    if ( fnt == expected ) expected ++;
    else {
      if ( st . empty ( ) ) {
        st . push ( fnt );
      }
      else if ( ! st . empty ( ) && st . top ( ) < fnt ) {
        return false;
      }
      else st . push ( fnt );
    }
    while ( ! st . empty ( ) && st . top ( ) == expected ) {
      st . pop ( );
      expected ++;
    }
  }
  if ( expected - 1 == n && st . empty ( ) ) return true;
  return false;
}