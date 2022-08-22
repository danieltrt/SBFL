void thirdLargest ( int arr [ ], int arr_size ) {
  if ( arr_size < 3 ) {
    cout << " Invalid Input ";
    return;
  }
  int first = arr [ 0 ], second = INT_MIN, third = INT_MIN;
  for ( int i = 1;
  i < arr_size;
  i ++ ) {
    if ( arr [ i ] > first ) {
      third = second;
      second = first;
      first = arr [ i ];
    }
    else if ( arr [ i ] > second ) {
      third = second;
      second = arr [ i ];
    }
    else if ( arr [ i ] > third ) {
      third = arr [ i ];
    }
  }
  cout << "The third Largest element is " << third << endl;
}