SCALAR X_RAMP 'Hourly ramping limit of transmission lines. A value of 1 means that it takes 1 hour to achieve full power. A value of 2 means it takes 0.5 hours, etc.';

*Lines are assumed to be able to achieve full power in 20 minutes
X_RAMP =60/20;
