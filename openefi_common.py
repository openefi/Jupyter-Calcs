# To add a new cell, type '# %%'
# To add a new markdown cell, type '# %% [markdown]'
# %%
import numpy as np


def get_default_gpio_cfg():
    return {
        "VREF": 3300,
        "ADC_MAX_VALUE": 4095,
        "R1": 10000
    }

def convert_to_resistance(ADC_Value):
    cfg = get_default_gpio_cfg()
    return ((cfg["R1"] * cfg["ADC_MAX_VALUE"]) / ADC_Value) / cfg["R1"]

def converto_to_volt(ADC_Value):
    cfg = get_default_gpio_cfg()
    return ( (ADC_Value *( cfg["VREF"] )/ cfg["ADC_MAX_VALUE"]))

def sample_adc_values():
    cfg = get_default_gpio_cfg()
    return  range(1,cfg["ADC_MAX_VALUE"],15)
