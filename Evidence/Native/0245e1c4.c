/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_CurrentLevel
int32_t Dino_BusSand_Cheat_CheatManager__get_CurrentLevel (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_CurrentLevel
   int32_t Dino_BusSand_Cheat_CheatManager__get_CurrentLevel (const MethodInfo* method); */

int Dino_BusSand_Cheat_CheatManager__get_CurrentLevel_235e1c4(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_DAT_04caba50;
  if ((bRam0000000004f9c764 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c764 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  lVar6 = *(long *)puVar2;
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
  if ((uVar5 & 1) != 0) {
    if (lVar4 == 0) {
LAB_0245e354:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar4 + 0x38) != '\0') {
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(lVar4 + 0x20) == 0) goto LAB_0245e354;
        iVar1 = *(int *)(*(long *)(lVar4 + 0x20) + 0x28);
        if (0 < iVar1) {
          return iVar1;
        }
      }
    }
  }
  puVar3 = PTR_DAT_04cabaf8;
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x10) == 0) {
    return 1;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c107 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c107 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return *(int *)(lVar4 + 0x14);
}

