#include <iostream>
#include <cstring>

using namespace std;

int a, b;

int main(void){

    cin >> a >> b;

    string num = to_string(a + b);

    string ans;

    for(int i = num.size() - 1, j = 0; i >= 0; i--){
        ans = num[i] + ans;
        j++;
        if(i && j % 3 == 0 && num[i - 1] != '-') ans = ',' + ans;
    }

    cout << ans << endl;

    return 0;
}