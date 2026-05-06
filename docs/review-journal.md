# Review Journal

The repository goal stays the same: simulate page-cache eviction and dirty-page flushing. This note explains the added review angle.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its systems programming focus without claiming live deployment or external usage.

## Cases

- `baseline`: `allocation pressure`, score 91, lane `hold`
- `stress`: `dirty state`, score 175, lane `ship`
- `edge`: `guard slack`, score 163, lane `ship`
- `recovery`: `layout drift`, score 166, lane `ship`
- `stale`: `allocation pressure`, score 147, lane `ship`

## Note

A future change should add new cases before it changes the scoring rule.
