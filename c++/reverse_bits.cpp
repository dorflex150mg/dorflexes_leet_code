class Solution {
#define SIZE    4
public:
    uint32_t reverseBits(uint32_t n) {
        uint8_t *ptr = (uint8_t *) malloc(SIZE);
        uint8_t *cpy = (uint8_t *) malloc(SIZE);
        memcpy(ptr, &n, SIZE);
        for(int i = 0; i < SIZE; i++) {
            cpy[(SIZE - 1) -i] = (ptr[i] * 0x0202020202ULL & 0x010884422010ULL) % 0x3ff;
        }
        uint32_t *uptr = (uint32_t *) cpy;
        return *uptr;
    }
}
