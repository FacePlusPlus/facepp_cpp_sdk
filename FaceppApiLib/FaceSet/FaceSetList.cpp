//
//  FaceSetList.cpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#include "FaceSetList.hpp"
#include "CurlPost.hpp"
#include "curl.h"

void FaceSetListApi::getFaceSetList(const char *api_key, const char *api_secret) {
    
    const char *URL = "https://api-cn.faceplusplus.com/facepp/v3/faceset/getfacesets";
    
    CurlPost curlPost = CurlPost();
    map<const char *, const char *> params;
    params.insert(map<const char *, const char *>::value_type("api_key", api_key));
    params.insert(map<const char *, const char *>::value_type("api_secret", api_secret));
    curlPost.doPost(URL, params);
}
