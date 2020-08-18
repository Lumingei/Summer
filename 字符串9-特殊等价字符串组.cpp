/* ����ȼ��ַ�����
�㽫�õ�һ���ַ������� A��
ÿ���ƶ������Խ��� S ����������ż���±���ַ����������������±���ַ���
�����������������ƶ���S == T����ô�����ַ��� S �� T �� ����ȼ� �ġ�
���磬S = "zzxy" �� T = "xyzz" ��һ������ȼ��ַ�������Ϊ�����Ƚ��� S[0] �� S[2]��Ȼ�󽻻� S[1] �� S[3]��ʹ�� "zzxy" -> "xzzy" -> "xyzz" ��
���ڹ涨��A �� һ������ȼ��ַ��� ���� A ��һ��ͬʱ�������������ķǿ��Ӽ���
�����е�ÿһ���ַ������� ����ȼ� ��
�����ַ����Ѿ������˸�����е���������ȼ��ַ����������ﵽ�����ϵ����ֵ��Ҳ����˵�����һ���ַ������ڸ����У���ô����ַ����� ���� ��������κ��ַ�������ȼۣ�
���� A ������ȼ��ַ������������

ʾ�� 1��
���룺["abcd","cdab","cbad","xyzz","zzxy","zzyx"]
�����3
���ͣ�
����һ��Ϊ ["abcd", "cdab", "cbad"]����Ϊ�����ǳɶԵ�����ȼ��ַ�������û�������ַ�������Щ�ַ�������ȼۡ�
��������ֱ��� ["xyzz", "zzxy"] �� ["zzyx"]���ر���Ҫע����ǣ�"zzxy" ���� "zzyx" ����ȼۡ�
*/

int compareChar(const void *a, const void *b) {
    return *(char *)a - *(char *)b;
}

int compareStr(const void *a, const void *b) {
    return strcmp(*(char **)a, *(char **)b);
}

int numSpecialEquivGroups(char ** A, int ASize){
    for (int i=0;i<ASize;i++) {
        int len=strlen(A[i]);
        for (int idx1=1,idx2=len-1-(len%2==0);idx1<idx2;idx1+=2,idx2-=2) {
            char temp=A[i][idx1];
            A[i][idx1]=A[i][idx2];
            A[i][idx2]=temp;
        }
        
        int odds=len/2,evens=len-odds;
        qsort(A[i],evens,sizeof(A[i][0]),compareChar);
        qsort(A[i]+evens,odds,sizeof(A[i][evens]),compareChar);
    }
    qsort(A,ASize,sizeof(A[0]),compareStr);
    
    int count=1; 
    for(int i=1;i<ASize;i++){
    	if (strcmp(A[i],A[i-1])!=0){
            count++;
        }
    }
    return count;
}

