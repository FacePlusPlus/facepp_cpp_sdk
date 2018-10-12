//
//  FaceSetUserId.cpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#include "FaceSetUserId.hpp"
#include "CurlPost.hpp"
#include "curl.h"

void FaceSetUserIdApi::setUserId(const char *api_key, const char *api_secret, const char *face_token, const char *user_id) {
    
    const char *URL = "https://api-cn.faceplusplus.com/facepp/v3/face/setuserid";
    
    if(NULL == face_token) {
        fprintf(stderr, "\n\n-------请求失败-------\n %s \n\n", "face_token can not be empty !");
        return;
    }

    CurlPost curlPost = CurlPost();
    map<const char *, const char *> params;
    params.insert(map<const char *, const char *>::value_type("api_key", api_key));
    params.insert(map<const char *, const char *>::value_type("api_secret", api_secret));
    params.insert(map<const char *, const char *>::value_type("face_token", face_token));
    params.insert(map<const char *, const char *>::value_type("user_id", user_id));
    curlPost.doPost(URL, params);
}
