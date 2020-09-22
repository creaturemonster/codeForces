
using namespace std;

int main()
{ 
  int t;
  cin >> t;
  while(t--){
    int n;
    cin>>n;
    
    String num = to_string(n);
    int num_zeros=0;
    for(int i=0;i<num.length;i++){
      char c=num.at(i);
        if(c=='0'){
          num_zeroes++;
        }
      else{
         int p=(int) c;
         cout << p*num.length() -i;
      }
        
      }
    int res= num.length() - num_zeroes;
    cout << res;
}
return 0;
}
