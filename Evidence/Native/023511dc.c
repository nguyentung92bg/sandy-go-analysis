/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature.<HallStreakGuide>d__77$$MoveNext
bool Dino_BusSand_App_Meta_StreakRateFeature__HallStreakGuide_d__77__MoveNext (Dino_BusSand_App_Meta_StreakRateFeature__HallStreakGuide_d__77_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature.<HallStreakGuide>d__77$$MoveNext
   bool Dino_BusSand_App_Meta_StreakRateFeature__HallStreakGuide_d__77__MoveNext
   (Dino_BusSand_App_Meta_StreakRateFeature__HallStreakGuide_d__77_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_Meta_StreakRateFeature__HallStreakGuide_d__77__MoveNext_22511dc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000004f9bfca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    bRam0000000004f9bfca = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_02351350;
    Dino_BusSand_App_Meta_StreakRateFeature__ClearSlotGuide_224ec9c();
    if (*(int *)(*(long *)PTR_DAT_04cae9a8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_StreakRateHallBar__Refresh_21dfd10(0);
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    uVar2 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Equality_43c6f30(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    uVar2 = Dino_BusSand_App_UI_StreakRatePanel__Open_21e15b4(1,0,0);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    thunk_FUN_02134474();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar1 = UnityEngine_Object__op_Inequality_43c8dec(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
LAB_02351350:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(*(long *)(param_1 + 0x28) + 0x2c) == '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  return 0;
}

