void find3largest ( int [ ] arr ) {
  Arrays . sort ( arr );
  int n = arr . length;
  int check = 0, count = 1;
  for ( int i = 1;
  i <= n;
  i ++ ) {
    if ( count < 4 ) {
      if ( check != arr [ n - i ] ) {
        System . out . print ( arr [ n - i ] + " " );
        check = arr [ n - i ];
        count ++;
      }
    }
    else break;
  }
}