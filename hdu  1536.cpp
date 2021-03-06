#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
//注意 S数组要按从小到大排序 SG函数要初始化为-1 对于每个集合只需初始化1遍
//n是集合s的大小 S[i]是定义的特殊取法规则的数组
int s[110],sg[10010],n;
int SG_dfs(int x)
{
    int i;
    if(sg[x]!=-1)
        return sg[x];
    bool vis[110];
    memset(vis,0,sizeof(vis));
    for(i=0;i<n;i++)
    {
        if(x>=s[i])
        {
            SG_dfs(x-s[i]);
            vis[sg[x-s[i]]]=1;
        }
    }
    int e;
    for(i=0;;i++)
        if(!vis[i])
        {
            e=i;
            break;
        }
    return sg[x]=e;
}
int main()
{
    int i,m,t,num;
    while(scanf("%d",&n)&&n)
    {
        for(i=0;i<n;i++)
            scanf("%d",&s[i]);
        memset(sg,-1,sizeof(sg));
        sort(s,s+n);
        scanf("%d",&m);
        while(m--)
        {
            scanf("%d",&t);
            int ans=0;
            while(t--)
            {
                scanf("%d",&num);
                ans^=SG_dfs(num);
            }
            if(ans==0)
                printf("L");
            else
                printf("W");
        }
        printf("\n");
    }
    return 0;
}
