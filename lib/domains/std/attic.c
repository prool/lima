/* Do not remove the headers from this file! see /USAGE for more info. */

#include <mudlib.h>
inherit ROOM;

create() {
    room::create();

    set_brief("Attic");
    set_long("This is the attic of the wizard hall.  Not much here yet :-)");
    set_exits( ([
		 "touchwood": "#A hollow voice mocks 'Fool'.\n",
		 "down" : "/domains/std/wizroom.c"
    ]) );
    set_hidden_exits( "touchwood" );
    set_default_exit( "There are tales of mighty wizards who walk through walls, but unfortunately\nthese are but tales, and without foundation.  Exits to the east, south, and\nwest may prove more fruitful.\n");
    set_objects( ([
	   STAIRS : ({ 0, "/domains/std/wizroom" }),
	   "/domains/std/magic_flame" : 1
    ]) );
}

