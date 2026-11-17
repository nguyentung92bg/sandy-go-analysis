/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Ready
void Dino_BusSand_App_UI_HomeStage__Ready (Dino_BusSand_App_UI_HomeStage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Ready
   void Dino_BusSand_App_UI_HomeStage__Ready (Dino_BusSand_App_UI_HomeStage_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeStage__Ready_22ef968(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if (*(long *)(param_1 + 0x78) == 0) {
LAB_023ef99c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_App_UI_HomeBus__Blink_22e1574(*(long *)(param_1 + 0x78),0);
  uVar2 = _UNK_00e2045c;
  lVar7 = *(long *)(param_1 + 0x78);
  if (lVar7 == 0) goto LAB_023ef99c;
  uVar8 = 0;
  if ((bRam0000000004f9c40b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568,0);
    FUN_02132f7c(PTR_DAT_04cb7200);
    FUN_02132f7c(PTR_DAT_04cb71a8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb71e8);
    FUN_02132f7c(PTR_DAT_04cb71f0);
    bRam0000000004f9c40b = 1;
    uVar8 = extraout_x1;
  }
  puVar3 = PTR_DAT_04cad568;
  if (*(long *)(lVar7 + 0x18) == 0) {
    return;
  }
  if (*(int *)(lVar7 + 0x50) == 3) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar8 = extraout_x1_00;
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568,uVar8);
    cRam0000000004f9b94e = '\x01';
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    Dino_BusSand_GameAudio__Honk_23856f4(uVar2,**(long **)(lVar5 + 0xb8),0);
  }
  if (*(long *)(lVar7 + 0x18) != 0) {
    Dino_BusSand_App_UI_HomeToonRig__Hop_22f5924(_UNK_00e206e4,*(long *)(lVar7 + 0x18),0);
    if (*(long *)(lVar7 + 0x18) == 0) goto LAB_023e122c;
    Dino_BusSand_App_UI_HomeToonRig__Pop_22f21e4(_UNK_00e20590,*(long *)(lVar7 + 0x18),0);
    fVar11 = _UNK_00e201f8;
    *(undefined4 *)(lVar7 + 0x9c) = 0x3f800000;
    *(float *)(lVar7 + 0x74) = *(float *)(lVar7 + 0x74) + fVar11;
    Dino_BusSand_App_UI_HomeBus__Puff_22e1234(lVar7,1);
    if (*(char *)(lVar7 + 0xe0) != '\0') {
      Dino_BusSand_App_UI_HomeBus__Wake_22e0748(lVar7,0);
    }
    fVar11 = *(float *)(lVar7 + 0x88);
    if (_UNK_00e2032c <= fVar11 - *(float *)(lVar7 + 0xd8)) {
      *(float *)(lVar7 + 0xd8) = fVar11;
      *(undefined4 *)(lVar7 + 0xdc) = 1;
    }
    else {
      *(float *)(lVar7 + 0xd8) = fVar11;
      iVar1 = *(int *)(lVar7 + 0xdc) + 1;
      *(int *)(lVar7 + 0xdc) = iVar1;
      puVar3 = PTR_DAT_04cb71e8;
      if (3 < iVar1) {
        lVar10 = *(long *)(lVar7 + 0x20);
        *(undefined4 *)(lVar7 + 0xdc) = 0;
        lVar5 = FUN_02133068(*(undefined8 *)puVar3,4);
        puVar3 = PTR_DAT_04cb71a8;
        lVar9 = *(long *)PTR_DAT_04cb71a8;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar9);
          lVar9 = *(long *)puVar3;
        }
        puVar4 = PTR_DAT_04cb71f0;
        lVar9 = *(long *)(lVar9 + 0xb8);
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = *(undefined8 *)(lVar9 + 0xa8);
        uStack_90 = *(undefined8 *)(lVar9 + 0xa0);
        uStack_68 = 0;
        uStack_80 = CONCAT44(uStack_80._4_4_,*(undefined4 *)(lVar9 + 0xb0));
        System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                  (_UNK_00e2065c,&uStack_78,&uStack_90,*(undefined8 *)PTR_DAT_04cb71f0);
        if (lVar5 == 0) goto LAB_023e122c;
        if (*(int *)(lVar5 + 0x18) == 0) goto LAB_023e1230;
        *(undefined8 *)(lVar5 + 0x30) = uStack_68;
        *(undefined8 *)(lVar5 + 0x28) = uStack_70;
        *(undefined8 *)(lVar5 + 0x20) = uStack_78;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
        uStack_a8 = *(undefined8 *)(lVar9 + 0xbc);
        uStack_b0 = *(undefined8 *)(lVar9 + 0xb4);
        uStack_a0 = CONCAT44(uStack_a0._4_4_,*(undefined4 *)(lVar9 + 0xc4));
        System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                  (_UNK_00e2038c,&uStack_90,&uStack_b0,*(undefined8 *)puVar4);
        puVar3 = PTR_DAT_04cb7200;
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_023e1230;
        *(undefined8 *)(lVar5 + 0x48) = uStack_80;
        *(undefined8 *)(lVar5 + 0x40) = uStack_88;
        *(undefined8 *)(lVar5 + 0x38) = uStack_90;
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar9 = *(long *)puVar3;
        }
        lVar9 = *(long *)(lVar9 + 0xb8);
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_c8 = *(undefined8 *)(lVar9 + 0x70);
        uStack_d0 = *(undefined8 *)(lVar9 + 0x68);
        uStack_a0 = 0;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(lVar9 + 0x78));
        System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                  (_UNK_00e208e8,&uStack_b0,&uStack_d0,*(undefined8 *)puVar4);
        if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_023e1230;
        *(undefined8 *)(lVar5 + 0x60) = uStack_a0;
        *(undefined8 *)(lVar5 + 0x58) = uStack_a8;
        *(undefined8 *)(lVar5 + 0x50) = uStack_b0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
        uStack_58 = *(undefined8 *)(lVar9 + 0x5c);
        uStack_60 = *(undefined8 *)(lVar9 + 0x54);
        uStack_50 = *(undefined4 *)(lVar9 + 100);
        System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                  (_UNK_00e20094,&uStack_d0,&uStack_60,*(undefined8 *)puVar4);
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) goto LAB_023e1230;
        *(undefined8 *)(lVar5 + 0x78) = uStack_c0;
        *(undefined8 *)(lVar5 + 0x70) = uStack_c8;
        *(undefined8 *)(lVar5 + 0x68) = uStack_d0;
        if (lVar10 == 0) goto LAB_023e122c;
        Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar10,lVar5,0);
        uVar8 = *(undefined8 *)(lVar7 + 0x38);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(lVar7 + 0x38) != 0) {
            lVar9 = *(long *)(lVar7 + 0x20);
            lVar5 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar7 + 0x38),0);
            if ((lVar5 != 0) && (UnityEngine_Transform__get_position_43d0e48(lVar5,0), lVar9 != 0))
            {
              Dino_BusSand_App_UI_HomeToonFace__LookAt_22e500c(lVar9,0);
              goto LAB_023e120c;
            }
          }
          goto LAB_023e122c;
        }
        goto LAB_023e120c;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x20);
    lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb71e8,3);
    puVar3 = PTR_DAT_04cb71a8;
    lVar9 = *(long *)PTR_DAT_04cb71a8;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar9);
      lVar9 = *(long *)puVar3;
    }
    puVar3 = PTR_DAT_04cb71f0;
    lVar9 = *(long *)(lVar9 + 0xb8);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = *(undefined8 *)(lVar9 + 0xa8);
    uStack_90 = *(undefined8 *)(lVar9 + 0xa0);
    uStack_68 = 0;
    uStack_80 = CONCAT44(uStack_80._4_4_,*(undefined4 *)(lVar9 + 0xb0));
    System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
              (_UNK_00e207dc,&uStack_78,&uStack_90,*(undefined8 *)PTR_DAT_04cb71f0);
    puVar4 = PTR_DAT_04cb7200;
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x30) = uStack_68;
        *(undefined8 *)(lVar5 + 0x28) = uStack_70;
        *(undefined8 *)(lVar5 + 0x20) = uStack_78;
        lVar9 = *(long *)puVar4;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar9 = *(long *)puVar4;
        }
        lVar9 = *(long *)(lVar9 + 0xb8);
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_a8 = *(undefined8 *)(lVar9 + 0x70);
        uStack_b0 = *(undefined8 *)(lVar9 + 0x68);
        uStack_80 = 0;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,*(undefined4 *)(lVar9 + 0x78));
        System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                  (0x3f000000,&uStack_90,&uStack_b0,*(undefined8 *)puVar3);
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar5 + 0x48) = uStack_80;
          *(undefined8 *)(lVar5 + 0x40) = uStack_88;
          *(undefined8 *)(lVar5 + 0x38) = uStack_90;
          uStack_b0 = 0;
          uStack_a8 = 0;
          uStack_a0 = 0;
          lVar9 = *(long *)(*(long *)puVar4 + 0xb8);
          uStack_c8 = *(undefined8 *)(lVar9 + 0x5c);
          uStack_d0 = *(undefined8 *)(lVar9 + 0x54);
          uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(lVar9 + 100));
          System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                    (0x3f400000,&uStack_b0,&uStack_d0,*(undefined8 *)puVar3);
          if (2 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x60) = uStack_a0;
            *(undefined8 *)(lVar5 + 0x58) = uStack_a8;
            *(undefined8 *)(lVar5 + 0x50) = uStack_b0;
            if (lVar10 != 0) {
              Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar10,lVar5,0);
LAB_023e120c:
              *(undefined4 *)(lVar7 + 0xd0) = *(undefined4 *)(lVar7 + 0x88);
              return;
            }
            goto LAB_023e122c;
          }
        }
      }
LAB_023e1230:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_023e122c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

