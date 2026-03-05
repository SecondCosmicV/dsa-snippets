class FenwickTree{
private:
    ll n;
    vector<ll>a;
public:
    FenwickTree(ll n){
        this->n=n;
        a.assign(n,0);
    }
    void update(ll i,ll delta){
        while(i<n){
            a[i]+=delta;
            i|=i+1;
        }
    }
    ll query(ll r){
        ll s=0;
        while(~r){
            s+=a[r];
            r=(r&(r+1))-1;
        }
        return s;
    }
};

