/* IL2CPP: Dino.BusSand.App.UI.BoosterFly.<>c$$<get_InFlight>b__7_0
bool Dino_BusSand_App_UI_BoosterFly___c___get_InFlight_b__7_0 (Dino_BusSand_App_UI_BoosterFly___c_o* __this, UnityEngine_RectTransform_o* r, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x044c6fd8) */
/* WARNING: Removing unreachable block (ram,0x044c7008) */
/* WARNING: Removing unreachable block (ram,0x044c701c) */
/* WARNING: Removing unreachable block (ram,0x044c7020) */
/* WARNING: Removing unreachable block (ram,0x044c6fdc) */
/* IL2CPP: Dino.BusSand.App.UI.BoosterFly.<>c$$<get_InFlight>b__7_0
   bool Dino_BusSand_App_UI_BoosterFly___c___get_InFlight_b__7_0
   (Dino_BusSand_App_UI_BoosterFly___c_o* __this, UnityEngine_RectTransform_o* r, const MethodInfo*
   method); */

bool Dino_BusSand_App_UI_BoosterFly___c___get_InFlight_b__7_0_21805a4
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b921 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b921 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa8637 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
    bRam0000000004fa8637 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if ((bRam0000000004fa85fa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004fa85fa = 1;
  }
  if (param_2 == 0) {
    bVar2 = true;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar2 = *(long *)(param_2 + 0x10) == 0;
  }
  return bVar2;
}

