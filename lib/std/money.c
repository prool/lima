/* Do not remove the headers from this file! see /USAGE for more info. */

//   
//   This is a simple money implementation
//
//    written by zifnab@lima bean 10/95
//
//  please comment away and feel free to modify anything you want
//
//  also please be kind this is my first attempt at anything like thi
//  this :).  please note that there are no checks of any kind in here yet
// to se if the type of currency is valid or not
//

#include <mudlib.h>


private static mapping money;

private *query_currencies;


//  This is the functin to call to query the amount of a certain type
//  of currency you have.
//

int query_amt_money(string type)
{
    if(!money) return;
    if(!money[type]) return;
    else
	return money[type];
}

//
//  This is the function to call to add money to a person 
//   


mixed add_money(string type, int amount)
{
    if(!money) money = ([]);
    if(!type || !amount) return 0;

    if(!money[type]) money[type] = amount;
    else money[type] += amount;

    if(money[type] < 1)
	map_delete(money, type);
}


//   This function will return the current "types" of money you have
//

//  This needs to check for non existance of money as it currently
//  returns in error if no mney is there
//

int *query_currencies()
{
   if(!money) return ({});
    return keys(money);
}
