/* IL2CPP: Dino.BusSand.Core.SandGrid$$PullConverging
bool Dino_BusSand_Core_SandGrid__PullConverging (Dino_BusSand_Core_SandGrid_o* __this, int32_t x, int32_t y, int32_t so, int32_t ti, int32_t dir, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$PullConverging
   bool Dino_BusSand_Core_SandGrid__PullConverging (Dino_BusSand_Core_SandGrid_o* __this, int32_t x,
   int32_t y, int32_t so, int32_t ti, int32_t dir, const MethodInfo* method); */

undefined4
Dino_BusSand_Core_SandGrid__PullConverging_2418b1c
          (long param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  
  puVar4 = PTR_DAT_04caa200;
  if ((bRam0000000004f9cb7c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb7c = 1;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar5 = System_Math__Max_4830fc8(uVar3,1,0);
  if ((0 < iVar5) && (-1 < param_2 + param_6)) {
    iVar7 = 2;
    do {
      if (*(int *)(param_1 + 0x10) <= param_6 + param_2) {
        return 0;
      }
      lVar6 = *(long *)(param_1 + 0x38);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar1 = param_6 + param_4 + param_2;
      if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      if (*(char *)(lVar6 + (int)uVar1 + 0x20) != '\0') {
        Dino_BusSand_Core_SandGrid__Move_24189fc
                  (param_1,param_6 + param_4 + param_2,param_5,param_3 + 1,param_3);
        return 1;
      }
      if (iVar5 < iVar7) {
        return 0;
      }
      iVar2 = param_6 * 2 + param_2;
      param_2 = param_2 + param_6;
      iVar7 = iVar7 + 1;
    } while (-1 < iVar2);
  }
  return 0;
}

