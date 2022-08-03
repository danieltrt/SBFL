static void findMaxGuests ( int arrl [ ], int exit [ ], int n ) {
  Arrays . sort ( arrl );
  Arrays . sort ( exit );
  int guests_in = 1, max_guests = 1, time = arrl [ 0 ];
  int i = 1, j = 0;
  while ( i < n && j < n ) {
    if ( arrl [ i ] <= exit [ j ] ) {
      guests_in ++;
      if ( guests_in > max_guests ) {
        max_guests = guests_in;
        time = arrl [ i ];
      }
      i ++;
    }
    else {
      guests_in --;
      j ++;
    }
  }
  System . out . println ( "Maximum Number of Guests = " + max_guests + " at time " + time );
}