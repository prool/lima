/*
** biff.c
**
** Adjust the "biff" setting (mail announcements)
**
** Created 31-OCT-94, Deathblade.
*/

#include <flags.h>

#define USAGE "Usage: biff [on | off]\n"

private string query_setting()
{
    return this_body()->test_flag(F_BIFF) ? "on" : "off";
}

nomask int main(string arg)
{
    if ( !arg || arg == "" )
    {
	write("Your biff mail notification flag is " + query_setting() +
	      ".\n" + USAGE);
	return 1;
    }

    switch ( arg )
    {
    case "on":
	this_body()->set_flag(F_BIFF);
	break;

    case "off":
	this_body()->clear_flag(F_BIFF);
	break;

    default:
	notify_fail(USAGE);
	return 0;
    }

    write("Your biff mail notification flag is now " + query_setting() + "\n");
    return 1;
}