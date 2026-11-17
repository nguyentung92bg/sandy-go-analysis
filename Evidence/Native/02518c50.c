/* IL2CPP: Dino.BusSand.Core.SandGrid$$Collect
int32_t Dino_BusSand_Core_SandGrid__Collect (Dino_BusSand_Core_SandGrid_o* __this, uint8_t color, int32_t minX, int32_t maxX, int32_t minY, int32_t maxY, int32_t maxRemoves, System_Collections_Generic_List_GrainPoint__o* samples, int32_t sampleStride, int32_t preferredAlong, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$Collect
   int32_t Dino_BusSand_Core_SandGrid__Collect (Dino_BusSand_Core_SandGrid_o* __this, uint8_t color,
   int32_t minX, int32_t maxX, int32_t minY, int32_t maxY, int32_t maxRemoves,
   System_Collections_Generic_List_GrainPoint__o* samples, int32_t sampleStride, int32_t
   preferredAlong, const MethodInfo* method); */

int Dino_BusSand_Core_SandGrid__Collect_2418c50
              (long param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
              int param_7,long param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uStack_80;
  
  uVar2 = param_2 & 0xff;
  if ((bRam0000000004f9cb7e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe6f0);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb7e = 1;
  }
  puVar5 = PTR_DAT_04caa200;
  if (uVar2 == 0) {
    return 0;
  }
  if (param_7 < 1) {
    return 0;
  }
  if ((param_8 != 0) && (param_9 < 1)) {
    thunk_FUN_021985a8(PTR_DAT_04cbe6f8);
    uVar11 = thunk_FUN_0216e89c();
    uVar12 = thunk_FUN_021985a8(PTR_DAT_04cbe700);
    System_ArgumentOutOfRangeException___ctor_47b7c84(uVar11,uVar12,0);
    uVar12 = thunk_FUN_021985a8(PTR_DAT_04cbe708);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar11,uVar12);
  }
  if ((((int)(param_4 | param_6) < 0) || (*(int *)(param_1 + 0x10) + -1 < param_3)) ||
     (*(int *)(param_1 + 0x14) + -1 < param_5)) {
    return 0;
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar6 = System_Math__Max_4830fc8(0,param_3,0);
  uVar7 = System_Math__Max_4830fc8(0,param_5,0);
  iVar8 = System_Math__Min_4831118(*(int *)(param_1 + 0x10) + -1,param_4,0);
  iVar9 = System_Math__Min_4831118(*(int *)(param_1 + 0x14) + -1,param_6,0);
  if (iVar8 < iVar6) {
    return 0;
  }
  if (iVar9 < (int)uVar7) {
    return 0;
  }
  lVar13 = *(long *)(param_1 + 0x50);
  if (lVar13 != 0) {
    if (*(uint *)(lVar13 + 0x18) <= (param_2 & 0xff)) {
LAB_02518f78:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    if (*(int *)(lVar13 + (ulong)uVar2 * 4 + 0x20) == 0) {
      return 0;
    }
    if (param_10 < iVar6 || iVar8 < param_10) {
      uVar14 = (iVar8 - iVar6) + 1;
    }
    else {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar10 = System_Math__Max_4830fc8(param_10 - iVar6,iVar8 - param_10,0);
      uVar14 = iVar10 << 1 | 1;
    }
    iVar10 = 0;
    while (lVar13 = *(long *)(param_1 + 0x48), lVar13 != 0) {
      if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_02518f78;
      if (((*(int *)(lVar13 + (long)(int)uVar7 * 4 + 0x20) != 0) && (0 < (int)uVar14)) &&
         (iVar10 < param_7)) {
        iVar3 = *(int *)(param_1 + 0x10);
        uVar16 = 0;
        do {
          if (param_10 < iVar6 || iVar8 < param_10) {
            uVar15 = iVar6 + uVar16;
          }
          else {
            uVar15 = uVar16 >> 1;
            if ((uVar16 & 1) != 0) {
              uVar15 = -(uVar16 + 1 >> 1);
            }
            uVar15 = uVar15 + param_10;
          }
          if ((iVar6 <= (int)uVar15) && ((int)uVar15 <= iVar8)) {
            lVar13 = *(long *)(param_1 + 0x38);
            if (lVar13 == 0) goto LAB_02518f74;
            uVar1 = uVar15 + iVar3 * uVar7;
            if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_02518f78;
            if (*(byte *)(lVar13 + (int)uVar1 + 0x20) == uVar2) {
              Dino_BusSand_Core_SandGrid__TryRemove_2417854(param_1,uVar15,uVar7);
              if (param_8 != 0) {
                iVar4 = 0;
                if (param_9 != 0) {
                  iVar4 = iVar10 / param_9;
                }
                if (iVar10 == iVar4 * param_9) {
                  uStack_80 = uStack_80 & 0xffffffff00000000 |
                              (ulong)(uVar15 & 0xffff | uVar7 << 0x10);
                  FUN_01e7b478(param_8,uStack_80,*(undefined8 *)PTR_DAT_04cbe6f0);
                }
              }
              iVar10 = iVar10 + 1;
            }
          }
          uVar16 = uVar16 + 1;
        } while (((int)uVar16 < (int)uVar14) && (iVar10 < param_7));
      }
      uVar7 = uVar7 + 1;
      if (iVar9 < (int)uVar7) {
        return iVar10;
      }
      if (param_7 <= iVar10) {
        return iVar10;
      }
    }
  }
LAB_02518f74:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

