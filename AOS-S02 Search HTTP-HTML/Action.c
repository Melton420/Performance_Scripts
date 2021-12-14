Action()
{
	
	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_reg_find("Text=Advantage Shopping", 
		LAST);

lr_start_transaction("AOS-S02-01 Access AOS URL");

	web_url("{AOS_URL}", 
		"URL={AOS_URL}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer={AOS_URL}/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/category_banner_4.png", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4500", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4704", ENDITEM, 
		LAST);

	web_url("ALL", 
		"URL={AOS_URL}/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountConfigurationRequest", 
		"URL={AOS_URL}//accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer={AOS_URL}/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("categories", 
		"URL={AOS_URL}/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL={AOS_URL}/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL={AOS_URL}/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL={AOS_URL}/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={AOS_URL}/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("AOS-S02-01 Access AOS URL",LR_AUTO);

	lr_think_time(10);
	
	
	web_reg_find("Text=categoryName", 
		LAST);

lr_start_transaction("AOS-S02-02 Search");

	web_url("all_data", 
		"URL={AOS_URL}/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search_2", 
		"URL={AOS_URL}/catalog/api/v1/products/search?name=s&quantityPerEachCategory=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search_3", 
		"URL={AOS_URL}/catalog/api/v1/products/search?name=sp&quantityPerEachCategory=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data_2", 
		"URL={AOS_URL}/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={AOS_URL}/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("AOS-S02-02 Search",LR_AUTO);

	lr_think_time(10);

	
	web_reg_find("Text=productProperties", 
		LAST);

lr_start_transaction("AOS-S02-03 Random Product");

	web_url("product-page.html", 
		"URL={AOS_URL}/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={AOS_URL}/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("AOS-S02-03 Random Product",LR_AUTO);

	lr_think_time(10);


lr_start_transaction("AOS-S02-04 Add To Cart");
	
	web_url("AddToCart",
		"URL={AOS_URL}/catalog/fetchImage?image_id=4601",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		LAST);

lr_end_transaction("AOS-S02-04 Add To Cart",LR_AUTO);

	lr_think_time(10);
	
	
	web_reg_find("Text=SHOPPING_CART", 
		LAST);

lr_start_transaction("AOS-S02-05 Checkout");

	web_url("user-not-login-page.html", 
		"URL={AOS_URL}/app/order/views/user-not-login-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={AOS_URL}/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("AOS-S02-05 Checkout",LR_AUTO);

	lr_think_time(10);
	

	return 0;
}