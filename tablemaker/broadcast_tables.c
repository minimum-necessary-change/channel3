#include "broadcast_tables.h"

const uint32_t premodulated_table[864] = {
	0xbb9ddcee, 0xff9dcffc, 0xffffdcee, 0x39dffdce, 0xbdffdcef, 0xbdff9cef, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xb9dddcee, 0x9999cccc, 
	0xee77773b, 0xe77ff73b, 0xffff773b, 0x7fef73bf, 0xfee73ff7, 0xfee73ff7, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee7777bb, 0x66663333, 
	0xbb9ddcee, 0xdfb9ceff, 0xffffdcee, 0xbb9dffce, 0xb9dffdce, 0xb9fffdef, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xb9dddcce, 0x9999cccc, 
	0xee77773b, 0xee77ff73, 0xffff773b, 0xf7fe73bf, 0xffe773ff, 0x7fef7bff, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeee773bb, 0x66663333, 
	0xbb9ddcee, 0x9ff9dcef, 0xffffdcee, 0xfb9dffdc, 0xb9dffdce, 0x79dfffce, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xb99dddce, 0x9999cccc, 
	0xee77773b, 0xee773ff3, 0xffff773b, 0xe77ff73b, 0xf7ee73bf, 0x7ffe73bf, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeef7733b, 0x66663333, 
	0xbb9ddcee, 0x9dff9cef, 0xffffdcee, 0xff9dcffc, 0xfb9dffde, 0xfb9cffde, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbb9dddce, 0x9999cccc, 
	0xee77773b, 0xfee73bf7, 0xffff773b, 0xef7ff73b, 0xe7fe773b, 0xf7fef7bf, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee77773b, 0x66663333, 
	0xbb9ddcee, 0xb9dffdce, 0xffffdcee, 0xdfb9ceff, 0xfb9deffc, 0xffbdeffc, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbb9dddee, 0x9999cccc, 
	0xee77773b, 0x7fe773ff, 0xffff773b, 0xee77ff73, 0xe77ff73b, 0xe77fe739, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee77773b, 0x66663333, 
	0xbb9ddcee, 0x39dffdce, 0xffffdcee, 0x9ffbdcef, 0xffb9ceff, 0xffb9cffd, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbb9ddcee, 0x9999cccc, 
	0xee77773b, 0x77ee73bf, 0xffff773b, 0xee773ff3, 0xee77ff3b, 0xee7bff7b, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee77773b, 0x66663333, 
	0xbb9ddcee, 0xfb9cffdc, 0xffffdcee, 0xbdffdcef, 0x9ff9deff, 0xdffbdeff, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbb9ddcee, 0x9999cccc, 
	0xee77773b, 0xe7fe773b, 0xffff773b, 0xfee73bf7, 0xee77ff73, 0xde77fff3, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee77773b, 0x66663333, 
	0xbb9ddcee, 0xfb9deffc, 0xffffdcee, 0xb9dffdce, 0x9dffdcef, 0x9dff9ce7, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xb9dddcee, 0x9999cccc, 
	0xee77773b, 0xe77ff73b, 0xffff773b, 0x7fe773ff, 0xfee73ff3, 0xfee73ff7, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee77773b, 0x66663333, 
	0xbb9ddcee, 0xffb9cefd, 0xffffdcee, 0x39dffdce, 0xb9ffdcee, 0xbdffbdef, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xb9dddcee, 0x9999cccc, 
	0xee77773b, 0xee77ff7b, 0xffff773b, 0xf7fe73bf, 0xfee77bff, 0x7fe77bff, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeee777bb, 0x66663333, 
	0xbb9ddcee, 0x9ff9dcff, 0xffffdcee, 0xfb9cffde, 0xb9dffdce, 0x39dffdce, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xb9ddddce, 0x9999cccc, 
	0xee77773b, 0xee77ff73, 0xffff773b, 0xe7fe773b, 0xffef73bf, 0x7fee73ff, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeef773bb, 0x66663333, 
	0xbb9ddcee, 0x9dff9cef, 0xffffdcee, 0xfb9dcffc, 0xfb9dffce, 0xfbdeffde, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbb9dddce, 0x9999cccc, 
	0xee77773b, 0xfee73ff7, 0xffff773b, 0xe77ff73b, 0xe7fe73bf, 0xf7fef7bf, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee77773b, 0x66663333, 
	0xbb9ddcee, 0xb9dfdcee, 0xffffdcee, 0xffb9ceff, 0xfb9dffdc, 0xf79dfffc, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbb9dddce, 0x9999cccc, 
	0xee77773b, 0x7ee77bff, 0xffff773b, 0xee77ff7b, 0xe77ff73b, 0xe77ff739, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee77773b, 0x66663333, 
	0xbb9ddcee, 0x39dffdce, 0xffffdcee, 0x9ff9dcff, 0xffbdcffc, 0xffbdeffd, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbb9ddcee, 0x9999cccc, 
	0xee77773b, 0x7fee73bf, 0xffff773b, 0xee77ff73, 0xee77f73b, 0xef7fff7b, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee77773b, 0x66663333, 
	0xbb9ddcee, 0xfb9cffce, 0xffffdcee, 0x9dffdcef, 0xdff9ceff, 0xdff9ceff, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbb9ddcee, 0x9999cccc, 
	0xee77773b, 0xe7fe73bf, 0xffff773b, 0xfee73ff7, 0xee77ff73, 0xce73ff73, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee77773b, 0x66663333, 
	0xbb9ddcee, 0xfb9defdc, 0xffffdcee, 0xb9dfdcee, 0x9ffbdcef, 0x9ffbdcff, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xb9dddcee, 0x9999cccc, 
	0xee77773b, 0xe77ff739, 0xffff773b, 0x7fe77bff, 0xfef73ff3, 0xfef7bff7, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee77773b, 0x66663333, 
	0xbb9ddcee, 0xffb9cffc, 0xffffdcee, 0x39dffdce, 0xb9ffdcef, 0xbdffbcef, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xb9dddcee, 0x9999cccc, 
	0xee77773b, 0xee77f73b, 0xffff773b, 0x7fee73bf, 0xfee77bff, 0xffe73fff, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee6777bb, 0x66663333, 
	0xbb9ddcee, 0x9ff9ceff, 0xffffdcee, 0xfb9cffce, 0xb9dffdce, 0x39dffdce, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xb9dddcce, 0x9999cccc, 
	0xee77773b, 0xee77ff73, 0xffff773b, 0xe7fe73bf, 0x7fe773ff, 0x7fef7bff, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeef773bb, 0x66663333, 
	0xbb9ddcee, 0x9dfbdcef, 0xffffdcee, 0xfb9defdc, 0xbbddfdce, 0x7bdeffce, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xb99dddce, 0x9999cccc, 
	0xee77773b, 0xfee73ff3, 0xffff773b, 0xe77ff73b, 0xf7fe73bf, 0xf7fe73bf, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee77773b, 0x66663333, 
	0xbb9ddcee, 0xb9ff9cef, 0xffffdcee, 0xffb9cffc, 0xfb9dffdc, 0xfb9cffdc, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbb9dddce, 0x9999cccc, 
	0xee77773b, 0xfee73bff, 0xffff773b, 0xee77f73b, 0xe77ff73b, 0xe7fff7bd, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee77773b, 0x66663333, 
	0xbb9ddcee, 0x39dffdce, 0xffffdcee, 0x9ff9ceff, 0xff9dcffc, 0xffbdeffd, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbb9dddee, 0x9999cccc, 
	0xee77773b, 0x7fef73ff, 0xffff773b, 0xee77ff73, 0xef7ff73b, 0xef7fef3b, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee77773b, 0x66663333, 
	0xbb9ddcee, 0x3b9dfdce, 0xffffdcee, 0x9dfbdcef, 0xffb9ceff, 0xfff9ceff, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbb9ddcee, 0x9999cccc, 
	0xee77773b, 0xf7fe73bf, 0xffff773b, 0xfee73ff3, 0xee77ff73, 0xee73ff7b, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee77773b, 0x66663333, 
	0xbb9ddcee, 0xfb9cffdc, 0xffffdcee, 0xb9ffdcef, 0x9ff9dcff, 0x9ffbdeff, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbbdddcee, 0x9999cccc, 
	0xee77773b, 0xe77ff73b, 0xffff773b, 0xfee73bff, 0xee777ff3, 0xdef7bff3, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee77773b, 0x66663333, 
	0xbb9ddcee, 0xff9dcffc, 0xffffdcee, 0x39dffdce, 0xbdffdcef, 0xbdff9cef, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xb9dddcee, 0x9999cccc, 
	0xee77773b, 0xe77ff73b, 0xffff773b, 0x7fef73bf, 0xfee73ff7, 0xfee73ff7, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xee7777bb, 0x66663333, 
	0xbb9ddcee, 0xdfb9ceff, 0xffffdcee, 0xbb9dffce, 0xb9dffdce, 0xb9fffdef, 0xbbddddee, 0xbffddffe, 0xbb9dffff, 0xbffddffe, 0xffffffff, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xbffddffe, 0xb9dddcce, 0x9999cccc, 
	0xee77773b, 0xee77ff73, 0xffff773b, 0xf7fe73bf, 0xffe773ff, 0x7fef7bff, 0xeff777fb, 0xeff777fb, 0xee77ffff, 0xeff777fb, 0xffffffff, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeff777fb, 0xeee773bb, 0x66663333, 
};
