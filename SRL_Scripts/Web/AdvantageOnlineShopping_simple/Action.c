Action()
{
//testing commit change//
	lr_start_transaction("LandingPage");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.advantageonlineshopping.com", 
		"URL=http://www.advantageonlineshopping.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("main.min.js", 
		"URL=http://www.advantageonlineshopping.com/main.min.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("services.properties", 
		"URL=http://www.advantageonlineshopping.com/services.properties", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t3.inf", 
		LAST);

	web_add_header("Origin", 
		"http://www.advantageonlineshopping.com");

	web_url("Roboto-Regular-webfont.woff", 
		"URL=http://www.advantageonlineshopping.com/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/x-font-woff", 
		"Referer=http://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_header("Origin", 
		"http://www.advantageonlineshopping.com");

	web_url("Roboto-Medium-webfont.woff", 
		"URL=http://www.advantageonlineshopping.com/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/x-font-woff", 
		"Referer=http://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t5.inf", 
		LAST);

	web_add_header("Origin", 
		"http://www.advantageonlineshopping.com");

	web_url("Roboto-Light-webfont.woff", 
		"URL=http://www.advantageonlineshopping.com/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/x-font-woff", 
		"Referer=http://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("logo.png", 
		"URL=http://www.advantageonlineshopping.com/css/images/logo.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("closeDark.png", 
		"URL=http://www.advantageonlineshopping.com/css/images/closeDark.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t8.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("LandingPage", LR_AUTO);

	lr_think_time(5);
	
	lr_start_transaction("LoadConfigurations");

	web_add_auto_header("Origin", 
		"http://www.advantageonlineshopping.com");

	web_url("ALL", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ALL_2", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"content-type,soapaction");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://advantageonlineshopping.com/accountservice/GetAccountConfigurationRequest", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_custom_request("GetAccountConfigurationRequest_2", 
		"URL=http://advantageonlineshopping.com/accountservice/GetAccountConfigurationRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("GetAccountConfigurationRequest_3", 
		"URL=http://advantageonlineshopping.com/accountservice/GetAccountConfigurationRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("SOAPAction");

/*Correlation comment - Do not change!  Original value='HP H2310 In-ear Headset' Name ='products' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=products",
		"QueryString=$.[*].products[*].productName",
		"SelectAll=Yes",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);	
	
	web_url("categories", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/categories", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

/*Correlation comment - Do not change!  Original value='HP Pavilion 15z Touch Laptop' Name ='dealOfTheDay' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=dealOfTheDay",
		"QueryString=$.[0].product.productName",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/search*",
		LAST);

/*Correlation comment - Do not change!  Original value='449.99' Name ='price' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=price",
		"QueryString=$.[0].product.price",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/search*",
		LAST);

	web_url("search", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);


	web_revert_auto_header("Origin");

	web_url("popularProducts.json", 
		"URL=http://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/home-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://www.advantageonlineshopping.com");

	web_concurrent_start(NULL);

	web_url("Roboto-Bold-webfont.woff", 
		"URL=http://www.advantageonlineshopping.com/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/x-font-woff", 
		"Referer=http://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t19.inf", 
		LAST);

	web_url("arrow_right.png", 
		"URL=http://www.advantageonlineshopping.com/css/images/arrow_right.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("fetchImage", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1238", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("fetchImage_2", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1234", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t22.inf", 
		LAST);

	web_add_header("Origin", 
		"http://www.advantageonlineshopping.com");

	web_url("Roboto-Thin-webfont.woff", 
		"URL=http://www.advantageonlineshopping.com/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/x-font-woff", 
		"Referer=http://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("fetchImage_3", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1235", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("fetchImage_4", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1236", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("fetchImage_5", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1237", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("Special-offer.jpg", 
		"URL=http://www.advantageonlineshopping.com/css/images/Special-offer.jpg", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("GoUp.png", 
		"URL=http://www.advantageonlineshopping.com/css/images/GoUp.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("facebook.png", 
		"URL=http://www.advantageonlineshopping.com/css/images/facebook.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("twitter.png", 
		"URL=http://www.advantageonlineshopping.com/css/images/twitter.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("linkedin.png", 
		"URL=http://www.advantageonlineshopping.com/css/images/linkedin.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("Banner1.jpg", 
		"URL=http://www.advantageonlineshopping.com/css/images/Banner1.jpg", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("Banner2.jpg", 
		"URL=http://www.advantageonlineshopping.com/css/images/Banner2.jpg", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("Banner3.jpg", 
		"URL=http://www.advantageonlineshopping.com/css/images/Banner3.jpg", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("Popular-item3.jpg", 
		"URL=http://www.advantageonlineshopping.com/css/images/Popular-item3.jpg", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("Popular-item2.jpg", 
		"URL=http://www.advantageonlineshopping.com/css/images/Popular-item2.jpg", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("Popular-item1.jpg", 
		"URL=http://www.advantageonlineshopping.com/css/images/Popular-item1.jpg", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t37.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Origin", 
		"http://www.advantageonlineshopping.com");

	lr_think_time(5);

	web_url("attributes", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/category-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("category_banner_4.png", 
		"URL=http://www.advantageonlineshopping.com/css/images/category_banner_4.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("Filter.png", 
		"URL=http://www.advantageonlineshopping.com/css/images/Filter.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("fetchImage_6", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=4700", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("fetchImage_7", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=4600", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("fetchImage_8", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=4300", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("fetchImage_9", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=4400", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("fetchImage_10", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=4100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("fetchImage_11", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=4500", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t47.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Origin", 
		"http://www.advantageonlineshopping.com");

	lr_think_time(6);

	web_url("timestamp", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/catalog/LastUpdate/timestamp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/product-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://www.advantageonlineshopping.com");

	web_url("MostPopularComments", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/MostPopularComments", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("LoadConfigurations", LR_AUTO);

	lr_think_time(5);
	
	lr_output_message("!! - Total products available: [%s]. Deal of the day: [%s, Price: %s].", lr_eval_string("{products_count}"), lr_eval_string("{dealOfTheDay}"), lr_eval_string("{price}"));
	
	lr_start_transaction("Shopping");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%7B%22productId%22%3A23%2C%22imageUrl%22%3A%224500%22%2C%22productName%22%3A%22Logitech%20X100%20Speaker%20System%20-%20Wireless%20Speaker(s)%22%2C%22color%22%3A%7B%22code%22%3A%22414141%22%2C%22name%22%3A%22BLACK%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A282%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A49.99%7D%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_concurrent_start(NULL);

	web_url("category_banner_3.png", 
		"URL=http://www.advantageonlineshopping.com/css/images/category_banner_3.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t51.inf", 
		LAST);

	web_url("fetchImage_12", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=3100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t52.inf", 
		LAST);

	web_url("fetchImage_13", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=3200", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("fetchImage_14", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=3300", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t54.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(7);

	web_url("timestamp_2", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/catalog/LastUpdate/timestamp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("fetchImage_15", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=3302", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("fetchImage_16", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=3301", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t57.inf", 
		LAST);

	web_url("fetchImage_17", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=3303", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t58.inf", 
		LAST);

	web_concurrent_end(NULL);

	
	lr_think_time(5);
	
	web_url("MostPopularComments_2", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/MostPopularComments", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("userCart="
		"%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%7B%22productId%22%3A18%2C%22imageUrl%22%3A%223300%22%2C%22productName%22%3A%22HP%20Pro%20Tablet%20608%20G1%22%2C%22color%22%3A%7B%22code%22%3A%22414141%22%2C%22name%22%3A%22BLACK%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A491%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A479%7D%2C%7B%22productId%22%3A23%2C%22imageUrl%22%3A%224500%22%2C%22productName%22%3A%22Logitech%20X100%20Speaker%20System%20-%20Wireless%20Speaker(s)"
		"%22%2C%22color%22%3A%7B%22code%22%3A%22414141%22%2C%22name%22%3A%22BLACK%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A282%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A49.99%7D%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_concurrent_start(NULL);

	web_url("category_banner_1.png", 
		"URL=http://www.advantageonlineshopping.com/css/images/category_banner_1.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t60.inf", 
		LAST);

	web_url("fetchImage_18", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1249", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t61.inf", 
		LAST);

	web_url("fetchImage_19", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1250", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("fetchImage_20", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1700", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("fetchImage_21", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1600", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("fetchImage_22", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t65.inf", 
		LAST);

	web_url("fetchImage_23", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1200", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t66.inf", 
		LAST);

	web_url("fetchImage_24", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1300", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t67.inf", 
		LAST);

	web_url("fetchImage_25", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1245", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t68.inf", 
		LAST);

	web_url("fetchImage_26", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=11100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t69.inf", 
		LAST);

	web_url("fetchImage_27", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1800", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t70.inf", 
		LAST);

	web_url("fetchImage_28", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1400", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t71.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(6);

	web_url("timestamp_3", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/catalog/LastUpdate/timestamp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);

	web_url("fetchImage_29", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1102", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t73.inf", 
		LAST);

	web_url("MostPopularComments_3", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/MostPopularComments", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("userCart="
		"%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%7B%22productId%22%3A1%2C%22imageUrl%22%3A%221100%22%2C%22productName%22%3A%22HP%20Pavilion%2015t%20Touch%20Laptop%22%2C%22color%22%3A%7B%22code%22%3A%223683D1%22%2C%22name%22%3A%22BLUE%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A733%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A519.99%7D%2C%7B%22productId%22%3A18%2C%22imageUrl%22%3A%223300%22%2C%22productName%22%3A%22HP%20Pro%20Tablet%20608%20G1%22%2C%22color%22%3A%7B%22code%22%3A%2241"
		"4141%22%2C%22name%22%3A%22BLACK%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A491%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A479%7D%2C%7B%22productId%22%3A23%2C%22imageUrl%22%3A%224500%22%2C%22productName%22%3A%22Logitech%20X100%20Speaker%20System%20-%20Wireless%20Speaker(s)%22%2C%22color%22%3A%7B%22code%22%3A%22414141%22%2C%22name%22%3A%22BLACK%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A282%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A49.99%7D%5D%7D; DOMAIN="
		"www.advantageonlineshopping.com");

	web_concurrent_start(NULL);

	web_url("category_banner_5.png", 
		"URL=http://www.advantageonlineshopping.com/css/images/category_banner_5.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t75.inf", 
		LAST);

	web_url("fetchImage_30", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=5400", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t76.inf", 
		LAST);

	web_url("fetchImage_31", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=5300", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t77.inf", 
		LAST);

	web_url("fetchImage_32", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=5200", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t78.inf", 
		LAST);

	web_url("fetchImage_33", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=5505", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t79.inf", 
		LAST);

	web_url("fetchImage_34", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=5800", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t80.inf", 
		LAST);

	web_url("fetchImage_35", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=5700", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t81.inf", 
		LAST);

	web_url("fetchImage_36", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=5100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t82.inf", 
		LAST);

	web_url("fetchImage_37", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=5900", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t83.inf", 
		LAST);

	web_url("fetchImage_38", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=5600", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t84.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(6);

	web_url("timestamp_4", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/catalog/LastUpdate/timestamp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		LAST);

	web_url("MostPopularComments_4", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/MostPopularComments", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("userCart="
		"%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%7B%22productId%22%3A26%2C%22imageUrl%22%3A%225100%22%2C%22productName%22%3A%22Kensington%20Orbit%2072352%20Trackball%22%2C%22color%22%3A%7B%22code%22%3A%22C3C3C3%22%2C%22name%22%3A%22GRAY%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A1056%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A59.99%7D%2C%7B%22productId%22%3A1%2C%22imageUrl%22%3A%221100%22%2C%22productName%22%3A%22HP%20Pavilion%2015t%20Touch%20Laptop%22%2C%22color%22%3A%7B%22code%"
		"22%3A%223683D1%22%2C%22name%22%3A%22BLUE%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A733%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A519.99%7D%2C%7B%22productId%22%3A18%2C%22imageUrl%22%3A%223300%22%2C%22productName%22%3A%22HP%20Pro%20Tablet%20608%20G1%22%2C%22color%22%3A%7B%22code%22%3A%22414141%22%2C%22name%22%3A%22BLACK%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A491%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A479%7D%2C%7B%22productId%22%3A23%2C%22imageUrl%22%3A%22"
		"4500%22%2C%22productName%22%3A%22Logitech%20X100%20Speaker%20System%20-%20Wireless%20Speaker(s)%22%2C%22color%22%3A%7B%22code%22%3A%22414141%22%2C%22name%22%3A%22BLACK%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A282%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A49.99%7D%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_concurrent_start(NULL);

	web_url("category_banner_2.png", 
		"URL=http://www.advantageonlineshopping.com/css/images/category_banner_2.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t87.inf", 
		LAST);

	web_url("fetchImage_39", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=2200", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t88.inf", 
		LAST);

	web_url("fetchImage_40", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=2100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t89.inf", 
		LAST);

	web_url("fetchImage_41", 
		"URL=http://www.advantageonlineshopping.com/catalog/fetchImage?image_id=2400", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpg", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t90.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(4);

	web_url("timestamp_5", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/catalog/LastUpdate/timestamp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		LAST);

	web_url("MostPopularComments_5", 
		"URL=http://advantageonlineshopping.com/catalog/api/v1/MostPopularComments", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		LAST);


	lr_end_transaction("Shopping", LR_AUTO);

	return 0;
}
