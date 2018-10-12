//
//  RecognizeText.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef RecognizeText_hpp
#define RecognizeText_hpp

#include <stdio.h>

class RecognizeTextApi {
public:
    void recognizetext(const char *api_key ,const char *api_secret,const char *filePath);
};

#endif /* RecognizeText_hpp */
