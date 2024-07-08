int numDigitos(int x) {
    static int y = 0;
    if (x) {
	x /= 10;
	y++;
	numDigitos(x);
    } else return y;
    
}
