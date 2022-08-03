void subsetDifference ( int n ) {
  int s = n * ( n + 1 ) / 2;
  if ( n % 4 == 0 ) {
    cout << "First subset sum = " << s / 2;
    cout << "\nSecond subset sum = " << s / 2;
    cout << "\nDifference = " << 0;
  }
  else {
    if ( n % 4 == 1 || n % 4 == 2 ) {
      cout << "First subset sum = " << s / 2;
      cout << "\nSecond subset sum = " << s / 2 + 1;
      cout << "\nDifference = " << 1;
    }
    else {
      cout << "First subset sum = " << s / 2;
      cout << "\nSecond subset sum = " << s / 2;
      cout << "\nDifference = " << 0;
    }
  }
}