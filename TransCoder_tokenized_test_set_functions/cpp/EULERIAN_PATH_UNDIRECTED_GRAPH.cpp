void findpath ( int graph [ ] [ 5 ], int n ) {
  vector < int > numofadj;
  for ( int i = 0;
  i < n;
  i ++ ) numofadj . push_back ( accumulate ( graph [ i ], graph [ i ] + 5, 0 ) );
  int startpoint = 0, numofodd = 0;
  for ( int i = n - 1;
  i >= 0;
  i -- ) {
    if ( numofadj [ i ] % 2 == 1 ) {
      numofodd ++;
      startpoint = i;
    }
  }
  if ( numofodd > 2 ) {
    cout << "No Solution" << endl;
    return;
  }
  stack < int > stack;
  vector < int > path;
  int cur = startpoint;
  while ( ! stack . empty ( ) or accumulate ( graph [ cur ], graph [ cur ] + 5, 0 ) != 0 ) {
    if ( accumulate ( graph [ cur ], graph [ cur ] + 5, 0 ) == 0 ) {
      path . push_back ( cur );
      cur = stack . top ( );
      stack . pop ( );
    }
    else {
      for ( int i = 0;
      i < n;
      i ++ ) {
        if ( graph [ cur ] [ i ] == 1 ) {
          stack . push ( cur );
          graph [ cur ] [ i ] = 0;
          graph [ i ] [ cur ] = 0;
          cur = i;
          break;
        }
      }
    }
  }
  for ( auto ele : path ) cout << ele << " -> ";
  cout << cur << endl;
}