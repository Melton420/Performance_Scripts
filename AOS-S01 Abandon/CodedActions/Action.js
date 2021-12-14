(function() {
	"use strict";

	function actionAction() {
		// Wait Math.floor(Math.random() * (26- 15) + 15) seconds
		TCS.utils.wait({
			"Interval": TCS.argType.JSArg("Math.floor(Math.random() * (26- 15) + 15)")
		});
		TCS.transaction.start("AOS-01-01 Access AOS URL");
		// Navigate to "https://www.advantageonlineshopping.com/"
		TCS.browser.navigate({
			"Location": TCS.argType.JSArg("\"https://www.advantageonlineshopping.com/\""),
			"End Event": TCS.argType.endEvent.syncNetworkCompleted
		});
		TCS.transaction.end("AOS-01-01 Access AOS URL", "Auto");
		// Wait  Math.floor(Math.random() * (26- 15) + 15) seconds
		TCS.utils.wait({
			"Interval": TCS.argType.JSArg(" Math.floor(Math.random() * (26- 15) + 15)")
		});
		// Call Function AOSItem.item
		TCS.utils.callTcFunction({
			"Library Name": "AOSItem",
			"Function Name": "item"
		});
		// Wait  Math.floor(Math.random() * (26- 15) + 15) seconds
		TCS.utils.wait({
			"Interval": TCS.argType.JSArg(" Math.floor(Math.random() * (26- 15) + 15)")
		});
		TCS.transaction.start("AOS-01-03 Add To Cart");
		// Click on ADD TO CART button
		TCS.object.tcManaged.aDDTOCARTObject.click({
			"X Coordinate": 62,
			"Y Coordinate": 24,
			"End Event": TCS.argType.endEvent.actionCompleted
		});
		TCS.transaction.end("AOS-01-03 Add To Cart", "Auto");
		// Wait  Math.floor(Math.random() * (26- 15) + 15) seconds
		TCS.utils.wait({
			"Interval": TCS.argType.JSArg(" Math.floor(Math.random() * (26- 15) + 15)")
		});
		TCS.transaction.start("AOS-01-04 Homepage");
		// Click on HOME link
		TCS.object.tcManaged.hOMEObject.click({
			"X Coordinate": 35,
			"Y Coordinate": 20,
			"End Event": TCS.argType.endEvent.syncNetworkCompleted
		});
		TCS.transaction.end("AOS-01-04 Homepage", "Auto");
	}
	actionAction();

})();