int maxProduct ( int arr [ ] , int n ) {
  if ( ( n < 2 ) || ( n == 2 ) ) {
    cout << "No pairs exists" << endl ;
    return 0 ;
  }
  if ( ( n == 2 ) || ( n == 3 ) ) {
    cout << arr [ 0 ] << " " << arr [ 1 ] << endl ;
    return 0 ;
  }
  int posa = 0 ;
  int posb = 0 ;
  int nega = 0 ;
  int negb = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] > posa ) && ( arr [ i ] > posb ) ) {
      posb = posa ;
      posa = arr [ i ] ;
    }
    else if ( ( arr [ i ] < 0 ) && ( abs ( arr [ i ] ) > abs ( nega ) ) ) {
      negb = nega ;
      nega = arr [ i ] ;
    }
    else if ( ( arr [ i ] < 0 ) && ( abs ( arr [ i ] ) > abs ( negb ) ) ) {
      negb = arr [ i ] ;
    }
  }
  if ( ( nega * negb > posa * posb ) || ( negb * posb > posb * nega ) ) {
    cout << "Max product pair is {" << nega << ", " << negb << "}" << endl ;
  }
  else {
    cout << "Max product pair is {" << posa << ", " << posb << "}" << endl ;
  }
  return 0 ;
}
