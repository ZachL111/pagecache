# Pagecache Failure Table

| Case | Focus | Expected Lane |
| --- | --- | --- |
| g001 | allocation pressure | ship |
| g002 | dirty state | ship |
| g003 | guard slack | watch |
| g004 | layout drift | watch |
| g005 | allocation pressure | ship |
| g006 | dirty state | ship |
| g007 | guard slack | ship |
| g008 | layout drift | watch |
| g009 | allocation pressure | watch |
| g010 | dirty state | ship |
| g011 | guard slack | hold |
| g012 | layout drift | ship |

Use this table when a verifier failure is hard to read from the raw CSV.
