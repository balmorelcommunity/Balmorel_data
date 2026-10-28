* Regions with an EV fleet but no Monte Carlo charging profiles of their own use another region's
* profiles: EV_PROFILE_PROXY(region, source). Applied in addons/EV/bb4/EV_pardefine.inc.
* The Western Balkans have no profiles; they use Croatia's (a neighbour, same time zone, the
* closest car use among the profiled countries).
EV_PROFILE_PROXY('AL','HR') = YES;
EV_PROFILE_PROXY('BA','HR') = YES;
EV_PROFILE_PROXY('ME','HR') = YES;
EV_PROFILE_PROXY('MK','HR') = YES;
EV_PROFILE_PROXY('RS','HR') = YES;
