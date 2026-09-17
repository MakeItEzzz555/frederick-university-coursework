# ACSC372 — System programming

Small independent exercises; historical source is preserved. Academic year is unestablished. Semester placement follows the migration evidence, not the publication machine or file timestamps.

## Contents

| Folder | Work |
| --- | --- |
| [Assignments/String-Menu](Assignments/String-Menu/) | acsc372/Assignment |
| [Exam-Practice/Finals-Revision](Exam-Practice/Finals-Revision/) | acsc372/Finals_Revision |
| [Labs/Lab-03](Labs/Lab-03/) | acsc372/lab03 |
| [Labs/Lab-06](Labs/Lab-06/) | acsc372-system-programming/lab6 |
| [Labs/Lab-07](Labs/Lab-07/) | acsc372-system-programming/lab7 |
| [Revision/Temperature-Conversion](Revision/Temperature-Conversion/) | acsc372/Revision-Lab-Test-2 |

## Tools and run notes

Shell units run with Bash; temperature conversion needs `bc`. File-type and line-display scripts take path arguments. Final2025Q2B writes/truncates `numbers.txt` in the current directory; use a disposable working directory.

Compile C files individually, for example `cc -std=c11 Labs/Lab-06/Lab6Ex1.c -o lab6ex1`, and run from the directory containing a copy of `input.txt`. Lab6Ex2 temporarily changes a byte and restores it on normal completion; Filehole creates/truncates its output file. Lab7 uses fork/pipe/wait. `echoall.c` prints environment values; keep experiment output private and use a clean environment.

Earlier compilation/syntax or limited smoke checks are recorded in the archival reports. This migration verifies byte preservation, organization, privacy and repository completeness; it makes no new claim that all interactive behavior was tested.
