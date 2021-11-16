from minimo_recursivo import *
import unittest
import random 
class TestMinimoRecursivo(unittest.TestCase):
    def test_minimo(self):
        for n in range(1000):
            random_list = [random.randrange(-100,100,1) for n in range(7)]
            self.assertEqual(minimo(random_list),min(random_list))

# python -m unittest mitest.py


