#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

	int M,N;
	cin>>M>>N;
	int arr[M][N];

for( int i=0;i<M;i++){
  for (int j = 0; j < N; j++) { cin >> arr[i][j]; }
    // cout << endl;
// j++;
}
for(int j=0;j<N;j++){
int sum=0;
for (int i = 0; i < M; i++) {
  sum = arr[i][j] + sum;
}
cout << sum << " ";
}
}





