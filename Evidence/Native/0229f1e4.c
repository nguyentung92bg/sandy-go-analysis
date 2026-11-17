/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerHallButton$$get_Alive
bool Dino_BusSand_App_UI_ClimbTowerHallButton__get_Alive (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerHallButton$$get_Alive
   bool Dino_BusSand_App_UI_ClimbTowerHallButton__get_Alive (const MethodInfo* method); */

uint Dino_BusSand_App_UI_ClimbTowerHallButton__get_Alive_219f1e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_04cae6e8;
  if ((bRam0000000004f9ba12 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae6e8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ba12 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar6 = *(long *)puVar1;
  uVar8 = **(undefined8 **)(lVar4 + 0xb8);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar5 & 1) != 0) {
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    plVar7 = *(long **)(lVar4 + 0xb8);
    if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(*plVar7 + 0x2c) == '\0') {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        plVar7 = *(long **)(*(long *)puVar2 + 0xb8);
      }
      lVar4 = plVar7[1];
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
      uVar3 = UnityEngine_Object__CompareBaseObjects_43c6f94(lVar4,0);
      return (uVar3 ^ 0xffffffff) & 1;
    }
  }
  return 0;
}

