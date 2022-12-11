from main import *
import unittest

class TestSignals(unittest.TestCase):
    def setup(self):
        self.path = "/home/jatomixo/Code/AdventOfCode2022/Day10/instructions.txt"
    
    def calc_signal_220(self):
        setup(self)
        signal_220 = calculate_signal(220, self.path)
        self.assertEqual(signal_220, 3960)

if __name__ == "__main__":
    unittest.main()
