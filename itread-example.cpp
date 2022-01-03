
class Solution {
public:
    string getHint(string secret, string guess) {
        int a = 0;
        int b = 0;
        int cache1[10];
        int cache2[10];
        fill_n( cache1, 10, 0 );
        fill_n( cache2, 10, 0 );
        for( int i = 0; i < guess.size(); ++i )
        {
            if( guess[i] == secret[i] )
                ++a;
            else
            {
                cache1[secret[i]-'0']++;
                cache2[guess[i]-'0']++;
            }
        }
        for( int i = 0; i < 10; ++i )
        {
            b += min( cache1[i], cache2[i] );
        }
        return to_string(a) + "A" + to_string(b) + "B";
    }
};
