SCALAR AS_MIN_RAMPING 'Minimum ramping requirement. Values are unitless. E.g.: 1 means that it is requested to have the speed to go from 0 to full power in 1 hour, 2 means it is requested to go from 0 to full power in 1/2 hour, etc.';

*Units are required to achieve full power in 15 minutes
AS_MIN_RAMPING =60/15;