/* generated HAL header file - do not edit */
#ifndef HAL_DATA_H_
#define HAL_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "common_data.h"
#include "r_glcdc.h"
            #include "r_display_api.h"
#include "r_sci_uart.h"
            #include "r_uart_api.h"
FSP_HEADER
#define GLCDC_CFG_LAYER_1_ENABLE (true)
            #define GLCDC_CFG_LAYER_2_ENABLE (false)

            #define GLCDC_CFG_CLUT_ENABLE (false)

            #define GLCDC_CFG_CORRECTION_GAMMA_ENABLE_R       (false)
            #define GLCDC_CFG_CORRECTION_GAMMA_ENABLE_G       (false)
            #define GLCDC_CFG_CORRECTION_GAMMA_ENABLE_B       (false)

            /* Display on GLCDC Instance. */
            extern const display_instance_t g_display0;
            extern display_runtime_cfg_t g_display0_runtime_cfg_fg;
            extern display_runtime_cfg_t g_display0_runtime_cfg_bg;

            /** Access the GLCDC instance using these structures when calling API functions directly (::p_api is not used). */
            extern glcdc_instance_ctrl_t g_display0_ctrl;
            extern const display_cfg_t g_display0_cfg;

            #if ((GLCDC_CFG_CORRECTION_GAMMA_ENABLE_R | GLCDC_CFG_CORRECTION_GAMMA_ENABLE_G | GLCDC_CFG_CORRECTION_GAMMA_ENABLE_B) && GLCDC_CFG_COLOR_CORRECTION_ENABLE && !(false))
            extern display_gamma_correction_t g_display0_gamma_cfg;
            #endif

            #if GLCDC_CFG_CLUT_ENABLE
            extern display_clut_cfg_t g_display0_clut_cfg_glcdc;
            #endif

            #ifndef _ra_port_display_callback
            void _ra_port_display_callback(display_callback_args_t * p_args);
            #endif

            #define DISPLAY_IN_FORMAT_16BITS_RGB565_0
            #if defined (DISPLAY_IN_FORMAT_32BITS_RGB888_0) || defined (DISPLAY_IN_FORMAT_32BITS_ARGB8888_0)
            #define DISPLAY_BITS_PER_PIXEL_INPUT0 (32)
            #elif defined (DISPLAY_IN_FORMAT_16BITS_RGB565_0) || defined (DISPLAY_IN_FORMAT_16BITS_ARGB1555_0) || defined (DISPLAY_IN_FORMAT_16BITS_ARGB4444_0)
            #define DISPLAY_BITS_PER_PIXEL_INPUT0 (16)
            #elif defined (DISPLAY_IN_FORMAT_CLUT8_0)
            #define DISPLAY_BITS_PER_PIXEL_INPUT0 (8)
            #elif defined (DISPLAY_IN_FORMAT_CLUT4_0)
            #define DISPLAY_BITS_PER_PIXEL_INPUT0 (4)
            #else
            #define DISPLAY_BITS_PER_PIXEL_INPUT0 (1)
            #endif
            #define DISPLAY_HSIZE_INPUT0                 (480)
            #define DISPLAY_VSIZE_INPUT0                 (272)
            #define DISPLAY_BUFFER_STRIDE_BYTES_INPUT0   (((DISPLAY_HSIZE_INPUT0 * DISPLAY_BITS_PER_PIXEL_INPUT0 + 0x1FF) >> 9) << 6)
            #define DISPLAY_BUFFER_STRIDE_PIXELS_INPUT0  ((DISPLAY_BUFFER_STRIDE_BYTES_INPUT0 * 8) / DISPLAY_BITS_PER_PIXEL_INPUT0)
            #if GLCDC_CFG_LAYER_1_ENABLE
            extern uint8_t fb_background[1][DISPLAY_BUFFER_STRIDE_BYTES_INPUT0 * DISPLAY_VSIZE_INPUT0];
            #endif

            #define DISPLAY_IN_FORMAT_16BITS_RGB565_1
            #if defined (DISPLAY_IN_FORMAT_32BITS_RGB888_1) || defined (DISPLAY_IN_FORMAT_32BITS_ARGB8888_1)
            #define DISPLAY_BITS_PER_PIXEL_INPUT1 (32)
            #elif defined (DISPLAY_IN_FORMAT_16BITS_RGB565_1) || defined (DISPLAY_IN_FORMAT_16BITS_ARGB1555_1) || defined (DISPLAY_IN_FORMAT_16BITS_ARGB4444_1)
            #define DISPLAY_BITS_PER_PIXEL_INPUT1 (16)
            #elif defined (DISPLAY_IN_FORMAT_CLUT8_1)
            #define DISPLAY_BITS_PER_PIXEL_INPUT1 (8)
            #elif defined (DISPLAY_IN_FORMAT_CLUT4_1)
            #define DISPLAY_BITS_PER_PIXEL_INPUT1 (4)
            #else
            #define DISPLAY_BITS_PER_PIXEL_INPUT1 (1)
            #endif
            #define DISPLAY_HSIZE_INPUT1                 (480)
            #define DISPLAY_VSIZE_INPUT1                 (272)
            #define DISPLAY_BUFFER_STRIDE_BYTES_INPUT1   (((DISPLAY_HSIZE_INPUT1 * DISPLAY_BITS_PER_PIXEL_INPUT1 + 0x1FF) >> 9) << 6)
            #define DISPLAY_BUFFER_STRIDE_PIXELS_INPUT1  ((DISPLAY_BUFFER_STRIDE_BYTES_INPUT1 * 8) / DISPLAY_BITS_PER_PIXEL_INPUT1)
            #if GLCDC_CFG_LAYER_2_ENABLE
            extern uint8_t fb_foreground[2][DISPLAY_BUFFER_STRIDE_BYTES_INPUT1 * DISPLAY_VSIZE_INPUT1];
            #endif
/** UART on SCI Instance. */
            extern const uart_instance_t      g_uart7;

            /** Access the UART instance using these structures when calling API functions directly (::p_api is not used). */
            extern sci_uart_instance_ctrl_t     g_uart7_ctrl;
            extern const uart_cfg_t g_uart7_cfg;
            extern const sci_uart_extended_cfg_t g_uart7_cfg_extend;

            #ifndef user_uart7_callback
            void user_uart7_callback(uart_callback_args_t * p_args);
            #endif
void hal_entry(void);
void g_hal_init(void);
FSP_FOOTER
#endif /* HAL_DATA_H_ */
