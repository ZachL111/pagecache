#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {77, 80, 24, 15, 5};
    assert(score_signal(signal_case_1) == 136);
    assert(strcmp(classify_signal(signal_case_1), "review") == 0);
    Signal signal_case_2 = {86, 103, 18, 5, 11};
    assert(score_signal(signal_case_2) == 269);
    assert(strcmp(classify_signal(signal_case_2), "accept") == 0);
    Signal signal_case_3 = {71, 94, 9, 16, 6};
    assert(score_signal(signal_case_3) == 168);
    assert(strcmp(classify_signal(signal_case_3), "review") == 0);
    return 0;
}
