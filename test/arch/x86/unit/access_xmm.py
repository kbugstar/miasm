#! /usr/bin/env python2
"""Test getter and setter for XMM registers (128 bits)"""

from miasm2.analysis.machine import Machine

# Jitter engine doesn't matter, use the always available 'python' one
myjit = Machine("x86_32").jitter("python")

# Test basic access (get)
assert myjit.cpu.XMM0 == 0

# Test set
myjit.cpu.XMM1 = 0x00112233445566778899aabbccddeeffL

# Ensure set has been correctly handled
assert myjit.cpu.XMM1 == 0x00112233445566778899aabbccddeeffL
