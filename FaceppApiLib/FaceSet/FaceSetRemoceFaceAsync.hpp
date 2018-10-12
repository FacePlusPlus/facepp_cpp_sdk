//
//  FaceSetRemoceFaceAsync.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef FaceSetRemoceFaceAsync_hpp
#define FaceSetRemoceFaceAsync_hpp

#include <stdio.h>

class FaceSetRemoveFaceAsync {
public:
    void removeFaceAsync(const char *api_key ,const char *api_secret,const char *faceset_token, const char* face_tokens);
};

#endif /* FaceSetRemoceFaceAsync_hpp */
