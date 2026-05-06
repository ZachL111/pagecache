# Pagecache Walkthrough

This note is the quickest way to read the extra review model in `pagecache`.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | allocation pressure | 91 | hold |
| stress | dirty state | 175 | ship |
| edge | guard slack | 163 | ship |
| recovery | layout drift | 166 | ship |
| stale | allocation pressure | 147 | ship |

Start with `stress` and `baseline`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

If `baseline` becomes less cautious without a clear reason, I would inspect the drag input first.
