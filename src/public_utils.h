/*
 * Copyright 2014 The Imaging Source Europe GmbH
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TCAM_PUBLIC_UTILS_H
#define TCAM_PUBLIC_UTILS_H

#include <stdint.h>

#include <stddef.h> /* size_t */

#include "base_types.h"
#include <vector>

namespace tcam
{

const char* fourcc_to_description (uint32_t fourcc);


uint32_t description_to_fourcc (const char* description);


/**
 * @param format - format description that shall be used
 * @param n_buffers - number of buffers that shall be allocated
 * @return pointer to the first image buffer
 */
struct tcam_image_buffer* allocate_image_buffers (const struct tcam_video_format* format,
                                                  size_t n_buffers);

/**
 * @param ptr - pointer to the first buffer that shall be freed
 * @param n_buffers - number of buffers that shall be freed
 */
void free_image_buffers (struct tcam_image_buffer* ptr, size_t n_buffer);


/**
 *
 */
    std::vector<struct tcam_image_size> get_standard_resolutions (const struct tcam_image_size& min,
                                                                  const struct tcam_image_size& max);

} /* namespace tcam */

#endif /* TCAM_PUBLIC_UTILS_H */
