//
//  FaceSetSearch.cpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#include "FaceSetSearch.hpp"
#include "CurlPost.hpp"
#include "curl.h"

void FaceSetSearch::search(const char *api_key, const char *api_secret, const char *filePath, const char *faceset_token) {
    
    const char *URL = "https://api-cn.faceplusplus.com/facepp/v3/search";
    
    if(NULL == filePath) {
        fprintf(stderr, "\n\n-------请求失败-------\n %s \n\n", "file path can not be empty !");
        return;
    }
    
    CurlPost curlPost = CurlPost();
    map<const char *, const char *> params;
    params.insert(map<const char *, const char *>::value_type("api_key", api_key));
    params.insert(map<const char *, const char *>::value_type("api_secret", api_secret));
    params.insert(map<const char *, const char *>::value_type("image_file", filePath));
    params.insert(map<const char *, const char *>::value_type("faceset_token", faceset_token));
    curlPost.doPost(URL, params);
}

