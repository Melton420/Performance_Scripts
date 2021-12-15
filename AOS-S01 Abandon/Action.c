//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************
//Hi Sandeep!

Action()
{
	truclient_step("1", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_1.inf");
	lr_start_transaction("AOS-S01-01 Access AOS URL");
	truclient_step("2", "Navigate to AOS_URL", "snapshot=Action_2.inf");
	lr_end_transaction("AOS-S01-01 Access AOS URL",0);
	truclient_step("3", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_3.inf");
	lr_start_transaction("AOS-S01-02 Go To Speakers");
	truclient_step("4", "Click on SPEAKERS Shop Now link", "snapshot=Action_4.inf");
	lr_end_transaction("AOS-S01-02 Go To Speakers",0);
	truclient_step("5", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_5.inf");
	lr_start_transaction("AOS-S01-03 Random Product");
	truclient_step("6", "Click on Product image", "snapshot=Action_6.inf");
	lr_end_transaction("AOS-S01-03 Random Product",0);
	truclient_step("7", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_7.inf");
	lr_start_transaction("AOS-S01-04 Add To Cart");
	truclient_step("8", "Click on ADD TO CART button", "snapshot=Action_8.inf");
	lr_end_transaction("AOS-S01-04 Add To Cart",0);

	return 0;
}
