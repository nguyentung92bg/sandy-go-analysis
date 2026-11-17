/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$get_Shadow
UnityEngine_Vector4_o Dino_BusSand_App_UI_HomeBus__get_Shadow (Dino_BusSand_App_UI_HomeBus_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$get_Shadow
   UnityEngine_Vector4_o Dino_BusSand_App_UI_HomeBus__get_Shadow (Dino_BusSand_App_UI_HomeBus_o*
   __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_HomeBus__get_Shadow_22dffdc(long param_1)

{
  undefined4 uVar1;
  
  if ((*(long *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 0x50) == 3)) {
    if (cRam0000000004f9bba3 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb0780);
      cRam0000000004f9bba3 = '\x01';
    }
    uVar1 = **(undefined4 **)(*(long *)PTR_DAT_04cb0780 + 0xb8);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    Dino_BusSand_App_UI_HomeToonRig__get_Lift_22f57e0(*(long *)(param_1 + 0x18),0);
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return uVar1;
}

