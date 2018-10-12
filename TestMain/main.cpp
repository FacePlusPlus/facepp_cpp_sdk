//
//  main.cpp
//  TestMain
//
//  Created by Li Cheng on 2018/10/12.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#include <iostream>
#include "FaceppApi.hpp"

const char * filePath = "/Users/licheng/C++Repo/Face++WebApi/Face++WebApi/leee.jpeg";

int main(int argc, const char * argv[]) {
    const char * key = "syAe75QXfQHDt9YcmC8BJAJD0mX5nwqJ";
    const char * secret = "Q23rhNN6TsA8A6TcTOHkBsu-a7hBOUEB";
    
    FaceppApi faceppApi = FaceppApi(key, secret);
    // faceppApi.detect("/Users/licheng/C++Repo/Face++WebApi/Face++WebApi/leee.jpeg");
    // faceppApi.compare(filePath, filePath);
    // faceppApi.analyze("8f70f600272e0eda9a24bcb0845b7c41", "age");
    faceppApi.beautify(filePath);
    return 0;
}
