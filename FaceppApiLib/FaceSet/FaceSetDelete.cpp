//
//  FaceSetDelete.cpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#include "FaceSetDelete.hpp"
#include "CurlPost.hpp"
#include "curl.h"

void FaceSetDeleteApi::detelte(const char *api_key, const char *api_secret, const char *faceset_token, int check_empty) {
    
    const char *URL = "https://api-cn.faceplusplus.com/facepp/v3/faceset/delete";
    
    CurlPost curlPost = CurlPost();
    map<const char *, const char *> params;
    params.insert(map<const char *, const char *>::value_type("api_key", api_key));
    params.insert(map<const char *, const char *>::value_type("api_secret", api_secret));
    params.insert(map<const char *, const char *>::value_type("faceset_token", faceset_token));
    char str[1];
    sprintf(str, "%d", check_empty);
    params.insert(map<const char *, const char *>::value_type("check_empty", str));
    curlPost.doPost(URL, params);
}
