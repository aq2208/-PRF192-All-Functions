//selection sort char
char tmp[100];
for (int i = 0 ; i<n;i++){
    int vt=0;
  	for (int j = 1;j<n-i;j++){
  		if (a[j]>a[vt]) vt=j;
	}
	tmp=a[vt];
	a[vt]=a[n-i-1];
	a[n-i-1]=tmp;
}

//bubble sort char
void bubbleSort(char a[], int n){
    char tmp;
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(a[j]>a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

