#ifndef LV_CONF_H
#define LV_CONF_H

#define LV_COLOR_DEPTH 16
#define LV_COLOR_16_SWAP 0

/* Enable only what we need to reduce build time/size */
#define LV_USE_LOG 0

/* Fonts */
#define LV_FONT_MONTSERRAT_20 1
#define LV_FONT_MONTSERRAT_42 0

/* Enable DMA-friendly draw buf alignment if needed */
#define LV_DRAW_BUF_ALIGN 4

#endif /* LV_CONF_H */
