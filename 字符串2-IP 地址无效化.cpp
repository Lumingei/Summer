/*IP 地址无效化
给你一个有效的 IPv4 地址 address，返回这个 IP 地址的无效化版本。

所谓无效化 IP 地址，其实就是用 "[.]" 代替了每个 "."。

示例 1：
输入：address = "1.1.1.1"
输出："1[.]1[.]1[.]1"

示例 2：
输入：address = "255.100.50.0"
输出："255[.]100[.]50[.]0"
*/

char * defangIPaddr(char * address){
    int len=strlen(address);
    int k=0;
    char *a=(char *)malloc(sizeof(char)*len+7);
   
    for(int i=0;i<len;i++){
        if(address[i]=='.'){
            a[i+2*k]='[';                           //分割成的的每一小组都比原先多了两个字符 
            a[i+2*k+1]='.';
            a[i+2*k+2]=']';
            k++;
        }
        else{
            a[i+2*k]=address[i];
        }
    }
   
    a[len+6]='\0';                                  //结束符！ 
    return a;
}

/*法二：（简单 巧妙！）
char * defangIPaddr(char * address){
int a, b, c, d;
char *str = malloc((strlen(address) + 10) * sizeof(char));

sscanf(address, "%d.%d.%d.%d", &a, &b, &c, &d);
sprintf(str, "%d[.]%d[.]%d[.]%d" , a, b, c, d);

return str;
}

解释：
sscanf与scanf类似，都是用于输入的，只是后者以键盘(stdin)为输入源，前者以固定字符串为输入源。
*/ 
