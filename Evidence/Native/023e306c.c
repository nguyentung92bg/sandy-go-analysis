/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Act
void Dino_BusSand_App_UI_HomeBus__Act (Dino_BusSand_App_UI_HomeBus_o* __this, bool idle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Act
   void Dino_BusSand_App_UI_HomeBus__Act (Dino_BusSand_App_UI_HomeBus_o* __this, bool idle, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus__Act_22e306c(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined *puVar9;
  float fVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  long extraout_x1;
  long lVar17;
  long lVar18;
  undefined4 uVar19;
  double dVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  puVar8 = PTR_DAT_04cb7208;
  if ((bRam0000000004f9c411 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb7200);
    FUN_02132f7c(PTR_DAT_04cb71a8);
    FUN_02132f7c(PTR_DAT_04cb7210);
    FUN_02132f7c(PTR_DAT_04cb7218);
    FUN_02132f7c(PTR_DAT_04cb7220);
    FUN_02132f7c(PTR_DAT_04cb18b8);
    FUN_02132f7c(PTR_DAT_04cb4e80);
    FUN_02132f7c(PTR_DAT_04cb6890);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb7228);
    FUN_02132f7c(PTR_DAT_04cb7230);
    FUN_02132f7c(PTR_DAT_04cb7238);
    FUN_02132f7c(PTR_DAT_04cb7240);
    FUN_02132f7c(PTR_DAT_04cb7248);
    FUN_02132f7c(PTR_DAT_04cb7208);
    FUN_02132f7c(PTR_DAT_04cb71e8);
    FUN_02132f7c(PTR_DAT_04cb71f0);
    bRam0000000004f9c411 = 1;
  }
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
  Dino_BusSand_App_UI_HomeBus___c__DisplayClass98_0___ctor_22e4f78(lVar12,0);
  if (lVar12 == 0) {
LAB_023e3270:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(long *)(lVar12 + 0x20) = param_1;
  thunk_FUN_02134474((long *)(lVar12 + 0x20),param_1);
  auVar22 = Dino_BusSand_App_UI_HomeBus__Pointer_22e4410(param_1);
  auVar4._8_8_ = auStack_90._8_8_;
  auVar4._0_8_ = auStack_90._0_8_;
  auVar1._8_8_ = auStack_80._8_8_;
  auVar1._0_8_ = auStack_80._0_8_;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_023e3270;
  *(undefined1 (*) [16])(*(long *)(param_1 + 0x20) + 0xa8) = auVar22;
  if (((auVar22._0_8_ & 0xff) != 0) || ((param_2 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x88);
  }
  puVar9 = PTR_DAT_04cb7220;
  puVar8 = PTR_DAT_04cb7210;
  lVar13 = *(long *)(param_1 + 0xe8);
  auStack_80 = auVar1;
  auStack_90 = auVar4;
  if (lVar13 == 0) goto LAB_023e3270;
  iVar11 = 0;
  while( true ) {
    auVar5._8_8_ = auStack_90._8_8_;
    auVar5._0_8_ = auStack_90._0_8_;
    auVar22._8_8_ = auStack_80._8_8_;
    auVar22._0_8_ = auStack_80._0_8_;
    if (*(int *)(lVar13 + 0x18) <= iVar11) break;
    fVar21 = *(float *)(param_1 + 0x88);
    fVar10 = (float)System_Collections_Generic_List_ValueTuple_float__object____get_Item_39c14c4
                              (lVar13,iVar11,*(undefined8 *)puVar9);
    if (fVar10 <= fVar21) {
      if (*(long *)(param_1 + 0xe8) == 0) goto LAB_023e3270;
      System_Collections_Generic_List_ValueTuple_float__object____get_Item_39c14c4
                (*(long *)(param_1 + 0xe8),iVar11,*(undefined8 *)puVar9);
      if (*(long *)(param_1 + 0xe8) == 0) goto LAB_023e3270;
      System_Collections_Generic_List_ValueTuple_float__object____RemoveAt_39c3000
                (*(long *)(param_1 + 0xe8),iVar11,*(undefined8 *)puVar8);
      if (extraout_x1 == 0) goto LAB_023e3270;
      iVar11 = iVar11 + -1;
      (**(code **)(extraout_x1 + 0x18))
                (*(undefined8 *)(extraout_x1 + 0x40),*(undefined8 *)(extraout_x1 + 0x28));
    }
    lVar13 = *(long *)(param_1 + 0xe8);
    iVar11 = iVar11 + 1;
    if (lVar13 == 0) goto LAB_023e3270;
  }
  if ((0.0 < *(float *)(param_1 + 0x84)) &&
     (*(float *)(param_1 + 0x84) <= *(float *)(param_1 + 0x88))) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    return;
  }
  fVar21 = *(float *)(param_1 + 0x88);
  fVar10 = fVar21 - *(float *)(param_1 + 0xd0);
  if (*(char *)(param_1 + 0xe0) != '\0') {
    if (fVar10 < _UNK_00e2043c) {
      if ((bRam0000000004f9c414 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb7200);
        FUN_02132f7c(PTR_DAT_04cb71e8);
        FUN_02132f7c(PTR_DAT_04cb71f0);
        bRam0000000004f9c414 = 1;
      }
      puVar8 = PTR_DAT_04cb7200;
      lVar12 = *(long *)(param_1 + 0x20);
      if (lVar12 != 0) {
        *(undefined1 *)(lVar12 + 0xb8) = 1;
        lVar13 = *(long *)puVar8;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar13 = *(long *)puVar8;
        }
        lVar13 = *(long *)(lVar13 + 0xb8);
        uStack_68 = *(undefined8 *)(lVar13 + 0x48);
        uStack_70 = *(undefined8 *)(lVar13 + 0x40);
        uStack_60 = *(undefined4 *)(lVar13 + 0x50);
        Dino_BusSand_App_UI_HomeToonFace__Mood_22f1fc0(lVar12,&uStack_70,0);
        lVar12 = *(long *)(param_1 + 0x20);
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        if (lVar12 != 0) {
          Dino_BusSand_App_UI_HomeToonFace__Glance_22e5200
                    (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                     (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],_UNK_00e20754,lVar12,0)
          ;
          if (*(char *)(param_1 + 0xe0) == '\0') {
LAB_023e0938:
            *(undefined1 *)(param_1 + 0xe0) = 0;
            fVar21 = *(float *)(param_1 + 0x88) + 4.0;
            fVar10 = *(float *)(param_1 + 0xd4);
            if (*(float *)(param_1 + 0xd4) <= fVar21) {
              fVar10 = fVar21;
            }
            *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0x88);
            *(float *)(param_1 + 0xd4) = fVar10;
            return;
          }
          lVar17 = *(long *)(param_1 + 0x20);
          lVar12 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb71e8,2);
          lVar13 = *(long *)puVar8;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar13);
            lVar13 = *(long *)puVar8;
          }
          puVar8 = PTR_DAT_04cb71f0;
          lVar13 = *(long *)(lVar13 + 0xb8);
          auStack_90._8_8_ = 0;
          auStack_80._0_8_ = 0;
          uStack_98 = *(undefined8 *)(lVar13 + 0x84);
          uStack_a0 = *(undefined8 *)(lVar13 + 0x7c);
          auStack_80._8_8_ = 0;
          auStack_90._0_4_ = *(undefined4 *)(lVar13 + 0x8c);
          System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                    (_UNK_00e208d0,auStack_90 + 8,&uStack_a0,*(undefined8 *)PTR_DAT_04cb71f0);
          if (lVar12 != 0) {
            if (*(int *)(lVar12 + 0x18) != 0) {
              *(undefined8 *)(lVar12 + 0x30) = auStack_80._8_8_;
              *(undefined8 *)(lVar12 + 0x28) = auStack_80._0_8_;
              *(undefined8 *)(lVar12 + 0x20) = auStack_90._8_8_;
              uStack_a0 = 0;
              uStack_98 = 0;
              auStack_90._0_8_ = 0;
              System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                        (_UNK_00e20994,&uStack_a0,&stack0xffffffffffffffb0,*(undefined8 *)puVar8);
              if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar12 + 0x48) = auStack_90._0_8_;
                *(undefined8 *)(lVar12 + 0x40) = uStack_98;
                *(undefined8 *)(lVar12 + 0x38) = uStack_a0;
                if (lVar17 != 0) {
                  Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar17,lVar12,0);
                  goto LAB_023e0938;
                }
                goto LAB_023e096c;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
        }
      }
LAB_023e096c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (fVar21 < *(float *)(param_1 + 0xd4)) {
      return;
    }
    plVar14 = *(long **)(param_1 + 0x30);
    auStack_80 = auVar22;
    auStack_90 = auVar5;
    if (plVar14 == (long *)0x0) goto LAB_023e3270;
    dVar20 = (double)(**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
    lVar17 = *(long *)(param_1 + 0x20);
    uVar15 = *(undefined8 *)PTR_DAT_04cb71e8;
    *(float *)(param_1 + 0xd4) = fVar21 + (float)dVar20 * 4.0 + 7.0;
    lVar12 = FUN_02133068(uVar15,2);
    puVar8 = PTR_DAT_04cb71a8;
    lVar13 = *(long *)PTR_DAT_04cb71a8;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar13);
      lVar13 = *(long *)puVar8;
    }
    puVar9 = PTR_DAT_04cb71f0;
    lVar13 = *(long *)(lVar13 + 0xb8);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = *(undefined8 *)(lVar13 + 0x94);
    uStack_d0 = *(undefined8 *)(lVar13 + 0x8c);
    uStack_a8 = 0;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(lVar13 + 0x9c));
    System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
              (0x3fc00000,&uStack_b8,&uStack_d0,*(undefined8 *)PTR_DAT_04cb71f0);
    if (lVar12 == 0) goto LAB_023e3270;
    auVar2 = auStack_80;
    if (*(int *)(lVar12 + 0x18) != 0) {
      *(undefined8 *)(lVar12 + 0x30) = uStack_a8;
      *(undefined8 *)(lVar12 + 0x28) = uStack_b0;
      *(undefined8 *)(lVar12 + 0x20) = uStack_b8;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      lVar13 = *(long *)(*(long *)puVar8 + 0xb8);
      uStack_e8 = *(undefined8 *)(lVar13 + 0x80);
      uStack_f0 = *(undefined8 *)(lVar13 + 0x78);
      uStack_e0 = CONCAT44(uStack_e0._4_4_,*(undefined4 *)(lVar13 + 0x88));
      System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                (_UNK_00e207cc,&uStack_d0,&uStack_f0,*(undefined8 *)puVar9);
      auVar2._8_8_ = auStack_80._8_8_;
      auVar2._0_8_ = auStack_80._0_8_;
      if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) == 0) goto LAB_023e3b9c;
      *(undefined8 *)(lVar12 + 0x48) = uStack_c0;
      *(undefined8 *)(lVar12 + 0x40) = uStack_c8;
      *(undefined8 *)(lVar12 + 0x38) = uStack_d0;
      auStack_80 = auVar2;
      if (lVar17 != 0) {
        Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar17,lVar12,0);
        fVar10 = _UNK_00e20660;
        *(undefined4 *)(param_1 + 0x80) = 0xc0200000;
        *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x88) + fVar10;
        return;
      }
      goto LAB_023e3270;
    }
    goto LAB_023e3b9c;
  }
  if (26.0 < fVar10) {
    if ((bRam0000000004f9c413 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb71a8);
      bRam0000000004f9c413 = 1;
    }
    lVar12 = *(long *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0xe0) = 1;
    puVar8 = PTR_DAT_04cb71a8;
    if (lVar12 != 0) {
      *(undefined1 *)(lVar12 + 0xb8) = 0;
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_HomeToonFace__Mood_22f1fc0(lVar12,&stack0xffffffffffffffc0,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        Dino_BusSand_App_UI_HomeToonFace__Glance_22e5200
                  (0,_UNK_00e1fe50,_UNK_00e1fe70,*(long *)(param_1 + 0x20),0);
        *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0x88) + 2.5;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((param_2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_023e3270;
  uVar16 = Dino_BusSand_App_UI_HomeToonFace__get_Playing_22f2204(*(long *)(param_1 + 0x20),0);
  if ((uVar16 & 1) != 0) {
    return;
  }
  if (_UNK_00e207cc < ABS(*(float *)(param_1 + 0x44))) {
    return;
  }
  fVar10 = *(float *)(param_1 + 0x88);
  if (fVar10 < *(float *)(param_1 + 0xd4)) {
    return;
  }
  plVar14 = *(long **)(param_1 + 0x30);
  if (plVar14 == (long *)0x0) goto LAB_023e3270;
  dVar20 = (double)(**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  lVar13 = *(long *)PTR_DAT_04ca9ae8;
  *(float *)(param_1 + 0xd4) = fVar10 + (float)dVar20 * 4.5 + 6.5;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar16 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
  if ((uVar16 & 1) == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_023e3270;
    lVar13 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0x38),0);
    if (lVar13 == 0) goto LAB_023e3270;
    UnityEngine_Transform__get_position_43d0e48(lVar13,0);
    uStack_b8 = 0;
    uStack_b0 = 0;
    System_Nullable_Vector3____ctor_2bd0e4c(&uStack_b8,*(undefined8 *)PTR_DAT_04cb18b8);
    uStack_98 = uStack_b0;
    uStack_a0 = uStack_b8;
  }
  *(undefined8 *)(lVar12 + 0x18) = uStack_98;
  *(undefined8 *)(lVar12 + 0x10) = uStack_a0;
  plVar14 = *(long **)(param_1 + 0x30);
  if (plVar14 == (long *)0x0) goto LAB_023e3270;
  iVar11 = (**(code **)(*plVar14 + 0x1a8))(plVar14,5,*(undefined8 *)(*plVar14 + 0x1b0));
  auVar6._8_8_ = auStack_90._8_8_;
  auVar6._0_8_ = auStack_90._0_8_;
  auVar3._8_8_ = auStack_80._8_8_;
  auVar3._0_8_ = auStack_80._0_8_;
  if (iVar11 < 2) {
    if (iVar11 == 0) {
      auStack_80 = Dino_BusSand_App_UI_HomeBus__Spot_22e219c(param_1,1);
      if ((auStack_80._0_8_ & 0xff) != 0) {
        lVar13 = *(long *)(param_1 + 0x20);
        System_Nullable_Vector3___get_Value_2bd0e68(auStack_80,*(undefined8 *)PTR_DAT_04cb6890);
        if (lVar13 == 0) goto LAB_023e3270;
        Dino_BusSand_App_UI_HomeToonFace__LookAt_22e500c(lVar13,0);
      }
      lVar18 = *(long *)(param_1 + 0x20);
      lVar13 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb71e8,3);
      puVar8 = PTR_DAT_04cb7200;
      lVar17 = *(long *)PTR_DAT_04cb7200;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar17);
        lVar17 = *(long *)puVar8;
      }
      puVar9 = PTR_DAT_04cb71f0;
      lVar17 = *(long *)(lVar17 + 0xb8);
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c8 = *(undefined8 *)(lVar17 + 0x48);
      uStack_d0 = *(undefined8 *)(lVar17 + 0x40);
      uStack_a8 = 0;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(lVar17 + 0x50));
      System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                (_UNK_00e20390,&uStack_b8,&uStack_d0,*(undefined8 *)PTR_DAT_04cb71f0);
      if (lVar13 == 0) goto LAB_023e3270;
      auVar2 = auStack_80;
      if (*(int *)(lVar13 + 0x18) != 0) {
        *(undefined8 *)(lVar13 + 0x30) = uStack_a8;
        *(undefined8 *)(lVar13 + 0x28) = uStack_b0;
        *(undefined8 *)(lVar13 + 0x20) = uStack_b8;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        lVar17 = *(long *)(*(long *)puVar8 + 0xb8);
        uStack_e8 = *(undefined8 *)(lVar17 + 0xac);
        uStack_f0 = *(undefined8 *)(lVar17 + 0xa4);
        uStack_e0 = CONCAT44(uStack_e0._4_4_,*(undefined4 *)(lVar17 + 0xb4));
        System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                  (_UNK_00e20178,&uStack_d0,&uStack_f0,*(undefined8 *)puVar9);
        auVar2 = auStack_80;
        if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar13 + 0x48) = uStack_c0;
          *(undefined8 *)(lVar13 + 0x40) = uStack_c8;
          *(undefined8 *)(lVar13 + 0x38) = uStack_d0;
          uStack_f0 = 0;
          uStack_e8 = 0;
          uStack_e0 = 0;
          lVar17 = *(long *)(*(long *)puVar8 + 0xb8);
          uStack_68 = *(undefined8 *)(lVar17 + 0x5c);
          uStack_70 = *(undefined8 *)(lVar17 + 0x54);
          uStack_60 = *(undefined4 *)(lVar17 + 100);
          System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                    (_UNK_00e200f8,&uStack_f0,&uStack_70,*(undefined8 *)puVar9);
          auVar2 = auStack_80;
          if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_023e3b9c;
          *(undefined8 *)(lVar13 + 0x60) = uStack_e0;
          *(undefined8 *)(lVar13 + 0x58) = uStack_e8;
          *(undefined8 *)(lVar13 + 0x50) = uStack_f0;
          if (lVar18 != 0) {
            Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar18,lVar13,0);
            puVar8 = PTR_DAT_04caa458;
            *(undefined4 *)(param_1 + 0x80) = 0xc0600000;
            uVar15 = *(undefined8 *)puVar8;
            *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x88) + 1.5;
            uVar15 = thunk_FUN_0216e89c(uVar15);
            System_Action___ctor_47b5ed0(uVar15,lVar12,*(undefined8 *)PTR_DAT_04cb7240,0);
            uVar19 = _UNK_00e20188;
            goto LAB_023e3b90;
          }
          goto LAB_023e3270;
        }
      }
      goto LAB_023e3b9c;
    }
    if (iVar11 == 1) {
      lVar18 = *(long *)(param_1 + 0x20);
      lVar13 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb71e8,2);
      puVar8 = PTR_DAT_04cb7200;
      lVar17 = *(long *)PTR_DAT_04cb7200;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar17);
        lVar17 = *(long *)puVar8;
      }
      puVar9 = PTR_DAT_04cb71f0;
      uVar19 = _UNK_00e20094;
      lVar17 = *(long *)(lVar17 + 0xb8);
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c8 = *(undefined8 *)(lVar17 + 0x70);
      uStack_d0 = *(undefined8 *)(lVar17 + 0x68);
      uStack_a8 = 0;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(lVar17 + 0x78));
      System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                (_UNK_00e20094,&uStack_b8,&uStack_d0,*(undefined8 *)PTR_DAT_04cb71f0);
      if (lVar13 == 0) goto LAB_023e3270;
      auVar2 = auStack_80;
      if (*(int *)(lVar13 + 0x18) != 0) {
        *(undefined8 *)(lVar13 + 0x30) = uStack_a8;
        *(undefined8 *)(lVar13 + 0x28) = uStack_b0;
        *(undefined8 *)(lVar13 + 0x20) = uStack_b8;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        lVar17 = *(long *)(*(long *)puVar8 + 0xb8);
        uStack_e8 = *(undefined8 *)(lVar17 + 0x5c);
        uStack_f0 = *(undefined8 *)(lVar17 + 0x54);
        uStack_e0 = CONCAT44(uStack_e0._4_4_,*(undefined4 *)(lVar17 + 100));
        System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                  (_UNK_00e20994,&uStack_d0,&uStack_f0,*(undefined8 *)puVar9);
        auVar2._8_8_ = auStack_80._8_8_;
        auVar2._0_8_ = auStack_80._0_8_;
        if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) goto LAB_023e3b9c;
        *(undefined8 *)(lVar13 + 0x48) = uStack_c0;
        *(undefined8 *)(lVar13 + 0x40) = uStack_c8;
        *(undefined8 *)(lVar13 + 0x38) = uStack_d0;
        auStack_80 = auVar2;
        if (lVar18 != 0) {
          Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar18,lVar13,0);
          if (*(char *)(lVar12 + 0x10) == '\0') {
            return;
          }
          uVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar15,lVar12,*(undefined8 *)PTR_DAT_04cb7228,0);
          goto LAB_023e3b90;
        }
        goto LAB_023e3270;
      }
      goto LAB_023e3b9c;
    }
  }
  else {
    if (iVar11 == 2) {
      auStack_90 = Dino_BusSand_App_UI_HomeBus__Spot_22e219c(param_1,2);
      if ((auStack_90._0_8_ & 0xff) != 0) {
        lVar13 = *(long *)(param_1 + 0x20);
        System_Nullable_Vector3___get_Value_2bd0e68(auStack_90,*(undefined8 *)PTR_DAT_04cb6890);
        if (lVar13 == 0) goto LAB_023e3270;
        Dino_BusSand_App_UI_HomeToonFace__LookAt_22e500c(lVar13,0);
      }
      lVar18 = *(long *)(param_1 + 0x20);
      lVar13 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb71e8,1);
      puVar8 = PTR_DAT_04cb7200;
      lVar17 = *(long *)PTR_DAT_04cb7200;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar17);
        lVar17 = *(long *)puVar8;
      }
      lVar17 = *(long *)(lVar17 + 0xb8);
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c8 = *(undefined8 *)(lVar17 + 0x5c);
      uStack_d0 = *(undefined8 *)(lVar17 + 0x54);
      uStack_a8 = 0;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(lVar17 + 100));
      System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                (0x3fc00000,&uStack_b8,&uStack_d0,*(undefined8 *)PTR_DAT_04cb71f0);
      auVar2._8_8_ = auStack_80._8_8_;
      auVar2._0_8_ = auStack_80._0_8_;
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0x18) == 0) goto LAB_023e3b9c;
        *(undefined8 *)(lVar13 + 0x30) = uStack_a8;
        *(undefined8 *)(lVar13 + 0x28) = uStack_b0;
        *(undefined8 *)(lVar13 + 0x20) = uStack_b8;
        auStack_80 = auVar2;
        if (lVar18 != 0) {
          Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar18,lVar13,0);
          puVar8 = PTR_DAT_04caa458;
          *(undefined4 *)(param_1 + 0x80) = 0x40000000;
          uVar15 = *(undefined8 *)puVar8;
          *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x88) + 1.0;
          uVar15 = thunk_FUN_0216e89c(uVar15);
          System_Action___ctor_47b5ed0(uVar15,lVar12,*(undefined8 *)PTR_DAT_04cb7248,0);
          uVar19 = _UNK_00e20ae0;
LAB_023e3b90:
          Dino_BusSand_App_UI_HomeBus__Later_22e45f8(uVar19,param_1,uVar15);
          return;
        }
      }
      goto LAB_023e3270;
    }
    if (iVar11 == 3) {
      if (*(long *)(param_1 + 0x20) != 0) {
        Dino_BusSand_App_UI_HomeToonFace__Glance_22e5200
                  (_UNK_00e20874,_UNK_00e20328,_UNK_00e208e8,*(long *)(param_1 + 0x20),0);
        puVar8 = PTR_DAT_04caa458;
        uVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar15,lVar12,*(undefined8 *)PTR_DAT_04cb7230,0);
        Dino_BusSand_App_UI_HomeBus__Later_22e45f8(_UNK_00e20094,param_1,uVar15);
        uVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
        System_Action___ctor_47b5ed0(uVar15,lVar12,*(undefined8 *)PTR_DAT_04cb7238,0);
        uVar19 = _UNK_00e20178;
        goto LAB_023e3b90;
      }
      goto LAB_023e3270;
    }
  }
  auStack_80 = auVar3;
  auStack_90 = auVar6;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_023e3270;
  Dino_BusSand_App_UI_HomeToonFace__Blink_22e52dc(*(long *)(param_1 + 0x20),1,0);
  if (*(char *)(lVar12 + 0x10) != '\0') {
    lVar13 = *(long *)(param_1 + 0x20);
    System_Nullable_Vector3___get_Value_2bd0e68(lVar12 + 0x10,*(undefined8 *)PTR_DAT_04cb6890);
    if (lVar13 == 0) goto LAB_023e3270;
    Dino_BusSand_App_UI_HomeToonFace__LookAt_22e500c(lVar13,0);
  }
  lVar17 = *(long *)(param_1 + 0x20);
  lVar12 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb71e8,1);
  puVar8 = PTR_DAT_04cb7200;
  lVar13 = *(long *)PTR_DAT_04cb7200;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar13);
    lVar13 = *(long *)puVar8;
  }
  lVar13 = *(long *)(lVar13 + 0xb8);
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = *(undefined8 *)(lVar13 + 0x5c);
  uStack_d0 = *(undefined8 *)(lVar13 + 0x54);
  uStack_a8 = 0;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(lVar13 + 100));
  System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
            (_UNK_00e20170,&uStack_b8,&uStack_d0,*(undefined8 *)PTR_DAT_04cb71f0);
  auVar7._8_8_ = auStack_90._8_8_;
  auVar7._0_8_ = auStack_90._0_8_;
  auVar2._8_8_ = auStack_80._8_8_;
  auVar2._0_8_ = auStack_80._0_8_;
  if (lVar12 == 0) goto LAB_023e3270;
  auStack_90 = auVar7;
  if (*(int *)(lVar12 + 0x18) != 0) {
    *(undefined8 *)(lVar12 + 0x30) = uStack_a8;
    *(undefined8 *)(lVar12 + 0x28) = uStack_b0;
    *(undefined8 *)(lVar12 + 0x20) = uStack_b8;
    auStack_80 = auVar2;
    if (lVar17 != 0) {
      Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar17,lVar12,0);
      return;
    }
    goto LAB_023e3270;
  }
LAB_023e3b9c:
  auStack_80 = auVar2;
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

