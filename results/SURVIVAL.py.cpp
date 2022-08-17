int survival ( int S , int N , int M ) {
  if ( ( ( ( N * 6 ) < ( M * 7 ) && S > 6 ) || M > N ) {
    cout << "No" << endl ;
  }
  else {
    int days = ( M * S ) / N ;
    if ( ( ( ( M * S ) % N ) != 0 ) && ( ( ( M * S ) % N ) != 0 ) ) days ++ ;
    cout << "Yes " << endl ;
    cout << days << endl ;
  }
  return 0 ;
}
