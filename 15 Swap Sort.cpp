 int *findTwoElement(int *arr, int n) {
     
     int * ansArr = new int[2];
    
    //  input arr[]={2,3,1,5,1};
    //  processing 
    int i=0;
    while(i<n){
        if(arr[i]!=arr[arr[i]-1]){
            swap(arr[i],arr[arr[i]-1]);
        }
        else{
            i++;
        }
    }
    // after processing arr will we arr[]={1,2,3,1,5};
    // and this will become ideal arr for me , now simply traverse the 
    // arr and if arr[i]==i+1 then simply move i++ 
    // otherwise missing = i+1 and repeating/ duplicate = arr[i];
    
    
    // observation code 
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i+1){
            ansArr[0] = arr[i];         // ansArr[0] -> repeating elemrnt = arr[i]
            ansArr[1] = i+1;            //ansArr[1] -> missing element = i+1
            break;
        }
    }
     return ansArr;
    }
