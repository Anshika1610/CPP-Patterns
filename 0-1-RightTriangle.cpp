void printTriangle(int n) {
        // code here
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(i%2==0 && j%2==0){
                    cout<<"1 ";
                }
                else if(i%2!=0 and j%2!=0){
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }
    }
