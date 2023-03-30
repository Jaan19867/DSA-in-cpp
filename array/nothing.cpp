#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

	int M,N;
	cin>>M>>N;
	int arr[M][N];

for( int j=0;j<M;j++){
  for (int i = 0; i < N; i++) { cin >> arr[j][i]; }

    
// j++;
}
// for( int j=0;j<M;j++){
//   for (int i = 0; i < N; i++) { cout << arr[j][i] << " "; }
//   cout << endl;

    
// // j++;
// }

for(int j=0;j<N;j++){
int sum=0;
for (int i = 0; i < M;i++) {
  sum = arr[i][j] + sum;
//   cout << sum << endl;
}
cout << sum << " ";
}
}
// }




