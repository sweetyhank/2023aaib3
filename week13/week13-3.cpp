//week13-3.cpp �ϥ�leetcode ��platground �C�ֳ��g�{��
//�k�U���A��stdin �i��J���
int main() {
    int a,b;
    vector<int> A,B;
    while(cin>>a>>b){
        A.push_back(a);
        B.push_back(b);
    }
    sort(A.begin(),A.end() );
    sort(B.begin(),B.end() );
    int ans=0;
    for(int i=0;i<A.size();i++){
        //cout<<A[i]<<" ";
        ans +=abs(A[i]-B[i]);
    }
    cout<<"�[�_�Ӫ�����"<<ans;
}
