#ifndef BH1750_H_
#define BH1750_H_

typedef enum {
	BH1750_NO_ERROR,
	BH1750_ERROR,
	BH1750_TIMEOUT,
} bh1750error_t;

void bh1750_init(void);
void bh1750_stop(void);
bh1750error_t bh1750_read(uint16_t *light);

#endif /* BH1750_H_ */
