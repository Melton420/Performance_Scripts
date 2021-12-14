//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_1.inf");
	lr_start_transaction("AOS-S02-01 Access AOS URL");
	truclient_step("2", "Navigate to AOS_URL", "snapshot=Action_2.inf");
	lr_end_transaction("AOS-S02-01 Access AOS URL",0);
	truclient_step("3", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_3.inf");
	lr_start_transaction("AOS-S02-02 Search");
	truclient_step("4", "Click on element (1)", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Search textbox", "snapshot=Action_5.inf");
	truclient_step("6", "Type hp in Search Box textbox", "snapshot=Action_6.inf");
	truclient_step("7", "Press key Enter on Search Box textbox", "snapshot=Action_7.inf");
	lr_end_transaction("AOS-S02-02 Search",0);
	truclient_step("8", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_8.inf");
	lr_start_transaction("AOS-S02-03 Random Product");
	truclient_step("9", "Click on Product", "snapshot=Action_9.inf");
	lr_end_transaction("AOS-S02-03 Random Product",0);
	truclient_step("10", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_10.inf");
	lr_start_transaction("AOS-S02-04 Add To Cart");
	truclient_step("11", "Click on ADD TO CART button", "snapshot=Action_11.inf");
	lr_end_transaction("AOS-S02-04 Add To Cart",0);

	return 0;
}
