#include <stdio.h>
enum moths{
    Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

void main(){
    enum moths month;
    char *monthName [] = { "", "January", "February", "March", "April", "May", "June", "July", "August",
    "September", "October", "November", "December" } ;

    for ( month = Jan; month <= Dec; ++month )
    printf("%2d%11s\n", month, monthName [month] ) ;
}