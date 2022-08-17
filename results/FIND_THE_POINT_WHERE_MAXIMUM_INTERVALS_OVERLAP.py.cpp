void findMaxGuests ( int arrl [ ] , int exit [ ] , int n ) {
  sort ( arrl , arrl + n ) ;
  sort ( exit , exit + n ) ;
  int guests_in = 1 ;
  int max_guests = 1 ;
  int time = arrl [ 0 ] ;
  int i = 1 ;
  int j = 0 ;
  while ( ( i < n && j < n ) || ( arrl [ i ] <= exit [ j ] ) ) {
    if ( ( arrl [ i ] <= exit [ j ] ) || ( arrl [ i ] > max_guests ) ) {
      guests_in = guests_in + 1 ;
      if ( ( guests_in > max_guests ) && ( max_guests == max_guests ) ) {
        max_guests = guests_in ;
        time = arrl [ i ] ;
      }
      i = i + 1 ;
    }
    else {
      guests_in = guests_in - 1 ;
      j = j + 1 ;
    }
  }
  cout << "Maximum Number of Guests =" << max_guests << "at time" << time << endl ;
}
