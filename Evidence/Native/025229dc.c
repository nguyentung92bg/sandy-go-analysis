/* IL2CPP: Dino.BusSand.Core.StageEngine$$BuildLiftLids
void Dino_BusSand_Core_StageEngine__BuildLiftLids (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02523084) */
/* WARNING: Removing unreachable block (ram,0x02522ea8) */
/* WARNING: Removing unreachable block (ram,0x02523030) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.StageEngine$$BuildLiftLids
   void Dino_BusSand_Core_StageEngine__BuildLiftLids (Dino_BusSand_Core_StageEngine_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__BuildLiftLids_24229dc(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  long **pplStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_94;
  
  puVar8 = PTR_DAT_04cbed00;
  puVar7 = PTR_DAT_04cbecf8;
  if ((bRam0000000004f9cbb7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbc0f8);
    FUN_02132f7c(PTR_DAT_04cbd048);
    FUN_02132f7c(PTR_DAT_04cbd050);
    FUN_02132f7c(PTR_DAT_04cbd058);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cbd108);
    FUN_02132f7c(PTR_DAT_04cbd110);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cbed68);
    FUN_02132f7c(PTR_DAT_04cbd060);
    FUN_02132f7c(PTR_DAT_04cbecf8);
    FUN_02132f7c(PTR_DAT_04cbed00);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cbed70);
    bRam0000000004f9cbb7 = 1;
  }
  uStack_140 = 0;
  uStack_138 = 0;
  lStack_130 = 0;
  uStack_94 = 0;
  plStack_148 = (long *)0x0;
  lVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
  System_Collections_Generic_List_ValueTuple_BusObb__int_____ctor_399bcd8
            (lVar14,*(undefined8 *)puVar7);
  puVar12 = PTR_DAT_04cbed70;
  plVar16 = (long *)PTR_DAT_04cbed68;
  puVar11 = PTR_DAT_04cbd110;
  puVar10 = PTR_DAT_04cbd050;
  puVar9 = PTR_DAT_04cbc080;
  puVar8 = PTR_DAT_04caa200;
  puVar7 = PTR_DAT_04ca9c08;
  if (*(long *)(param_1 + 0x38) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_e0,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cbd060);
    uVar6 = _UNK_00e6b4a8;
    uVar5 = _UNK_00e6b4a0;
    dVar4 = _UNK_00e6a660;
    dVar3 = _UNK_00e69e08;
    uStack_138 = pplStack_d8;
    uStack_140 = uStack_e0;
    lStack_130 = lStack_d0;
    puStack_150 = &uStack_140;
    lStack_158 = 0;
LAB_02522b98:
    uVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                       (&uStack_140,*(undefined8 *)puVar10);
    lVar19 = lStack_130;
    lVar18 = lStack_158;
    if ((uVar15 & 1) != 0) {
      if (lStack_130 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar18 = *(long *)(lStack_130 + 0x28);
      if (lVar18 == 0) {
        iVar13 = Dino_BusSand_Core_Lift__get_Occupant_242e4a0(lStack_130,0);
        dVar23 = 0.0;
        if (-1 < iVar13) {
          lVar18 = *(long *)(param_1 + 0x58);
          uVar15 = Dino_BusSand_Core_Lift__get_Occupant_242e4a0(lVar19,0);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224(uVar15,uVar15 & 0xffffffff);
          }
          uVar15 = System_Collections_Generic_Dictionary_int__Int32Enum___TryGetValue_3431fdc
                             (lVar18,uVar15 & 0xffffffff,&uStack_94,*(undefined8 *)PTR_DAT_04cbc0f8)
          ;
          uVar1 = uStack_94;
          if ((uVar15 & 1) != 0) {
            if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            iVar13 = Dino_BusSand_Core_BusFootprint__MeshLengthUnits_240d620(uVar1,0);
            dVar23 = (double)iVar13 / dVar3;
          }
        }
        plVar16 = (long *)Dino_BusSand_Core_Lift__get_Queue_242e51c(lVar19,0);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar18 = *plVar16;
        uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar15 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04cbd108) {
              puVar17 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_02522cec;
            }
            uVar15 = uVar15 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar15 != 0);
        }
        puVar17 = (undefined8 *)FUN_0216b7a4(plVar16,*(long *)PTR_DAT_04cbd108,0);
LAB_02522cec:
        plVar16 = (long *)(*(code *)*puVar17)(plVar16,puVar17[1]);
        pplStack_d8 = &plStack_148;
        uStack_e0 = 0;
        do {
          plStack_148 = plVar16;
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar18 = *plVar16;
          uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar15 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar7) {
                puVar17 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_02522d58;
              }
              uVar15 = uVar15 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar15 != 0);
          }
          puVar17 = (undefined8 *)FUN_0216b7a4(plVar16,*(long *)puVar7,0);
LAB_02522d58:
          uVar15 = (*(code *)*puVar17)(plVar16,puVar17[1]);
          plVar16 = plStack_148;
          if ((uVar15 & 1) == 0) goto LAB_02522e24;
          if (plStack_148 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar18 = *plStack_148;
          uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar15 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar11) {
                puVar17 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_02522dbc;
              }
              uVar15 = uVar15 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar15 != 0);
          }
          puVar17 = (undefined8 *)FUN_0216b7a4(plStack_148,*(long *)puVar11,0);
LAB_02522dbc:
          uVar15 = (*(code *)*puVar17)(plVar16,puVar17[1]);
          if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          iVar13 = Dino_BusSand_Core_BusFootprint__MeshLengthUnits_240d620(uVar15 >> 0x20,0);
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          dVar23 = (double)System_Math__Max_4830f98(dVar23,(double)iVar13 / dVar3,0);
          plVar16 = plStack_148;
        } while( true );
      }
      uVar21 = *(undefined8 *)(lVar18 + 0x10);
      uVar22 = *(undefined8 *)(lVar18 + 0x18);
      dVar23 = *(double *)(lVar18 + 0x20);
      dVar24 = *(double *)(lVar18 + 0x28);
      uVar1 = *(undefined4 *)(lVar18 + 0x30);
      if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Core_BusGeometry__Make_2422124
                (&uStack_120,uVar21,uVar22,dVar23 + dVar4,dVar24 + dVar4,uVar1);
      *(undefined8 *)(lVar19 + 0x40) = uStack_118;
      *(undefined8 *)(lVar19 + 0x38) = uStack_120;
      *(undefined8 *)(lVar19 + 0x50) = uStack_108;
      *(long *)(lVar19 + 0x48) = lStack_110;
      *(undefined8 *)(lVar19 + 0x60) = uStack_f8;
      *(undefined8 *)(lVar19 + 0x58) = uStack_100;
      goto LAB_02522ed4;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (puStack_150,*(undefined8 *)PTR_DAT_04cbd048);
    if (lVar18 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213321c(lVar18);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      Dino_BusSand_Core_TruckGrid__SetLiftLids_2429de4(*(long *)(param_1 + 0x28),lVar14);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
LAB_02522e24:
  if (plStack_148 != (long *)0x0) {
    lVar18 = *plStack_148;
    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar15 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_04ca9b30) {
          puVar17 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_02522e90;
        }
        uVar15 = uVar15 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar15 != 0);
    }
    puVar17 = (undefined8 *)FUN_0216b7a4(plStack_148,*(long *)PTR_DAT_04ca9b30,0);
LAB_02522e90:
    (*(code *)*puVar17)(plVar16,puVar17[1]);
  }
  *(undefined8 *)(lVar19 + 0x50) = uVar6;
  *(undefined8 *)(lVar19 + 0x48) = uVar5;
  *(undefined8 *)(lVar19 + 0x40) = *(undefined8 *)(lVar19 + 0x20);
  *(undefined8 *)(lVar19 + 0x38) = *(undefined8 *)(lVar19 + 0x18);
  dVar23 = (dVar23 + dVar4) * 0.5;
  *(double *)(lVar19 + 0x58) = dVar23;
  *(double *)(lVar19 + 0x60) = dVar23;
  plVar16 = (long *)PTR_DAT_04cbed68;
LAB_02522ed4:
  pplStack_d8 = *(long ***)(lVar19 + 0x40);
  uStack_e0 = *(undefined8 *)(lVar19 + 0x38);
  uStack_b8 = *(undefined8 *)(lVar19 + 0x60);
  uStack_c0 = *(undefined8 *)(lVar19 + 0x58);
  uStack_160 = 0;
  uStack_178 = 0;
  lStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_c8 = *(undefined8 *)(lVar19 + 0x50);
  lStack_d0 = *(long *)(lVar19 + 0x48);
  System_ValueTuple_BusObb__int____ctor_30d68a4
            (&uStack_190,&uStack_e0,*(undefined4 *)(lVar19 + 0x10),*(undefined8 *)puVar12);
  if (lVar14 != 0) {
    uStack_f0 = uStack_160;
    uStack_118 = uStack_188;
    uStack_120 = uStack_190;
    uStack_108 = uStack_178;
    lStack_110 = lStack_180;
    uStack_f8 = uStack_168;
    uStack_100 = uStack_170;
    lVar18 = *(long *)(lVar14 + 0x10);
    lVar19 = *plVar16;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (lVar18 != 0) {
      uVar2 = *(uint *)(lVar14 + 0x18);
      if (uVar2 < *(uint *)(lVar18 + 0x18)) {
        lVar18 = lVar18 + (long)(int)uVar2 * 0x38;
        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar18 + 0x28) = uStack_188;
        *(undefined8 *)(lVar18 + 0x20) = uStack_190;
        *(undefined8 *)(lVar18 + 0x38) = uStack_178;
        *(long *)(lVar18 + 0x30) = lStack_180;
        *(undefined8 *)(lVar18 + 0x48) = uStack_168;
        *(undefined8 *)(lVar18 + 0x40) = uStack_170;
        *(undefined8 *)(lVar18 + 0x50) = uStack_160;
      }
      else {
        pplStack_d8 = (long **)uStack_188;
        uStack_e0 = uStack_190;
        uStack_c8 = uStack_178;
        lStack_d0 = lStack_180;
        uStack_b8 = uStack_168;
        uStack_c0 = uStack_170;
        uStack_b0 = uStack_160;
        System_Collections_Generic_List_ValueTuple_BusObb__int____AddWithResize_399c608
                  (lVar14,&uStack_e0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_02522b98;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

