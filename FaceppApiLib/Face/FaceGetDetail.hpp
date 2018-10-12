//
//  FaceGetDetail.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef FaceGetDetail_hpp
#define FaceGetDetail_hpp

#include <stdio.h>

class FaceGetDetailApi {
public:
    void getDetail(const char *api_key ,const char *api_secret, const char *face_token);
};

#endif /* FaceGetDetail_hpp */
