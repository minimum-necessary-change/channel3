#include "broadcast_tables.h"

uint32_t premodulated_table[918] = {
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xbdff9cef, 0xdff9deff, 0xffbdeffd, 0xfb9cffde, 0x39dffdce, 0xbb9dffff, 0xbdffdcef, 0xffffffff, 0xbffffdff, 0xffffdfff, 0xfffdffff, 0xfbdffffe, 0xbbffffef, 0xb9dddcee, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xfee73ff7, 0xee77ff73, 0xef7fff3b, 0xf7fef7bf, 0x7fef73ff, 0xee77ffff, 0xfee73ff7, 0xffffffff, 0xfff7ffff, 0xfef7fffb, 0xef7fff7b, 0xfffff7bf, 0xffff7fff, 0xee677333, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xb9fffdef, 0x9fffdcef, 0xfff9ceff, 0xff9deffc, 0xfbdfffce, 0xbb9dffff, 0xb9fffdef, 0xffffffff, 0xbffffdef, 0xbfffdeff, 0xfffddfff, 0xffbdffff, 0xfbdffffe, 0xb9dddcce, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0x7fef7bff, 0xfef73ff7, 0xee77ff73, 0xe77ff73b, 0xf7fe73bf, 0xee77ffff, 0xffef7bff, 0xffffffff, 0xffff7fff, 0xfef7ffff, 0xef7ffffb, 0xefffffbf, 0xfffff7ff, 0xeee773bb, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0x39dffdce, 0xbdfffdef, 0x9ffbdeff, 0xffb9cfff, 0xfb9dffdc, 0xbb9dffff, 0xbbdffdce, 0xffffffff, 0xfbdffffe, 0xbffffdef, 0xffffdeff, 0xfffdffff, 0xfffdfffe, 0xb99dddce, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xfffe73bf, 0xffe77bff, 0xfef7bff3, 0xee7fff7b, 0xe7fff73b, 0xee77ffff, 0xffff73bf, 0xffffffff, 0xffff77ff, 0xffff7fff, 0xfef7ffff, 0xef7fff7b, 0xfffff7bf, 0xe667733b, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xfb9cffde, 0x39dffdce, 0xbdff9cef, 0xdff9deff, 0xffbdeffd, 0xbb9dffff, 0xfb9dffde, 0xffffffff, 0xfbdffffe, 0xfbffffef, 0xbffffdef, 0xffffdfff, 0xfffdffff, 0xbb9dddce, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xe7fef7bf, 0x7fef73ff, 0xfee73ff7, 0xee77ff73, 0xef7fff3b, 0xee77ffff, 0xe7fff7bf, 0xffffffff, 0xfffff7bf, 0xffff7fff, 0xfff77fff, 0xfef7fffb, 0xef7fff7b, 0xe677733b, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xff9deffc, 0xfbdfffde, 0xb9fffdef, 0x9fffdcef, 0xfff9ceff, 0xbb9dffff, 0xff9deffc, 0xffffffff, 0xffbdffff, 0xfbdffffe, 0xbffffdef, 0xbfffdfff, 0xffffdfff, 0xbb9ddcce, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xe77ff73b, 0xf7fe73bf, 0x7fef7bff, 0xfee73ff7, 0xee77ff73, 0xee77ffff, 0xe77ff73b, 0xffffffff, 0xeffffffb, 0xfffff7ff, 0xffff7fff, 0xfef7ffff, 0xeffffffb, 0xe677773b, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xffb9cfff, 0xfb9dffdc, 0x7bdfffce, 0xbdfffdef, 0x9ffbdeff, 0xbb9dffff, 0xffb9cfff, 0xffffffff, 0xfffdffff, 0xfffdfffe, 0xfbdffffe, 0xbffffdef, 0xffffdeff, 0xbb9dccee, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xee7fff7b, 0xe7fff73b, 0xfffe73bf, 0xffe77bff, 0xfef7bff3, 0xee77ffff, 0xee7fff7b, 0xffffffff, 0xef7fff7b, 0xeffff7bf, 0xffff77ff, 0xffff7fff, 0xfef7ffff, 0xee77773b, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xdffbdeff, 0xffbdeffd, 0xfb9cffde, 0x39dffdce, 0xbdff9cef, 0xbb9dffff, 0xdffbdeff, 0xffffffff, 0xffffdfff, 0xfffdffff, 0xfbdffffe, 0xfbffffef, 0xbffffdef, 0xbb99dcee, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xee77fff3, 0xef7fff3b, 0xe7fef7bf, 0x7fef73ff, 0xfee73fff, 0xee77ffff, 0xee77fff3, 0xffffffff, 0xfef7fffb, 0xef7fff7b, 0xfffff7bf, 0xffff7fff, 0xfff77fff, 0xee777733, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0x9dffdcef, 0xfff9ceff, 0xffbdeffc, 0xfbdfffde, 0xb9fffdef, 0xbb9dffff, 0x9fffdcef, 0xffffffff, 0xbfffdfff, 0xffffdfff, 0xffbdffff, 0xfbdffffe, 0xbffffdef, 0xb9dddcee, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xfee73ff7, 0xee77ff73, 0xe77ff73b, 0xf7fe73bf, 0x7fef7bff, 0xee77ffff, 0xfef73ff7, 0xffffffff, 0xfff7ffff, 0xfffffffb, 0xeffffffb, 0xfffff7bf, 0xffff7fff, 0xee677733, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xbdfffdef, 0x9ffbdcff, 0xffb9cfff, 0xfb9dfffc, 0x7bdfffce, 0xbb9dffff, 0xbdfffdef, 0xffffffff, 0xbffffdef, 0xffffdeff, 0xfffdffff, 0xfffdfffe, 0xfbdffffe, 0xb9dddcce, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xffe77bff, 0xfef7bff3, 0xee7fff7b, 0xe77ff73b, 0xf7fe73bf, 0xee77ffff, 0xffe77bff, 0xffffffff, 0xffff7fff, 0xfef7ffff, 0xef7fff7b, 0xeffff7bf, 0xffff77ff, 0xeee773bb, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0x39dffdce, 0xbdff9cef, 0xdffbdeff, 0xffbdcffd, 0xfb9cffde, 0xbb9dffff, 0xb9dffdce, 0xffffffff, 0xfbffffee, 0xbffffdef, 0xffffdfff, 0xfffdffff, 0xffdffffe, 0xb99ddcce, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0x7fef73ff, 0xfee73fff, 0xfe77fff3, 0xef7fff3b, 0xe7fef7bf, 0xee77ffff, 0xffef73ff, 0xffffffff, 0xffff7fff, 0xfff77fff, 0xfef7ffff, 0xef7fff7b, 0xfffff7bf, 0xeee773bb, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xfbdeffde, 0xb9dffdce, 0x9dffdcef, 0xdff9ceff, 0xffbdeffc, 0xbb9dffff, 0xfbdfffde, 0xffffffff, 0xfbdffffe, 0xbffffdef, 0xbfffdfff, 0xffffdfff, 0xffbdffff, 0xb99dddce, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xf7fe77bf, 0x7fef7bff, 0xfee73ff7, 0xee77ff73, 0xe77ff73b, 0xee77ffff, 0xf7fe77bf, 0xffffffff, 0xfffff7bf, 0xffff7fff, 0xfff7ffff, 0xfefffffb, 0xefffff7b, 0xe677733b, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xfb9dfffc, 0x7bdfffce, 0xb9fffdef, 0x9ffbdcff, 0xffb9cfff, 0xbb9dffff, 0xfb9dfffc, 0xffffffff, 0xfffdfffe, 0xfbdffffe, 0xbffffdef, 0xffffdeff, 0xfffddfff, 0xbb9dddce, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xe77ff73b, 0xf7fe73bf, 0xffe77bff, 0xfef7bff7, 0xee77ff7b, 0xee77ffff, 0xe77ff73b, 0xffffffff, 0xeffff7bf, 0xfffff7ff, 0xffff7fff, 0xfef7ffff, 0xef7fff7b, 0xe677773b, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xffbdcffd, 0xfb9cffde, 0x39dffdce, 0xbdff9cef, 0xdffbdeff, 0xbb9dffff, 0xffbdcffd, 0xffffffff, 0xfffdffff, 0xffdffffe, 0xfbffffee, 0xbffffdef, 0xffffdfff, 0xbb9dccee, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xef7fff7b, 0xe7fff7bf, 0x7fef73ff, 0xfee73fff, 0xfe77fff3, 0xee77ffff, 0xef7fff7b, 0xffffffff, 0xef7fff7b, 0xfffff7bf, 0xffff7fff, 0xfff77fff, 0xfef7ffff, 0xee77773b, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xdff9ceff, 0xffbdeffc, 0xfb9effde, 0xb9dffdce, 0x9dffdcef, 0xbb9dffff, 0xfff9deff, 0xffffffff, 0xffffdfff, 0xffbdffff, 0xfbdffffe, 0xbffffdef, 0xbfffddff, 0xbb99dcee, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xee77ff73, 0xef7ff73b, 0xf7fef7bf, 0x7fef7bff, 0xfee73ff7, 0xee77ffff, 0xee77ff73, 0xffffffff, 0xfefffffb, 0xefffff7b, 0xfffff7bf, 0xffff7fff, 0xfff7ffff, 0xee777733, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0x9ffbdcff, 0xffb9cfff, 0xff9dfffc, 0x7bdfffce, 0xb9fffdef, 0xbb9dffff, 0x9fffdcff, 0xffffffff, 0xffffdeff, 0xfffddfff, 0xffbdfffe, 0xfbdffffe, 0xbffffdef, 0xb9dddcee, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xfef7bff7, 0xee77ff7b, 0xe77ff73b, 0xf7fe73bf, 0xffe77bff, 0xee77ffff, 0xfef7bff7, 0xffffffff, 0xfef7ffff, 0xef7ffffb, 0xeffff7bf, 0xfffff7ff, 0xffff7fff, 0xee677733, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xbdff9cef, 0x9ffbdeff, 0xffbdcffd, 0xfb9cffde, 0x39dffdce, 0xbb9dffff, 0xbdffdcef, 0xffffffff, 0xbffffdef, 0xffffdeff, 0xfffdffff, 0xffdffffe, 0xfbdfffee, 0xb9dddcce, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xfee73fff, 0xfe77fff3, 0xef7fff7b, 0xe7fff7bf, 0x7fef73ff, 0xee77ffff, 0xffe77fff, 0xffffffff, 0xffff7fff, 0xfef7ffff, 0xef7fff7b, 0xfffff7bf, 0xffff7fff, 0xee6773bb, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xb9dffdce, 0x9dffdcef, 0xdff9deff, 0xffbdeffc, 0xfb9cffde, 0xbb9dffff, 0xb9dffdce, 0xffffffff, 0xbffffdef, 0xbffffdff, 0xffffdfff, 0xfffdffff, 0xfbdffffe, 0xb9dddcce, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0x7fef7bff, 0xfee73ff7, 0xee77ff73, 0xef7ff73b, 0xf7fef7bf, 0xee77ffff, 0x7fef7bff, 0xffffffff, 0xffff7fff, 0xfff7ffff, 0xfef7fffb, 0xefffff7b, 0xfffff7bf, 0xeee773bb, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0x7bdfffce, 0xb9fffdef, 0x9fffdcff, 0xffb9ceff, 0xff9dfffc, 0xbb9dffff, 0xfbdfffce, 0xffffffff, 0xfbdffffe, 0xbffffdef, 0xbfffdeff, 0xfffddfff, 0xffbdfffe, 0xb99dddce, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xf7fe73bf, 0x7fef7bff, 0xfef7bff7, 0xee77ff7b, 0xe77ff73b, 0xee77ffff, 0xf7fe73bf, 0xffffffff, 0xfffff7ff, 0xffff7fff, 0xfef7ffff, 0xef7ffffb, 0xeffff7bf, 0xe667733b, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xfb9dffdc, 0x39dffdce, 0xbdffbcef, 0x9ffbdeff, 0xffbdcffd, 0xbb9dffff, 0xfb9dffde, 0xffffffff, 0xffddfffe, 0xfbdfffee, 0xbffffdef, 0xffffdeff, 0xfffdffff, 0xbb9dddce, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xe7fff73f, 0x7ffe73bf, 0xffe73bff, 0xfef7fff3, 0xef7fff7b, 0xee77ffff, 0xe7fff7bf, 0xffffffff, 0xfffff7bf, 0xffff7fff, 0xffff7fff, 0xfef7ffff, 0xef7fff7b, 0xe677773b, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xffbdeffd, 0xfb9cffde, 0x39dffdce, 0xbdffdcef, 0xdff9deff, 0xbb9dffff, 0xffbdeffd, 0xffffffff, 0xfffdffff, 0xfbdffffe, 0xbbffffef, 0xbffffdff, 0xffffdfff, 0xbb9dccce, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xef7ff73b, 0xf7fef7bf, 0x7fef73ff, 0xfee73ff7, 0xee77ff73, 0xee77ffff, 0xef7ff73b, 0xffffffff, 0xef7fff7b, 0xfffff7bf, 0xffff7fff, 0xfff7ffff, 0xfef7fffb, 0xe677773b, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xfff9ceff, 0xff9deffc, 0xfbdfffce, 0xb9fffdef, 0x9fffdcef, 0xbb9dffff, 0xfff9ceff, 0xffffffff, 0xfffddfff, 0xffbdffff, 0xfbdffffe, 0xbffffdef, 0xbfffdeff, 0xbb99ccee, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xee77ff7b, 0xe77ff73b, 0xf7fe73bf, 0x7fef7bff, 0xfef7bff7, 0xee77ffff, 0xee77ff7b, 0xffffffff, 0xef7ffffb, 0xefffffbf, 0xfffff7ff, 0xffff7fff, 0xfef7ffff, 0xee777733, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0x9ffbdeff, 0xffb9cffd, 0xfb9dffdc, 0x39dffdce, 0xbdfffcef, 0xbb9dffff, 0x9ffbdeff, 0xffffffff, 0xffffdeff, 0xfffdffff, 0xffddfffe, 0xfbdffffe, 0xbffffdef, 0xb999dcee, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xfef7fff3, 0xef7fff7b, 0xe7fff73f, 0xfffe73bf, 0xffe77bff, 0xee77ffff, 0xfef7fff3, 0xffffffff, 0xfef7ffff, 0xef7fff7b, 0xfffff7bf, 0xffff77ff, 0xffff7fff, 0xee777733, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xbdff9cef, 0xdff9deff, 0xffbdeffd, 0xfb9cffde, 0x39dffdce, 0xbb9dffff, 0xbdffdcef, 0xffffffff, 0xbffffdff, 0xffffdfff, 0xfffdffff, 0xfbdffffe, 0xbbffffef, 0xb9dddcee, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xfee73ff7, 0xee77ff73, 0xef7fff3b, 0xf7fef7bf, 0x7fef73ff, 0xee77ffff, 0xfee73ff7, 0xffffffff, 0xfff7ffff, 0xfef7fffb, 0xef7fff7b, 0xfffff7bf, 0xffff7fff, 0xee677333, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xb9fffdef, 0x9fffdcef, 0xfff9ceff, 0xff9deffc, 0xfbdfffce, 0xbb9dffff, 0xb9fffdef, 0xffffffff, 0xbffffdef, 0xbfffdeff, 0xfffddfff, 0xffbdffff, 0xfbdffffe, 0xb9dddcce, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0x7fef7bff, 0xfef73ff7, 0xee77ff73, 0xe77ff73b, 0xf7fe73bf, 0xee77ffff, 0xffef7bff, 0xffffffff, 0xffff7fff, 0xfef7ffff, 0xef7ffffb, 0xefffffbf, 0xfffff7ff, 0xeee773bb, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0x39dffdce, 0xbdfffdef, 0x9ffbdeff, 0xffb9cfff, 0xfb9dffdc, 0xbb9dffff, 0xbbdffdce, 0xffffffff, 0xfbdffffe, 0xbffffdef, 0xffffdeff, 0xfffdffff, 0xfffdfffe, 0xb99dddce, 0x9999cccc, 
	0xee77773b, 0xeff777fb, 0xffff773b, 0xfffe73bf, 0xffe77bff, 0xfef7bff3, 0xee7fff7b, 0xe7fff73b, 0xee77ffff, 0xffff73bf, 0xffffffff, 0xffff77ff, 0xffff7fff, 0xfef7ffff, 0xef7fff7b, 0xfffff7bf, 0xe667733b, 0x66663333, 
	0xbb9ddcee, 0xbbfddfee, 0xffffdcee, 0xfb9cffde, 0x39dffdce, 0xbdff9cef, 0xdff9deff, 0xffbdeffd, 0xbb9dffff, 0xfb9dffde, 0xffffffff, 0xfbdffffe, 0xfbffffef, 0xbffffdef, 0xffffdfff, 0xfffdffff, 0xbb9dddce, 0x9999cccc, 
};
