void printTriangle(int n) {
	    // code here
	    for(int i=1;i<=n;i++){
	        for(int j=0;j<i-1;j++){
	            cout<<" ";
	        }
	        for(int j=0;j<=2*n-2*i;j++){
	            cout<<"*";
	        }
	        for(int j=0;j<i-1;j++){
	            cout<<" ";
	        }
	        cout<<endl;
	    }
	}
