/*
 * facelbp - Face detection using Multi-scale Block Local Binary Pattern algorithm
 *
 * Copyright (C) 2013 Keith Mok <ek9852@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _COMMON_H
#define _COMMON_H

#ifdef ANDROID

#define LOG_TAG __FILE__
#include <cutils/log.h>

#else
#include <stdio.h>
#include <string.h>
#include <errno.h>
#ifdef DEBUG
#define LOGW(fmt, ...) fprintf(stderr, "[WARNING] (%s:%d: errno: %s) " fmt "\n", __FILE__, __LINE__, strerror(errno), ##__VA_ARGS__)
#define LOGD(fmt, ...) fprintf(stderr, "[DEBUG] (%s:%d) " fmt "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#else
#define LOGW(fmt, ...) do{ } while ( false )
#define LOGD(fmt, ...) do{ } while ( false )
#endif
#define LOGE(fmt, ...) fprintf(stderr, "[ERROR] (%s:%d: errno: %s) " fmt "\n", __FILE__, __LINE__, strerror(errno), ##__VA_ARGS__)

#endif

#endif
