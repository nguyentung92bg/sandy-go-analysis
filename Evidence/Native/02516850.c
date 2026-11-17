/* IL2CPP: Dino.BusSand.Core.Road$$AnyColorInBottomBand
bool Dino_BusSand_Core_Road__AnyColorInBottomBand (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_SandGrid_o* grid, uint8_t color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$AnyColorInBottomBand
   bool Dino_BusSand_Core_Road__AnyColorInBottomBand (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_SandGrid_o* grid, uint8_t color, const MethodInfo* method); */

undefined4
Dino_BusSand_Core_Road__AnyColorInBottomBand_2416850(long param_1,long param_2,byte param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  if ((bRam0000000004f9cb70 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb70 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar6 = System_Math__Min_4831118(uVar2,uVar3,0);
  if ((bRam0000000004f9cb79 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb79 = 1;
  }
  if (param_3 != 0) {
    lVar8 = *(long *)(param_2 + 0x50);
    if (lVar8 == 0) {
LAB_02517b5c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(uint *)(lVar8 + 0x18) <= (uint)param_3) {
LAB_02517b58:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    if (*(int *)(lVar8 + (ulong)(uint)param_3 * 4 + 0x20) != 0) {
      iVar4 = *(int *)(param_2 + 0x14);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar6 = System_Math__Min_4831118(iVar6 + -1,iVar4 + -1,0);
      uVar7 = System_Math__Max_4830fc8(0,0,0);
      if ((int)uVar7 <= iVar6) {
        lVar8 = *(long *)(param_2 + 0x48);
        if (lVar8 == 0) goto LAB_02517b5c;
        uVar1 = uVar7;
        if (uVar7 <= *(uint *)(lVar8 + 0x18)) {
          uVar1 = *(uint *)(lVar8 + 0x18);
        }
        do {
          if (uVar7 == uVar1) goto LAB_02517b58;
          if (*(int *)(lVar8 + (long)(int)uVar7 * 4 + 0x20) != 0) {
            uVar5 = *(uint *)(param_2 + 0x10);
            uVar9 = (ulong)uVar5;
            if (0 < (int)uVar5) {
              lVar10 = *(long *)(param_2 + 0x38);
              if (lVar10 == 0) goto LAB_02517b5c;
              uVar11 = (ulong)(uVar5 * uVar7);
              lVar12 = uVar11 << 0x20;
              do {
                if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_02517b58;
                if ((uint)*(byte *)(lVar10 + (lVar12 >> 0x20) + 0x20) == (uint)param_3) {
                  return 1;
                }
                uVar9 = uVar9 - 1;
                lVar12 = lVar12 + 0x100000000;
                uVar11 = uVar11 + 1;
              } while (uVar9 != 0);
            }
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 <= iVar6);
      }
    }
  }
  return 0;
}

