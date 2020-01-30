/*function compares number a put out lowest */
int min(int x, int y, int z){
	int temp;
	
	temp = x;
	
	if(temp > y){
		temp = y;
		if(temp > z){
			temp = z;
			return temp;
		}
		else{
			return temp;
		}
	} 
	else if (temp > z){
		temp = z;
		if(temp > y){
			temp = y;
			return temp;
		}
		else{
			return temp;
		}
	}
	else{
		return temp;
	}
}
