/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$get_Alive
bool Dino_BusSand_App_UI_StreakRateHallBar__get_Alive (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$get_Alive
   bool Dino_BusSand_App_UI_StreakRateHallBar__get_Alive (const MethodInfo* method); */

uint Dino_BusSand_App_UI_StreakRateHallBar__get_Alive_21df1a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_04cae9a8;
  if ((bRam0000000004f9bba4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    bRam0000000004f9bba4 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar6 = *(long *)puVar1;
  uVar7 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    lVar6 = *(long *)(lVar4 + 0xb8);
    if (*(long *)(lVar6 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(*(long *)(lVar6 + 8) + 0x2c) == '\0') {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
      }
      uVar7 = *(undefined8 *)(lVar6 + 0x10);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar2 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004fa8638 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
        bRam0000000004fa8638 = 1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar7,0);
      return (uVar3 ^ 0xffffffff) & 1;
    }
  }
  return 0;
}

