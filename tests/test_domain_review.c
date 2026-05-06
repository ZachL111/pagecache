#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {42, 32, 26, 53};
    assert(domain_review_score(item) == 91);
    assert(strcmp(domain_review_lane(item), "hold") == 0);
    return 0;
}
