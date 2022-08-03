void tower ( int n, char sourcePole, char destinationPole, char auxiliaryPole ) {
  if ( 0 == n ) return;
  tower ( n - 1, sourcePole, auxiliaryPole, destinationPole );
  cout << "Move the disk " << n << " from " << sourcePole << " to " << destinationPole << endl;
  tower ( n - 1, auxiliaryPole, destinationPole, sourcePole );
}