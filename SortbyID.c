//Nguyen Anh Quan - SE1708

//cau 2: sap xep ma SV tang dan
void sortById(stu list[], int n){
	stu tmp;
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(list[j].id>list[j+1].id){
                tmp = list[j];
                list[j] = list[j+1];
                list[j+1] = tmp;
            }
        }
    }
}