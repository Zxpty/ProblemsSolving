    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        ios_base::sync_with_stdio(0);
        int num;
        cin >> num;
        string num_str = to_string(num);
        int sum = 0;
        for(int i = 0; i < num_str.length(); i++){
            char c = num_str[i];
            int digit = stoi(string(1, c));
            sum += digit;
        }
        cout<<sum;
        return 0;
    }