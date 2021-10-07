#pragma once

#define EYES 6

class DiceThrows {
	public:
		int throw_dice(void);
		int histogram(int scale);
	private:
    		int throw_results[EYES] = { 0 };
};
