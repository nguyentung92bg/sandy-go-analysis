/* IL2CPP: Dino.BusSand.Core.SandGrid$$AnyColorInRows
bool Dino_BusSand_Core_SandGrid__AnyColorInRows (Dino_BusSand_Core_SandGrid_o* __this, uint8_t color, int32_t minY, int32_t maxY, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$AnyColorInRows
   bool Dino_BusSand_Core_SandGrid__AnyColorInRows (Dino_BusSand_Core_SandGrid_o* __this, uint8_t
   color, int32_t minY, int32_t maxY, const MethodInfo* method); */

undefined4
Dino_BusSand_Core_SandGrid__AnyColorInRows_24179f8
          (long param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  if ((bRam0000000004f9cb79 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb79 = 1;
  }
  if (param_2 != 0) {
    lVar5 = *(long *)(param_1 + 0x50);
    if (lVar5 == 0) {
LAB_02517b5c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(uint *)(lVar5 + 0x18) <= (uint)param_2) {
LAB_02517b58:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    if (*(int *)(lVar5 + (ulong)(uint)param_2 * 4 + 0x20) != 0) {
      iVar3 = *(int *)(param_1 + 0x14);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar3 = System_Math__Min_4831118(param_4,iVar3 + -1,0);
      uVar4 = System_Math__Max_4830fc8(0,param_3,0);
      if ((int)uVar4 <= iVar3) {
        lVar5 = *(long *)(param_1 + 0x48);
        if (lVar5 == 0) goto LAB_02517b5c;
        uVar1 = uVar4;
        if (uVar4 <= *(uint *)(lVar5 + 0x18)) {
          uVar1 = *(uint *)(lVar5 + 0x18);
        }
        do {
          if (uVar4 == uVar1) goto LAB_02517b58;
          if (*(int *)(lVar5 + (long)(int)uVar4 * 4 + 0x20) != 0) {
            uVar2 = *(uint *)(param_1 + 0x10);
            uVar6 = (ulong)uVar2;
            if (0 < (int)uVar2) {
              lVar7 = *(long *)(param_1 + 0x38);
              if (lVar7 == 0) goto LAB_02517b5c;
              uVar8 = (ulong)(uVar2 * uVar4);
              lVar9 = uVar8 << 0x20;
              do {
                if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_02517b58;
                if ((uint)*(byte *)(lVar7 + (lVar9 >> 0x20) + 0x20) == (uint)param_2) {
                  return 1;
                }
                uVar6 = uVar6 - 1;
                lVar9 = lVar9 + 0x100000000;
                uVar8 = uVar8 + 1;
              } while (uVar6 != 0);
            }
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 <= iVar3);
      }
    }
  }
  return 0;
}

