//
//  FaceSetUserId.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef FaceSetUserId_hpp
#define FaceSetUserId_hpp

#include <stdio.h>

class FaceSetUserIdApi {
public:
    void setUserId(const char *api_key ,const char *api_secret,const char *face_token, const char *user_id);
};

#endif /* FaceSetUserId_hpp */
