.data
.pushsection .hyp.reloc, "a"
.global __hyp_section_.hyp.idmap.text
.word 0
.reloc 0, R_AARCH64_PREL32, __hyp_section_.hyp.idmap.text + 0xab0
.word 0
.reloc 4, R_AARCH64_PREL32, __hyp_section_.hyp.idmap.text + 0xab8
.global __hyp_section_.hyp.text
.word 0
.reloc 8, R_AARCH64_PREL32, __hyp_section_.hyp.text + 0x2fe8
.word 0
.reloc 12, R_AARCH64_PREL32, __hyp_section_.hyp.text + 0x2ff0
.global __hyp_section_.hyp.rodata
.word 0
.reloc 16, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x150
.word 0
.reloc 20, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x158
.word 0
.reloc 24, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x160
.word 0
.reloc 28, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x168
.word 0
.reloc 32, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x170
.word 0
.reloc 36, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x178
.word 0
.reloc 40, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x180
.word 0
.reloc 44, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x188
.word 0
.reloc 48, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x190
.word 0
.reloc 52, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x198
.word 0
.reloc 56, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x1a0
.word 0
.reloc 60, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x1a8
.word 0
.reloc 64, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x1b0
.word 0
.reloc 68, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x1b8
.word 0
.reloc 72, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x1c0
.word 0
.reloc 76, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x1c8
.word 0
.reloc 80, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x1d0
.word 0
.reloc 84, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x1d8
.word 0
.reloc 88, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x1e0
.word 0
.reloc 92, R_AARCH64_PREL32, __hyp_section_.hyp.rodata + 0x1e8
.popsection
