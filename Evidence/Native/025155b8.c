/* IL2CPP: Dino.BusSand.Core.Road$$MoveOnLoop
void Dino_BusSand_Core_Road__MoveOnLoop (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_RoadBus_o* b, double pos, double np, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$MoveOnLoop
   void Dino_BusSand_Core_Road__MoveOnLoop (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_RoadBus_o* b, double pos, double np,
   System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method); */

long Dino_BusSand_Core_Road__MoveOnLoop_24155b8
               (double param_1,double param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  uint uVar16;
  long *plVar17;
  int iVar18;
  uint uVar19;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar4 = param_3;
  if ((bRam0000000004f9cb64 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae218);
    lVar4 = FUN_02132f7c(PTR_DAT_04cb58d0);
    bRam0000000004f9cb64 = 1;
  }
  if (param_4 == 0) {
LAB_02515744:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(param_3 + 0x24);
  *(double *)(param_4 + 0x40) = param_2;
  if ((double)iVar1 <= param_2) {
    uStack_78 = 0;
    uStack_70 = 0;
    *(int *)(param_4 + 0x54) = *(int *)(param_4 + 0x54) + 1;
    *(double *)(param_4 + 0x40) = param_2 - (double)iVar1;
    lStack_68 = 0;
    Dino_BusSand_Core_SimEvent___ctor_241dc50(&uStack_78,10,*(undefined4 *)(param_4 + 0x10),0,0,0);
    if (param_5 != 0) {
      lVar4 = *(long *)(param_5 + 0x10);
      lVar7 = *(long *)PTR_DAT_04cb58d0;
      *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar19 = *(uint *)(param_5 + 0x18);
        if (uVar19 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar19 * 0x18;
          *(uint *)(param_5 + 0x18) = uVar19 + 1;
          *(long *)(lVar4 + 0x30) = lStack_68;
          *(undefined8 *)(lVar4 + 0x28) = uStack_70;
          *(undefined8 *)(lVar4 + 0x20) = uStack_78;
          lVar4 = thunk_FUN_02134474((long *)(lVar4 + 0x30),0);
          return lVar4;
        }
        lVar4 = System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                          (param_5,&stack0xffffffffffffffa0,
                           *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        return lVar4;
      }
    }
    goto LAB_02515744;
  }
  if (((double)*(int *)(param_3 + 0x20) <= param_1) || (param_2 < (double)*(int *)(param_3 + 0x20)))
  {
    return lVar4;
  }
  lVar4 = *(long *)(param_3 + 0x68);
  if (lVar4 == 0) goto LAB_02515744;
  iVar1 = *(int *)(param_4 + 0x10);
  lVar7 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04cae218 + 0x20) + 0xc0) + 0xa8);
  if (*(long *)(lVar4 + 0x10) == 0) {
    System_Collections_Generic_HashSet_int___Initialize_37dccf0
              (lVar4,0,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
  }
  iVar3 = System_Collections_Generic_HashSet_int___InternalGetHashCode_37de528
                    (lVar4,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0xb0));
  lVar8 = *(long *)(lVar4 + 0x10);
  if (lVar8 == 0) goto LAB_038dd2d4;
  uVar19 = *(uint *)(lVar8 + 0x18);
  iVar18 = 0;
  if (uVar19 != 0) {
    iVar18 = iVar3 / (int)uVar19;
  }
  uVar16 = iVar3 - iVar18 * uVar19;
  if (uVar16 < uVar19) {
    lVar14 = *(long *)(lVar4 + 0x18);
    uStack_70 = CONCAT44(uVar16,(undefined4)uStack_70);
    uVar19 = *(int *)(lVar8 + (ulong)uVar16 * 4 + 0x20) - 1;
    if (-1 < (int)uVar19) {
      if (lVar14 == 0) goto LAB_038dd2d4;
      uVar9 = *(undefined8 *)(lVar14 + 0x18);
      iVar18 = 0;
      lVar8 = lVar14 + 0x20;
      lStack_68 = lVar14;
      do {
        if ((uint)uVar9 <= uVar19) goto LAB_038dd294;
        if (*(int *)(lVar8 + (ulong)uVar19 * 0xc) == iVar3) {
          plVar17 = *(long **)(lVar4 + 0x30);
          if (plVar17 == (long *)0x0) goto LAB_038dd2d4;
          lVar14 = *(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x20);
          uVar2 = *(undefined4 *)(lVar8 + (ulong)uVar19 * 0xc + 8);
          if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_0216b470(lVar14);
          }
          lVar10 = *plVar17;
          uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar14) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_038dd11c;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar5 = (undefined8 *)FUN_0216b7a4(plVar17,lVar14,0);
LAB_038dd11c:
          uVar13 = (*(code *)*puVar5)(plVar17,uVar2,iVar1,puVar5[1]);
          if ((uVar13 & 1) != 0) {
            return 0;
          }
          uVar9 = *(undefined8 *)(lStack_68 + 0x18);
          lVar14 = lStack_68;
        }
        if ((int)(uint)uVar9 <= iVar18) {
          thunk_FUN_021985a8(PTR_DAT_04caa348);
          uVar9 = thunk_FUN_0216e89c();
          uVar6 = thunk_FUN_021985a8(PTR_DAT_04cc7428);
          System_InvalidOperationException___ctor_482ff30(uVar9,uVar6,0);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar9,lVar7);
        }
        if ((uint)uVar9 <= uVar19) goto LAB_038dd294;
        iVar18 = iVar18 + 1;
        uVar19 = *(uint *)(lVar8 + (ulong)uVar19 * 0xc + 4);
      } while (-1 < (int)uVar19);
    }
    uVar19 = *(uint *)(lVar4 + 0x28);
    uVar16 = uStack_70._4_4_;
    if ((int)uVar19 < 0) {
      if (lVar14 == 0) goto LAB_038dd2d4;
      uVar19 = *(uint *)(lVar4 + 0x24);
      uVar12 = *(uint *)(lVar14 + 0x18);
      if (uVar19 == uVar12) {
        System_Collections_Generic_HashSet_int___IncreaseCapacity_37dcdcc
                  (lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x188));
        if (*(long *)(lVar4 + 0x10) == 0) goto LAB_038dd2d4;
        uVar19 = *(uint *)(lVar4 + 0x24);
        lVar14 = *(long *)(lVar4 + 0x18);
        uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x18);
        *(uint *)(lVar4 + 0x24) = uVar19 + 1;
        if (lVar14 == 0) goto LAB_038dd2d4;
        iVar18 = 0;
        iVar11 = (int)uVar9;
        if (iVar11 != 0) {
          iVar18 = iVar3 / iVar11;
        }
        uVar12 = *(uint *)(lVar14 + 0x18);
        uVar16 = iVar3 - iVar18 * iVar11;
      }
      else {
        *(uint *)(lVar4 + 0x24) = uVar19 + 1;
      }
    }
    else {
      if (lVar14 == 0) goto LAB_038dd2d4;
      uVar12 = *(uint *)(lVar14 + 0x18);
      if (uVar12 <= uVar19) goto LAB_038dd294;
      *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar14 + (ulong)uVar19 * 0xc + 0x24);
    }
    if (uVar19 < uVar12) {
      piVar15 = (int *)(lVar14 + 0x20 + (long)(int)uVar19 * 0xc);
      lVar7 = *(long *)(lVar4 + 0x10);
      *piVar15 = iVar3;
      piVar15[2] = iVar1;
      if (lVar7 == 0) {
LAB_038dd2d4:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (uVar16 < *(uint *)(lVar7 + 0x18)) {
        lVar7 = lVar7 + (ulong)uVar16 * 4;
        *(int *)(lVar14 + 0x20 + (long)(int)uVar19 * 0xc + 4) = *(int *)(lVar7 + 0x20) + -1;
        *(uint *)(lVar7 + 0x20) = uVar19 + 1;
        *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
        *(int *)(lVar4 + 0x38) = *(int *)(lVar4 + 0x38) + 1;
        return 1;
      }
    }
  }
LAB_038dd294:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

