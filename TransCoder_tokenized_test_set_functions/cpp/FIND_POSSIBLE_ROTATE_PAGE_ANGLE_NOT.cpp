void possibleOrNot ( long long a1, long long a2, long long b1, long long b2, long long c1, long long c2 ) {
  long long dis1 = pow ( b1 - a1, 2 ) + pow ( b2 - a2, 2 );
  long long dis2 = pow ( c1 - b1, 2 ) + pow ( c2 - b2, 2 );
  if ( dis1 != dis2 ) cout << "No";
  else if ( b1 == ( ( a1 + c1 ) / 2.0 ) && b2 == ( ( a2 + c2 ) / 2.0 ) ) cout << "No";
  else cout << "Yes";
}