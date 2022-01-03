#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std ;

int main() {
    int i , p , num ;
    int no[10] ;
    int guess[4] , tmp , counterA , counterB , j , k ;

    for ( i = 0 ; i < 10 ; ++i ) no[i] = i;//先產生裡面有數字0~9的陣列 ，且0~9只會出現一次。 
    
    srand( static_cast<unsigned>( time(NULL) ) ) ;
    for ( i = 0 ; i < 4 ; ++i ) {
        p = rand() % 10 ;
        if ( p == i ) continue ;
        tmp = no[i] ;
        no[i] = no[p] ;
        no[p] = tmp ;
    }
    for(i=0;i<10;i++)cout<<no[i];

    for( i = 0 ; i < 7 ; ++i ){
        cout << "Please enter your guess number : " ;
        cin  >> num;
        // 拆解guessnum 區塊 
        guess[3] =   num / 1000 ;
        guess[2] = ( num / 100 ) % 10 ;
        guess[1] = ( num / 10 ) % 10 ;
        guess[0] =   num % 10 ;
             
        // 判斷幾A幾B的區塊，直接取no陣列(裡面有數字0~9的陣列 ，且0~9只會出現一次)前四項跟guess做比較。 
        counterA = counterB = 0;
        for( j = 0 ; j < 4 ; ++j ){
            for( k = 0 ; k < 4 ; ++k ){
                if( no[j] == guess[k] ){
                    if( j == k ){
                        counterA++;
                    } else {
                        counterB++;
                    }
                }
            }
        }
        if( counterA == 4 ){
            cout << "Right number!!" << endl;
            break;//離開迴圈 
        } else {
            cout << "Hint " << i+1 << " : " << counterA << "A" << counterB << "B" << endl;
        }
    }
    
    if( i == 7 ){
        cout << "You lose this game ! The correct answer is : " ;
        for( j = 3 ; j >= 0 ; --j ){
            cout << no[j];
        }
        cout << endl;
    }
    system("pause");
    return 0 ;
}
