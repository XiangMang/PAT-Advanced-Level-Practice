#include <iostream>
#include <cstring>

using namespace std;

int a, b;

int main(void){

    cin >> a >> b;

    string num = to_string(a + b);

    string ans;
    for(int i = str.size() - 1, j = 0; i >= 0; i--){
        ans = str[i] + ans;
        j++;
        if(j % 3 == 0 && i && str[i - 1] != '-') ans = ',' + ans;
        //每三位数加上逗号，且避免首次运算与符号
    }

    cout << ans << endl;

    return 0;
}