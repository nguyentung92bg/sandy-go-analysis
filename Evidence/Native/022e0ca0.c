/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$SliderComp
UnityEngine_UI_Slider_o* Dino_BusSand_App_UI_StreakRateHallBar__SliderComp (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$SliderComp
   UnityEngine_UI_Slider_o* Dino_BusSand_App_UI_StreakRateHallBar__SliderComp (const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_UI_StreakRateHallBar__SliderComp_21e0ca0(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cae9a8;
  if ((bRam0000000004f9bba8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf0c0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04caf118);
    bRam0000000004f9bba8 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
  if (lVar2 != 0) {
    lVar2 = UnityEngine_Transform__Find_43d4bec(lVar2,*(undefined8 *)PTR_DAT_04caf118,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (lVar2 != 0) {
      lVar4 = *(long *)PTR_DAT_04caf0c0;
      lVar5 = *(long *)(lVar4 + 0x38);
      if (lVar5 == 0) {
        FUN_0216b4cc(lVar4);
        lVar5 = *(long *)(lVar4 + 0x38);
      }
      uStack_28 = 0;
      uVar6 = *(undefined8 *)(lVar5 + 8);
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = System_Type__GetTypeFromHandle_483f0b4(uVar6,0);
      UnityEngine_Component__GetComponentFastPath_43bcf7c(lVar2,uVar6,&uStack_28,0);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

