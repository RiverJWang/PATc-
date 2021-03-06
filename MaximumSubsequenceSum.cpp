﻿#include <iostream>
using namespace std;

/*
int Number( int A[] )
//计算数组中元素个数 
{ int n;
  n = sizeof(A)/sizeof(A[0]);
  return n;
}
*/

int MaxSubseqSum1( int A[], int N )

/*分析，子序列和最大值。且要大于零。*/
/*算法1的第一次循环：第一位逐位加到最后一位；第二次循环：从第二位逐位加到最后一位；...；*/

{ int MaxSum1, ThisSum;
  int i, j, k;
  for( i = 0; i < N; i++ ) {  /* i是子列左端位置 */
    for( j = i; j < N; j++ ){  /* j设计子列右端位置 */
      ThisSum = 0;  /* ThisSum是从A[i]到A[j]的子列和 */
      for( k = i; k <= j ; k++ )  /* k=i是从第i位开始加；k<=j是只加到第j位；上面的小于N是因为序号是从0开始的，最后一位是N-1 */
	  {   ThisSum += A[k];
      if( ThisSum > MaxSum1 )  /* 如果刚得到的这个子列和更大 */
	MaxSum1 = ThisSum;  /* 则更新结果 */
      }
	  } /* j循环结束 */
    }  /* i循环结束 */
    return MaxSum1;
}

int MaxSubseqSum2( int A[], int N )
// 有循环的时候，仔细想一想逻辑，每一句都要想一想，或者验算一下。
{ int i,j;
  int MaxSum2 = 0, ThisSum;
  for( i = 0; i < N; i++ ){
	  ThisSum = 0;
	  for( j = i; j < N; j++){
		 ThisSum += A[j]; 
		  if( MaxSum2 < ThisSum )
			  MaxSum2 = ThisSum;  //算法1第K步完全是多余的
	    }
  }
  return MaxSum2;
}

int main()
{
  int N = 0, MaxSum1 = 0, MaxSum2 = 0, MaxSum3 = 0, MaxSum4 = 0;
  int i;
  cout << "Enter the number of the seque" << endl;
  cin >> N;
  int A[N];
  for( i = 0; i < N; i++ ){  /* 开始输入数组 */
	cout << "A[" << i << "]=" << endl;
	cin >> A[i];
	}  /* 输入数组完成 */

    for( i = 0; i < N; i++ )
	{
	cout << A[i] <<  " " ;
	}
	cout << endl;
	
  MaxSum1 = MaxSubseqSum1( A, N );
  cout << MaxSum1 << endl;
  MaxSum2 = MaxSubseqSum2( A, N );
  cout << MaxSum2 << endl;
  	return 0;

}