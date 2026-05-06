# pagecache

`pagecache` explores systems programming with a small C codebase and local fixtures. The technical goal is to simulate page-cache eviction and dirty-page flushing.

## Why This Exists

The project exists to keep a narrow engineering decision visible and testable. For this repo, that decision is how allocation pressure and guard slack should influence a review result.

## Pagecache Review Notes

`stress` and `baseline` are the cases worth reading first. They show the optimistic and cautious ends of the fixture.

## Capabilities

- `fixtures/domain_review.csv` adds cases for allocation pressure and dirty state.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/pagecache-walkthrough.md` walks through the case spread.
- The C code includes a review path for `dirty state` and `allocation pressure`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Implementation Shape

The repository has two validation layers: the original compact policy fixture and the domain review fixture. They are separate so one can change without hiding failures in the other.

The added C path is deliberately direct, with fixtures doing most of the explaining.

## Local Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Verification

That command is also the regression path. It verifies the domain cases and catches mismatches between the CSV, metadata, and code.

## Roadmap

This remains a local project with deterministic fixtures. It does not depend on credentials, hosted services, or live data. Future work should add richer malformed inputs before widening the public API.
