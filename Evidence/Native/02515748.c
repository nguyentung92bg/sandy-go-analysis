/* IL2CPP: Dino.BusSand.Core.Road$$MoveFollower
void Dino_BusSand_Core_Road__MoveFollower (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_RoadBus_o* b, double mergeRes, double holdLine, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.Road$$MoveFollower
   void Dino_BusSand_Core_Road__MoveFollower (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_RoadBus_o* b, double mergeRes, double holdLine,
   System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method); */

long Dino_BusSand_Core_Road__MoveFollower_2415748
               (double param_1,double param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  uint uVar21;
  long *plVar22;
  int iVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  double extraout_d0;
  double extraout_d0_00;
  double dVar27;
  double extraout_d0_01;
  double extraout_d0_02;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uStack_78;
  
  if ((bRam0000000004f9cb69 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe6a0);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb69 = 1;
  }
  puVar3 = PTR_DAT_04caa200;
  if ((param_4 == 0) || (*(long *)(param_3 + 0x78) == 0)) {
LAB_02515a0c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar8 = System_Collections_Generic_Dictionary_int__object___get_Item_343728c
                    (*(long *)(param_3 + 0x78),*(undefined4 *)(param_4 + 0x10),
                     *(undefined8 *)PTR_DAT_04cbe6a0);
  dVar29 = *(double *)(param_4 + 0x40);
  iVar1 = *(int *)(param_4 + 0x1c);
  if (*(int *)(param_4 + 0x28) == 2) {
    uVar14 = Dino_BusSand_Core_Road__SpeedGrainsPerTickAt_2412994(dVar29,param_3);
    if (*(long *)(param_3 + 0x10) == 0) goto LAB_02515a0c;
    dVar25 = *(double *)(*(long *)(param_3 + 0x10) + 0x18);
    dVar30 = (double)Dino_BusSand_Core_Road__LeavingFactor_2414f38(param_3,param_4);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar30 = (double)System_Math__Max_4830f98(uVar14,dVar25 * dVar30,0);
  }
  else if (*(int *)(param_4 + 0x28) == 3) {
    if (*(long *)(param_3 + 0x10) == 0) goto LAB_02515a0c;
    dVar30 = *(double *)(*(long *)(param_3 + 0x10) + 0x18);
    dVar25 = (double)Dino_BusSand_Core_Road__LeavingFactor_2414f38(param_3,param_4);
    dVar30 = dVar30 * dVar25;
  }
  else {
    dVar30 = (double)Dino_BusSand_Core_Road__SpeedGrainsPerTickAt_2412994(dVar29,param_3);
  }
  if (lVar8 == 0) goto LAB_02515a0c;
  dVar25 = (double)Dino_BusSand_Core_Road__AheadOf_2416514
                             (dVar29,*(undefined8 *)(lVar8 + 0x40),param_3);
  dVar26 = (double)Dino_BusSand_Core_Road__CouplingDistance_241659c(param_3,lVar8,param_4);
  dVar25 = dVar29 + (dVar25 - dVar26);
  if (*(char *)(param_4 + 100) == '\0') {
    dVar30 = dVar29 + dVar30 + dVar30;
    if (*(int *)(param_4 + 0x28) == 3) {
      dVar26 = dVar25;
      if (dVar30 <= dVar25) {
        dVar26 = dVar30;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar8 = System_Math__Max_4830f98(dVar29,dVar26,0);
      dVar30 = extraout_d0_00;
    }
    else {
      dVar26 = (double)iVar1 / 2.0;
      dVar28 = dVar29 + dVar26;
      bVar5 = false;
      bVar6 = true;
      if (param_1 < dVar26 + dVar30) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(dVar28) && !NAN(param_1)) {
          bVar5 = dVar28 == param_1;
          bVar6 = param_1 <= dVar28;
        }
      }
      bVar4 = false;
      if ((!bVar6 || bVar5) && (bVar4 = false, !NAN(param_1))) {
        bVar4 = param_1 < 1.7976931348623157e+308;
      }
      dVar27 = param_1 - dVar26;
      if (!bVar4) {
        dVar27 = dVar30;
      }
      bVar5 = false;
      bVar6 = true;
      if (param_2 < dVar26 + dVar27) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(dVar28) && !NAN(param_2)) {
          bVar5 = dVar28 == param_2;
          bVar6 = param_2 <= dVar28;
        }
      }
      bVar4 = false;
      if ((!bVar6 || bVar5) && (bVar4 = false, !NAN(param_2))) {
        bVar4 = param_2 < 1.7976931348623157e+308;
      }
      dVar30 = param_2 - dVar26;
      if (!bVar4) {
        dVar30 = dVar27;
      }
      dVar26 = dVar25;
      if (dVar30 <= dVar25) {
        dVar26 = dVar30;
      }
      lVar8 = Dino_BusSand_Core_Road__ClampBehindLeader_2415244(dVar29,dVar26,param_3,param_4,lVar8)
      ;
      dVar30 = extraout_d0_01;
    }
    if (dVar25 + _UNK_00e6a7f0 <= dVar30) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar8 = System_Math__Max_4830f98(dVar29,dVar25,0);
      *(undefined1 *)(param_4 + 100) = 1;
      dVar30 = extraout_d0_02;
    }
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar8 = System_Math__Max_4830f98(dVar29,dVar25,0);
    dVar30 = extraout_d0;
  }
  if (*(int *)(param_4 + 0x28) == 3) {
    *(double *)(param_4 + 0x40) = dVar30;
    return lVar8;
  }
  lVar8 = param_3;
  if ((bRam0000000004f9cb64 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae218);
    lVar8 = FUN_02132f7c(PTR_DAT_04cb58d0);
    bRam0000000004f9cb64 = 1;
  }
  if (param_4 == 0) {
LAB_02515744:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(param_3 + 0x24);
  *(double *)(param_4 + 0x40) = dVar30;
  if ((double)iVar1 <= dVar30) {
    uStack_78 = 0;
    *(int *)(param_4 + 0x54) = *(int *)(param_4 + 0x54) + 1;
    *(double *)(param_4 + 0x40) = dVar30 - (double)iVar1;
    Dino_BusSand_Core_SimEvent___ctor_241dc50(&uStack_78,10,*(undefined4 *)(param_4 + 0x10),0,0,0);
    if (param_5 != 0) {
      lVar8 = *(long *)(param_5 + 0x10);
      lVar12 = *(long *)PTR_DAT_04cb58d0;
      *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar24 = *(uint *)(param_5 + 0x18);
        if (uVar24 < *(uint *)(lVar8 + 0x18)) {
          lVar8 = lVar8 + (long)(int)uVar24 * 0x18;
          *(uint *)(param_5 + 0x18) = uVar24 + 1;
          *(undefined8 *)(lVar8 + 0x30) = 0;
          *(undefined8 *)(lVar8 + 0x28) = 0;
          *(undefined8 *)(lVar8 + 0x20) = uStack_78;
          lVar8 = thunk_FUN_02134474((undefined8 *)(lVar8 + 0x30),0);
          return lVar8;
        }
        lVar8 = System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                          (param_5,&stack0xffffffffffffffa0,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        return lVar8;
      }
    }
    goto LAB_02515744;
  }
  if (((double)*(int *)(param_3 + 0x20) <= dVar29) || (dVar30 < (double)*(int *)(param_3 + 0x20))) {
    return lVar8;
  }
  lVar8 = *(long *)(param_3 + 0x68);
  if (lVar8 == 0) goto LAB_02515744;
  iVar1 = *(int *)(param_4 + 0x10);
  lVar12 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04cae218 + 0x20) + 0xc0) + 0xa8);
  if (*(long *)(lVar8 + 0x10) == 0) {
    System_Collections_Generic_HashSet_int___Initialize_37dccf0
              (lVar8,0,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
  }
  iVar7 = System_Collections_Generic_HashSet_int___InternalGetHashCode_37de528
                    (lVar8,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0xb0))
  ;
  lVar13 = *(long *)(lVar8 + 0x10);
  if (lVar13 == 0) goto LAB_038dd2d4;
  uVar24 = *(uint *)(lVar13 + 0x18);
  iVar23 = 0;
  if (uVar24 != 0) {
    iVar23 = iVar7 / (int)uVar24;
  }
  uVar21 = iVar7 - iVar23 * uVar24;
  if (uVar21 < uVar24) {
    lVar19 = *(long *)(lVar8 + 0x18);
    uVar24 = *(int *)(lVar13 + (ulong)uVar21 * 4 + 0x20) - 1;
    if (-1 < (int)uVar24) {
      if (lVar19 == 0) goto LAB_038dd2d4;
      uVar14 = *(undefined8 *)(lVar19 + 0x18);
      iVar23 = 0;
      lVar13 = lVar19 + 0x20;
      do {
        if ((uint)uVar14 <= uVar24) goto LAB_038dd294;
        if (*(int *)(lVar13 + (ulong)uVar24 * 0xc) == iVar7) {
          plVar22 = *(long **)(lVar8 + 0x30);
          if (plVar22 == (long *)0x0) goto LAB_038dd2d4;
          lVar11 = *(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x20);
          uVar2 = *(undefined4 *)(lVar13 + (ulong)uVar24 * 0xc + 8);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0216b470(lVar11);
          }
          lVar15 = *plVar22;
          uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar18 != 0) {
            piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == lVar11) {
                puVar9 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_038dd11c;
              }
              uVar18 = uVar18 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar18 != 0);
          }
          puVar9 = (undefined8 *)FUN_0216b7a4(plVar22,lVar11,0);
LAB_038dd11c:
          uVar18 = (*(code *)*puVar9)(plVar22,uVar2,iVar1,puVar9[1]);
          if ((uVar18 & 1) != 0) {
            return 0;
          }
          uVar14 = *(undefined8 *)(lVar19 + 0x18);
        }
        if ((int)(uint)uVar14 <= iVar23) {
          thunk_FUN_021985a8(PTR_DAT_04caa348);
          uVar14 = thunk_FUN_0216e89c();
          uVar10 = thunk_FUN_021985a8(PTR_DAT_04cc7428);
          System_InvalidOperationException___ctor_482ff30(uVar14,uVar10,0);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar14,lVar12);
        }
        if ((uint)uVar14 <= uVar24) goto LAB_038dd294;
        iVar23 = iVar23 + 1;
        uVar24 = *(uint *)(lVar13 + (ulong)uVar24 * 0xc + 4);
      } while (-1 < (int)uVar24);
    }
    uVar24 = *(uint *)(lVar8 + 0x28);
    if ((int)uVar24 < 0) {
      if (lVar19 == 0) goto LAB_038dd2d4;
      uVar24 = *(uint *)(lVar8 + 0x24);
      uVar17 = *(uint *)(lVar19 + 0x18);
      if (uVar24 == uVar17) {
        System_Collections_Generic_HashSet_int___IncreaseCapacity_37dcdcc
                  (lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x188));
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_038dd2d4;
        uVar24 = *(uint *)(lVar8 + 0x24);
        lVar19 = *(long *)(lVar8 + 0x18);
        uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x18);
        *(uint *)(lVar8 + 0x24) = uVar24 + 1;
        if (lVar19 == 0) goto LAB_038dd2d4;
        iVar23 = 0;
        iVar16 = (int)uVar14;
        if (iVar16 != 0) {
          iVar23 = iVar7 / iVar16;
        }
        uVar21 = iVar7 - iVar23 * iVar16;
        uVar17 = *(uint *)(lVar19 + 0x18);
      }
      else {
        *(uint *)(lVar8 + 0x24) = uVar24 + 1;
      }
    }
    else {
      if (lVar19 == 0) goto LAB_038dd2d4;
      uVar17 = *(uint *)(lVar19 + 0x18);
      if (uVar17 <= uVar24) goto LAB_038dd294;
      *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(lVar19 + (ulong)uVar24 * 0xc + 0x24);
    }
    if (uVar24 < uVar17) {
      piVar20 = (int *)(lVar19 + 0x20 + (long)(int)uVar24 * 0xc);
      lVar12 = *(long *)(lVar8 + 0x10);
      *piVar20 = iVar7;
      piVar20[2] = iVar1;
      if (lVar12 == 0) {
LAB_038dd2d4:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (uVar21 < *(uint *)(lVar12 + 0x18)) {
        lVar12 = lVar12 + (ulong)uVar21 * 4;
        *(int *)(lVar19 + 0x20 + (long)(int)uVar24 * 0xc + 4) = *(int *)(lVar12 + 0x20) + -1;
        *(uint *)(lVar12 + 0x20) = uVar24 + 1;
        *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + 1;
        *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + 1;
        return 1;
      }
    }
  }
LAB_038dd294:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

