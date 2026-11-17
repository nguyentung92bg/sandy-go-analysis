/* IL2CPP: Dino.BusSand.View.SuctionBeams$$Remove
void Dino_BusSand_View_SuctionBeams__Remove (Dino_BusSand_View_SuctionBeams_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.SuctionBeams$$Remove
   void Dino_BusSand_View_SuctionBeams__Remove (Dino_BusSand_View_SuctionBeams_o* __this, int32_t
   id, const MethodInfo* method); */

undefined8 Dino_BusSand_View_SuctionBeams__Remove_23ecd8c(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  undefined4 uStack_64;
  
  if ((bRam0000000004f9caa5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbdc88);
    bRam0000000004f9caa5 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar8 = *(long *)PTR_DAT_04cbdc88;
  if (*(long *)(lVar6 + 0x10) != 0) {
    plVar15 = *(long **)(lVar6 + 0x30);
    lVar9 = *(long *)(*(long *)(lVar8 + 0x20) + 0xc0);
    uStack_64 = param_2;
    if (plVar15 == (long *)0x0) {
      uVar5 = System_Int32__GetHashCode_482d748(&uStack_64,*(undefined8 *)(lVar9 + 400));
    }
    else {
      lVar9 = *(long *)(lVar9 + 8);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0216b470(lVar9);
      }
      lVar10 = *plVar15;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar9) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_03538890;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_0216b7a4(plVar15,lVar9,1);
LAB_03538890:
      uVar5 = (*(code *)*puVar7)(plVar15,param_2,puVar7[1]);
    }
    lVar9 = *(long *)(lVar6 + 0x10);
    if (lVar9 == 0) {
LAB_03538ad4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar16 = *(uint *)(lVar9 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar16 != 0) {
      iVar4 = (int)uVar5 / (int)uVar16;
    }
    uVar3 = uVar5 - iVar4 * uVar16;
    if (uVar16 <= uVar3) {
LAB_03538ad8:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    uVar16 = *(int *)(lVar9 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar16) {
      uVar12 = 0xffffffff;
      do {
        uVar2 = uStack_64;
        lVar9 = *(long *)(lVar6 + 0x18);
        if (lVar9 == 0) goto LAB_03538ad4;
        if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_03538ad8;
        lVar9 = lVar9 + 0x20;
        puVar18 = (uint *)(lVar9 + (ulong)uVar16 * 0x18);
        uVar17 = (ulong)uVar16;
        if (*puVar18 == uVar5) {
          plVar15 = *(long **)(lVar6 + 0x30);
          if (plVar15 == (long *)0x0) {
            plVar15 = (long *)FUN_02772e00(*(undefined8 *)
                                            (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x18));
            if (plVar15 == (long *)0x0) goto LAB_03538ad4;
            uVar13 = (**(code **)(*plVar15 + 0x1b8))
                               (plVar15,*(undefined4 *)(lVar9 + uVar17 * 0x18 + 8),uStack_64,
                                *(undefined8 *)(*plVar15 + 0x1c0));
          }
          else {
            lVar10 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar9 + uVar17 * 0x18 + 8);
            if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_0216b470(lVar10);
            }
            lVar11 = *plVar15;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar10) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_035389e4;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_0216b7a4(plVar15,lVar10,0);
LAB_035389e4:
            uVar13 = (*(code *)*puVar7)(plVar15,uVar1,uVar2,puVar7[1]);
          }
          if ((uVar13 & 1) != 0) {
            if ((int)(uint)uVar12 < 0) {
              lVar8 = *(long *)(lVar6 + 0x10);
              if (lVar8 == 0) goto LAB_03538ad4;
              if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_03538ad8;
              *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar9 + uVar17 * 0x18 + 4) + 1;
            }
            else {
              lVar8 = *(long *)(lVar6 + 0x18);
              if (lVar8 == 0) goto LAB_03538ad4;
              if (*(uint *)(lVar8 + 0x18) <= (uint)uVar12) goto LAB_03538ad8;
              *(undefined4 *)(lVar8 + uVar12 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar9 + uVar17 * 0x18 + 4);
            }
            uVar2 = *(undefined4 *)(lVar6 + 0x24);
            lVar9 = lVar9 + uVar17 * 0x18;
            *puVar18 = 0xffffffff;
            *(undefined4 *)(lVar9 + 4) = uVar2;
            *(undefined8 *)(lVar9 + 0x10) = 0;
            *(uint *)(lVar6 + 0x24) = uVar16;
            *(ulong *)(lVar6 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(lVar6 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(lVar6 + 0x28) + 1);
            return 1;
          }
        }
        uVar12 = (ulong)uVar16;
        uVar16 = *(uint *)(lVar9 + uVar17 * 0x18 + 4);
      } while (-1 < (int)uVar16);
    }
  }
  return 0;
}

