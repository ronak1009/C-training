void main() {
	int a = 5;
	//upgrading the datatype
	double b = a;
	b += 5.6;
	//downgrading the datatype
	a = static_cast<int> (b);

	/*
	--------------------------------------------------------------------------------
	type casting : changing the datatype of a variable to another datatype
	while type casting the value of the variable is copied and then after type conversion, returned.
	--------------------------------------------------------------------------------

	mem distribution
	int		= 1 + 31		sign + mantissa
	double	= 1 + 11 + 54	sign + exp. + mantissa
	
	*/
}