//
//  FaceSetRemove.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef FaceSetRemove_hpp
#define FaceSetRemove_hpp

#include <stdio.h>

class FaceSetRemoveApi {
public:
    void removeFace(const char *api_key, const char *api_secret, const char *faceset_token, const char *face_tokens);
};

#endif /* FaceSetRemove_hpp */
