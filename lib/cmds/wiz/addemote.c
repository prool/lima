/* Do not remove the headers from this file! see /USAGE for more info. */

#include <mudlib.h>
#include <daemons.h>

inherit M_INPUT;
inherit CMD;

mixed parse_rule(string str)
{
    switch (str)
    {
    case "":
    case 0:
    case "0":
        return "";

    case "1":
    case "all":
        return "STR";

    default:
        return str;
    }
}

private nomask void got_message(string verb, string rule, string str)
{
    string part2;

    if ( str == "" )
    {
	write("Addemote aborted.\n");
	return;
    }

    sscanf(str, "%s && %s", str, part2);
    SOUL_D->add_emote(verb, rule, str, part2);
}

private nomask void got_rule(string verb, string str)
{
    string rule = parse_rule(str);

    if ( rule == "." )
    {
	write("Addemote aborted.\n");
        return;
    }

    write("Message: ");
    modal_simple((: got_message, verb, rule :));
}

nomask private void main(string str)
{
    string rule = 0;
    string verb = str;

    if (!str)
    {
	write("addemote verb\n");
	return;
    }

    sscanf(verb, "%s %s", verb, rule);
    if ( !rule )
    {
	write("(type '.' to abort entry)\nRule: ");
	modal_simple((: got_rule, verb :));
    }
    else
    {
        rule = parse_rule(rule);
	write("Message: ");
	modal_simple((: got_message, verb, rule :));
    }
}
