
class CfgPatches {
    class AllInArmaTerrainPack {
        units[] = {};
        weapons[] = {};
        requiredVersion = "3.3.2";
        requiredAddons[] = {"Misc_E"};
    };
};

class Extended_Init_EventHandlers {
	class Hedgehog {
		class ADDON {
			init = "[_this] call ace_cargo_fnc_initObject";
		};
	};
};

class CfgVehicles {
  class Hedgehog;
  class Hedgehog_EP1: Hedgehog {
      ace_cargo_size = 1;
      ace_cargo_canLoad = 1;
	  
	  ace_dragging_canCarry = 0;
      ace_dragging_canDrag = 1;
      ace_dragging_dragPosition[] = {0,1.1,0.092};
      ace_dragging_dragDirection = 180;	  
	  init = "[_this] call ace_cargo_fnc_initObject;[_this] call ace_dragging_fnc_initObject;"; 

  };
  class Hedgehog_GA: Hedgehog {
      ace_cargo_size = 1;
      ace_cargo_canLoad = 1;
	  
	  ace_dragging_canCarry = 0;
      ace_dragging_canDrag = 1;
      ace_dragging_dragPosition[] = {0,1.1,0.092};
      ace_dragging_dragDirection = 180;	  
	  init = "[_this] call ace_cargo_fnc_initObject;[_this] call ace_dragging_fnc_initObject;"; 

  };
};
