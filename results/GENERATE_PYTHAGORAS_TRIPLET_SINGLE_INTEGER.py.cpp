int evaluate ( int n ) {
  if ( ( n == 1 || n == 2 ) && ( n % 2 == 0 ) ) {
    cout << "No Pythagoras" << " Triplet exists" << endl ;
  }
  ;
  if ( ( n % 2 == 0 ) && ( n % 4 == 0 ) ) {
    int var = n * n / 4 ;
    cout << "Pythagoras Triplets" << " exist i.e. " << endl ;
    cout << ( int ) n << " " << ( int ) var - 1 << " " << ( int ) var + 1 << endl ;
  }
  ;
  if ( ( n % 2 != 0 ) && ( n % 2 != 0 ) ) {
    int var = n * n + 1 ;
    cout << "Pythagoras Triplets " << "exist i.e. " << endl ;
    cout << ( int ) n << " " << ( int ) var / 2 - 1 << " " << ( int ) var / 2 << endl ;
  }
  ;
  return 0 ;
}
