// Prool;s test cmd
// making from cpu command

inherit CMD;

void main(){

write("\n%^RED%^тест от Пруля\n\n");
//write(all_inventory(environment(this_body())));

    foreach(object ob in all_inventory(environment(this_body()))){
	write(ob->short());
	//write(ob);
	write("\n");

	//ob->eventGet(this_player());
}

write("\n");

}
