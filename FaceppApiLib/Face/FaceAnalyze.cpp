//
//  FaceAnalyze.cpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#include "FaceAnalyze.hpp"
#include "CurlPost.hpp"
#include "curl.h"

void FaceAnalyzeApi::analyze(const char *api_key, const char *api_secret, const char *face_tokens, const char *return_attributes) {
    
    const char *URL = "https://api-cn.faceplusplus.com/facepp/v3/face/analyze";
    
    if(NULL == face_tokens) {
        fprintf(stderr, "\n\n-------请求失败-------\n %s \n\n", "face_tokens can not be empty !");
        return;
    }
    
    CurlPost curlPost = CurlPost();
    map<const char *, const char *> params;
    params.insert(map<const char *, const char *>::value_type("api_key", api_key));
    params.insert(map<const char *, const char *>::value_type("api_secret", api_secret));
    params.insert(map<const char *, const char *>::value_type("face_tokens", face_tokens));
    params.insert(map<const char *, const char *>::value_type("return_attributes", return_attributes));
    
    curlPost.doPost(URL, params);
}
