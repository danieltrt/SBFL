static void printRect ( Integer X [ ], Integer Y [ ], int n ) {
  int Xmax = Collections . max ( Arrays . asList ( X ) );
  int Xmin = Collections . min ( Arrays . asList ( X ) );
  int Ymax = Collections . max ( Arrays . asList ( Y ) );
  int Ymin = Collections . min ( Arrays . asList ( Y ) );
  System . out . println ( "{" + Xmin + ", " + Ymin + "}" );
  System . out . println ( "{" + Xmin + ", " + Ymax + "}" );
  System . out . println ( "{" + Xmax + ", " + Ymax + "}" );
  System . out . println ( "{" + Xmax + ", " + Ymin + "}" );
}