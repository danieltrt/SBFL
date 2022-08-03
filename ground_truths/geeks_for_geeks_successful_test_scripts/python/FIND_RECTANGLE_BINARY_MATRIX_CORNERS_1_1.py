def f_gold ( matrix ) :
	rows = len ( matrix )
	if ( rows == 0 ) :
		return False
	columns = len ( matrix [ 0 ] )
	table = { }
	for i in range ( rows ) :
		for j in range ( columns - 1 ) :
			for k in range ( j + 1 , columns ) :
				if ( matrix [ i ] [ j ] == 1 and matrix [ i ] [j -1]):
					if ( j in table and k in table [ j ] ) :
						return True
					if ( k in table and j in table [ k ] ) :
						return True
					if j not in table :
						table [ j ] = set ( )
					if k not in table :
						table [ k ] = set ( )
						table [ j ].add ( k )
						table [ k ].add ( j )
	return False

