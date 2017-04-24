/* Do not remove the headers from this file! see /USAGE for more info. */

inherit INDOOR_ROOM;

void setup()
{
  set_area("wiz_area");
  set_brief("Комната №1");
  set_long("Первая кириллическая комната, созданная Прулем\n\n");
  set_exits( ([
	       "south" : "Wizroom"
	       ]) );
  set_objects( ([
		 "paper2" : 1,
		 "dragon2" : 1
		 ]) );
  set_default_error("Не получилось!\n");
}

void do_listen()
{
  write ("I guess you're hearing voices.\n");
}

void arrived() {
}
