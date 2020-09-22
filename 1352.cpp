
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
    for(char c: num){
        if(c=='0'){
          num_zeroes++;
        }
        
      }
    int res= num.length() - num_zeroes;
    cout << res;
}
return 0;
}
