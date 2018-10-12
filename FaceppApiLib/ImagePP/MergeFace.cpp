//
//  MergeFace.cpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#include "MergeFace.hpp"
#include "CurlPost.hpp"
#include <stdlib.h>
#include "curl.h"

void MergeFaceApi::mergeFace(const char *api_key, const char *api_secret, const char *template_file, const char *merge_file, const int merge_rate) {
    
    const char *URL = "https://api-cn.faceplusplus.com/imagepp/v1/mergeface";
    
    if(NULL == template_file) {
        fprintf(stderr, "\n\n-------请求失败-------\n %s \n\n", "template_file can not be empty !");
        return;
    }
    
    CurlPost curlPost = CurlPost();
    map<const char *, const char *> params;
    params.insert(map<const char *, const char *>::value_type("api_key", api_key));
    params.insert(map<const char *, const char *>::value_type("api_secret", api_secret));
    params.insert(map<const char *, const char *>::value_type("template_file", template_file));
    params.insert(map<const char *, const char *>::value_type("merge_file", merge_file));
    char str[2];
    sprintf(str, "%d", merge_rate);
    params.insert(map<const char *, const char *>::value_type("merge_rate", str));
    curlPost.doPost(URL, params);
}
