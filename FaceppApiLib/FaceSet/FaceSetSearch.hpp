//
//  FaceSetSearch.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef FaceSetSearch_hpp
#define FaceSetSearch_hpp

#include <stdio.h>

class FaceSetSearch {
public:
    void search(const char *api_key ,const char *api_secret,const char *filePath, const char *faceset_token);
};

#endif /* FaceSetSearch_hpp */
