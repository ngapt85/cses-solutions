#include<bits/stdc++.h>
using namespace std;
int n, a[100005], cnt;
int d[100005];
//Sub12: Dãy số a là 1 dãy hoán vị của n
//mỗi dãy con là một tập hợp các phần tử tăng dần theo vị trí,
// đồng thời tạo thành một đoạn liền nhau theo giá trị
//Tham kam: Nếu a[i] là phần tử đầu tiên của dãy con, thì phần tử tiếp theo là a[i]+1, a[i]+2
//Ta sẽ đi tìm xem các phần tử x = a[i]+1 có nằm ở phần còn lại dãy số hay không và đánh dấu chúng

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	freopen("CAU2.INP","r",stdin);
    freopen("CAU2.OUT","w",stdout);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b+1,b+n+1);
    for (int i=1;i<=n;i++)
        pos[i] =
    for (int i=1;i<=n;i++){
//        cerr<<a[i]<<' '<<d[a[i]]<<endl;
        if (d[a[i]]==1) continue;
        cnt++;  //Số lượng dãy con thỏa mãn
        d[a[i]]=1;//Đánh dấu các giá trị đã thuộc dãy con
        int j = i;
        while (j<=n){
            int x = a[j]+1; //Tìm vị trí phần tử tiếp theo của dãy con xem có nằm ở phần còn lại không
            j = find(a+j+1,a+n+1,x)-a;
            if (j<=n) d[x]=1; //Đánh dấu phần tử tiếp theo của dãy con
        }
    }
    cout<<cnt;
}
