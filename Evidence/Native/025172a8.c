/* IL2CPP: Dino.BusSand.Core.SandGrid$$.ctor
void Dino_BusSand_Core_SandGrid___ctor (Dino_BusSand_Core_SandGrid_o* __this, int32_t width, int32_t height, int32_t mode, int32_t seed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.SandGrid$$.ctor
   void Dino_BusSand_Core_SandGrid___ctor (Dino_BusSand_Core_SandGrid_o* __this, int32_t width,
   int32_t height, int32_t mode, int32_t seed, const MethodInfo* method); */

void Dino_BusSand_Core_SandGrid___ctor_24172a8
               (long param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long *plVar10;
  
  puVar3 = PTR_DAT_04cbe6e0;
  puVar2 = PTR_DAT_04caec70;
  puVar1 = PTR_DAT_04caaad0;
  if ((bRam0000000004f9cb77 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaad0);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cbe6e0);
    bRam0000000004f9cb77 = 1;
  }
  uVar5 = _UNK_00e69a40;
  uVar4 = *(undefined8 *)puVar2;
  *(undefined4 *)(param_1 + 0x24) = 2;
  *(undefined8 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1c) = 0x3dcccccd3dcccccd;
  uVar5 = FUN_02133068(uVar4,0x41);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  thunk_FUN_02134474();
  *(undefined4 *)(param_1 + 0x60) = 1;
  System_Object___ctor_4870e5c(param_1,0);
  uVar5 = *(undefined8 *)puVar1;
  *(int *)(param_1 + 0x10) = param_2;
  *(uint *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  uVar5 = FUN_02133068(uVar5,param_3 * param_2);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  thunk_FUN_02134474();
  uVar5 = FUN_02133068(*(undefined8 *)puVar3,param_3 * param_2);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  thunk_FUN_02134474();
  uVar5 = FUN_02133068(*(undefined8 *)puVar2,param_3);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  thunk_FUN_02134474();
  lVar6 = FUN_02133068(*(undefined8 *)puVar2,param_3);
  plVar10 = (long *)(param_1 + 0x58);
  *plVar10 = lVar6;
  thunk_FUN_02134474(plVar10,lVar6);
  if (0 < (int)param_3) {
    lVar6 = *plVar10;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
    uVar8 = (ulong)param_3;
    puVar9 = (undefined4 *)(lVar6 + 0x20);
    do {
      if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar8 = uVar8 - 1;
      uVar7 = uVar7 - 1;
      *puVar9 = 2;
      puVar9 = puVar9 + 1;
    } while (uVar8 != 0);
  }
  *(uint *)(param_1 + 100) = param_5 * -0x61c8864f | 1;
  return;
}

