#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    if(n<=0){
    cout <<"0";
    return 0;
}

    int t[n];
    for(int i=0;i<n;i++){
        cin>>t[i];
    }

    for (int N=n;N>=2;N-=2){ 
        int sum=0;
        for(int i=0;i<N;i++){
            sum += t[i];
        }
        

        if(N%2!=0){
            N-=1;
        }else if(sum%2!=0 &&N==n){
            continue;
        }
        
		
        int o=0;
        while(o+N<=n){
            int arr[N];
            for(int i=0;i<N;i++){
                arr[i]=t[i+o];
                
            }
           

            sort(arr,arr+N); 

           int sum1=0,sum2 =0;
            if(N==2){
                sum1=arr[0];
                sum2=arr[1];
                if(sum1==sum2){
                    cout<< o+1 << " " <<N<<" "<<sum1<< endl;
                    return 0;
                }else{
                    o++;
                }
            }else{
                for(int i = 0;i<N/2;i++){
                    if(i%2==0){
                        sum1+=arr[i]+arr[N-1-i]; 
                    } else {
                        sum2+=arr[i]+arr[N-1-i]; 
                    }
                }
                if(sum1==sum2){
                    cout<< o+1 << " " << N <<" "<<sum1<< endl;
                    return 0;
                }else{
                    o++;
                }
            }
        }
    }
	cout <<"0";
	}
	  

