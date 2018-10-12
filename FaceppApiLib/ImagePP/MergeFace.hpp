//
//  MergeFace.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef MergeFace_hpp
#define MergeFace_hpp

#include <stdio.h>

class  MergeFaceApi {
public:
    void mergeFace(const char *api_key ,const char *api_secret,const char *template_file, const char *merge_file, const int merge_rate);
};

#endif /* MergeFace_hpp */
