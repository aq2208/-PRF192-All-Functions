int binaryFind(int search, int key[], int size){
    int vt = -1, i, low =0, high= size-1;
    do{
        //calculate mid-element
        i = (low + high + 1)/2;
        if(search < key[i])
            //reset high element
            high = i-1;
        else if (search > key[i])
            //reset low element
            low = i+1;
        else 
            //found it 
            vt = i;
    }while (vt== -1 && low <= high);
    return vt;
}