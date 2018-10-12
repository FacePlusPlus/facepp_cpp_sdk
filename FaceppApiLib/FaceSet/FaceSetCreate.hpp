//
//  FaceSetCreate.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef FaceSetCreate_hpp
#define FaceSetCreate_hpp

#include <stdio.h>

class FaceSetCreateApi {
public:
    void createFaceset(const char *api_key ,const char *api_secret,const char *name);
};

#endif /* FaceSetCreate_hpp */
