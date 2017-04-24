/* Do not remove the headers from this file! see /USAGE for more info. */

inherit WANDERING_MONSTER;
inherit M_BLOCKEXITS;

void setup()
{
    set_name("дракон");
    set_id("дракон", "змей");
    set_gender(1);
    set_proper_name("дракон");
    set_in_room_desc("дракон");
    set_long("Не будите спящего дракона!");

    set_max_health(300);
    set_wander_time(5);
    set_wander_area("wiz_area");
//    call_out("start_wandering",0);
}
