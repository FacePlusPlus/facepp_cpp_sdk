//
//  FaceCompare.cpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#include "FaceCompare.hpp"
#include "CurlPost.hpp"
#include "curl.h"

void FaceCompareApi::compare(const char *api_key,const char *api_secret, const char *file1,const char *file2) {
    
    const char *URL = "https://api-cn.faceplusplus.com/facepp/v3/compare";
    
    if(NULL == file1) {
        fprintf(stderr, "\n\n-------请求失败-------\n %s \n\n", "file_1 can not be empty !");
        return;
    }
    
    if(NULL == file2) {
        fprintf(stderr, "\n\n-------请求失败-------\n %s \n\n", "file_2 can not be empty !");
        return;
    }

    CurlPost curlPost = CurlPost();
    map<const char *, const char *> params;
    params.insert(map<const char *, const char *>::value_type("api_key", api_key));
    params.insert(map<const char *, const char *>::value_type("api_secret", api_secret));
    params.insert(map<const char *, const char *>::value_type("image_file1", file1));
    params.insert(map<const char *, const char *>::value_type("image_file2", file2));
    curlPost.doPost(URL, params);
}
