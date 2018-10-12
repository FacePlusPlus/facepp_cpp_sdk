//
//  FaceSetAddFaceAsync.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef FaceSetAddFaceAsync_hpp
#define FaceSetAddFaceAsync_hpp

#include <stdio.h>

class FaceSetAddFaceAsyncApi {
public:
    void addFaceAsync(const char *api_key ,const char *api_secret,const char *faceset_token, const char* face_tokens);
};

#endif /* FaceSetAddFaceAsync_hpp */
