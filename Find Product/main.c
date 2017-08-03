#include <stdio.h>
/*use of long long int
 *'int' types are by default of 4 bytes now in gcc, and so as 'long'.
 *long long' is 8 bytes and this problem needs it because the multiplication is being performed before modulus operation.
 *It is crossing the range of 4 bytes when the multiplication is being performed and hence showing wrong answer.
 */
int main()
{
    int N,A[1000],i;
    long long int answer=1;
    scanf("%d\n",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d ",&A[i]);
        answer=(answer*A[i])%(1000000007);
    }
    printf("%lli",answer);
}
