#include <bits/stdc++.h>
#include <vector>
using namespace std;
class SinhVien
{
private:
    string Id,Name,Class,Email;
public:
    SinhVien()
    {
        Id=Name=Class=Email="";
    }
    friend istream& operator >> (istream&,SinhVien &a);
    friend ostream& operator << (ostream&,SinhVien a);
    friend bool operator < (SinhVien a,SinhVien b);
    string getClass()
    {
        return Class;
    }
};
istream& operator >> (istream&,SinhVien &a)
{
    cin>>a.Id;
    cin.ignore();
    getline(cin,a.Name);
    cin>>a.Class>>a.Email;
}
ostream& operator << (ostream&,SinhVien a)
{
    cout<<a.Id<<" "<<a.Name<<" "<<a.Class<<" "<<a.Email<<endl;
}
int main()
{
    vector<SinhVien> a;
    map<string,vector<SinhVien>> mp;
    string s;
    SinhVien x;
    int q,n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        mp[x.getClass()].push_back(x);
    }
    cin>>q;
    while(q--)
    {
        cin>>s;
        cout<<"Danh sach Sinh Vien lop "<<s<<": "<<endl;
        for(SinhVien x:mp[s])
            cout<<x;
    }
    cout<<"second";
    return 0;
}
