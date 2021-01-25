
int calculateGGT(unsigned int x, unsigned int y){
	// logical combination of both ifs doesn't
	// work with Virtual-C 
	if (0 < x){
		if (0 < y) {
			while (x != y){
				if (x < y){
					y = y - x;
				} else {
					x = x - y; 
				}
			}
		} else {
			x = 0;
		}
	} else {
		x = 0;
	}
	return x;
}	