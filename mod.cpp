name = "GA Mission ATOL";
picture = "mod.paa";


class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = "3.3.2";
        requiredAddons[] = {"misc_e"};
    };
};

class CfgVehicles {
  class Hedgehog;
  class Hedgehog_EP1: Hedgehog {
      ace_cargo_size = 1; // 1 = small, 2 = large
      ace_cargo_canLoad = 1;
  };
  class Hedgehog_GA: Hedgehog {
      ace_cargo_size = 1; // 1 = small, 2 = large
      ace_cargo_canLoad = 1;
  };
};
