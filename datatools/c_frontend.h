#ifndef C_FRONTEND_H
#define C_FRONTEND_H

#include "types.hpp"

void get_segmentation(
        size_t          sz,
        size_t          sy,
        size_t          sx,
        const float*    aff_data,
        uint32_t*       seg_data,
        float           tz,
        float           ty,
        float           tx);

void dilate_segmentation(
        size_t          sz,
        size_t          sy,
        size_t          sx,
        uint32_t*       seg_data,
        uint32_t*       dst_data,
        uint32_t        k);

void get_self_touch(
        size_t          sz,
        size_t          sy,
        size_t          sx,
        uint32_t*       seg_data,
        uint32_t*       dst_data,
        uint8_t*        out_data,
        uint32_t        k);

void create_border(
        size_t          sz,
        size_t          sy,
        size_t          sx,
        uint32_t*       seg_data,
        uint32_t*       out_data);

void make_affinity(
        size_t          sz,
        size_t          sy,
        size_t          sx,
        const uint32_t* seg_data,
        float*          aff_data);

void merge_regions(
        const uint32_t* rg_data,
        uint32_t*       seg_data,
        size_t          nvoxels,
        const float*    dend_values,
        const uint32_t* dend_pairs,
        size_t          nedges,
        float           threshold);

#endif
