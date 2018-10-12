//
//  HumanBodyDetect.cpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#include "HumanBodyDetect.hpp"
#include "CurlPost.hpp"
#include "curl.h"

void HumanBodyDetectApi::detectBody(const char *api_key, const char *api_secret, const char *filePath, const char *return_attributes) {
    
    const char *URL = "https://api-cn.faceplusplus.com/humanbodypp/v1/detect";
    
    if(NULL == filePath) {
        fprintf(stderr, "\n\n-------请求失败-------\n %s \n\n", "file path can not be empty !");
        return;
    }
    
    CurlPost curlPost = CurlPost();
    map<const char *, const char *> params;
    params.insert(map<const char *, const char *>::value_type("api_key", api_key));
    params.insert(map<const char *, const char *>::value_type("api_secret", api_secret));
    params.insert(map<const char *, const char *>::value_type("image_file", filePath));
    params.insert(map<const char *, const char *>::value_type("return_attributes", return_attributes));
    curlPost.doPost(URL, params);
}
