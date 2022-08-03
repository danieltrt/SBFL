static int identity ( int num ) {
  int row, col;
  for ( row = 0;
  row < num;
  row ++ ) {
    for ( col = 0;
    col < num;
    col ++ ) {
      if ( row == col ) System . out . print ( 1 + " " );
      else System . out . print ( 0 + " " );
    }
    System . out . println ( );
  }
  return 0;
}