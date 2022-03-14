void sortAscending(float array[], int size){
	for ( int i = 0; i < size; i++){
    	for ( int j = i + 1; j < size; j++){
    		if ( array[i] > array[j] ){
    			double temp = array[i];
    			array[i] = array[j];
    			array[j] = temp;
				} 
			}
		}
}

void reverseArray(float array[], int size){
	for ( int i = 0; i < size; i++){
    	for ( int j = i + 1; j < size; j++){
    		if ( array[i] < array[j] ){
    			double temp = array[i];
    			array[i] = array[j];
    			array[j] = temp;
				} 
			}
		}
}

void sort(float array[], int size, bool isAscending){
	
	if (isAscending == true)
		sortAscending(array,size);
	
	else reverseArray(array,size);
	
}
