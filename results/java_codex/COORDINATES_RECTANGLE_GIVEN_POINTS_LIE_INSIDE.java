void printRect ( int X [ ], int Y [ ], int n ) {
  int Xmax = * max_element ( X, X + n );
  int Xmin = * min_element ( X, X + n );
  int Ymax = * max_element ( Y, Y + n );
  int Ymin = * min_element ( Y, Y + n );
  cout << "{" << Xmin << ", " << Ymin << "}" << endl;
  cout << "{" << Xmin << ", " << Ymax << "}" << endl;
  cout << "{" << Xmax << ", " << Ymax << "}" << endl;
  cout << "{" << Xmax << ", " << Ymin << "}" << endl;
}