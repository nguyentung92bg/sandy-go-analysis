/* IL2CPP: Dino.BusSand.App.UI.EventKit$$RewardRow
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_EventKit__RewardRow (UnityEngine_Transform_o* parent, System_String_o* name, System_Collections_Generic_IList_KeyValuePair_int__long___o* get, float icon, float font, float gap, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.EventKit$$RewardRow
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_EventKit__RewardRow (UnityEngine_Transform_o*
   parent, System_String_o* name, System_Collections_Generic_IList_KeyValuePair_int__long___o* get,
   float icon, float font, float gap, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_EventKit__RewardRow_21b7820
          (float param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5,
          long *param_6)

{
  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  int iStack_a4;
  
  if ((bRam0000000004f9bad0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf5d8);
    FUN_02132f7c(PTR_DAT_04caf5e0);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cabb10);
    FUN_02132f7c(PTR_DAT_04caf5e8);
    FUN_02132f7c(PTR_DAT_04caf5f0);
    FUN_02132f7c(PTR_DAT_04caf460);
    FUN_02132f7c(PTR_DAT_04cae5d0);
    bRam0000000004f9bad0 = 1;
  }
  plVar15 = (long *)PTR_DAT_04caf5d8;
  iStack_a4 = 0;
  uStack_b0 = 0;
  if (param_6 == (long *)0x0) {
LAB_022b7f50:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar11 = *param_6;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04caf5d8) {
        puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_022b795c;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar6 = (undefined8 *)FUN_0216b7a4(param_6,*(long *)PTR_DAT_04caf5d8,0);
LAB_022b795c:
  iVar3 = (*(code *)*puVar6)(param_6,puVar6[1]);
  param_3 = param_1 + param_3;
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                    (param_3 * (float)iVar3,param_1 + param_2,0,0,param_4,param_5,0,0,0);
  fVar19 = param_2 * _UNK_00e20390;
  uVar18 = 0;
  uVar17 = 0;
  uVar16 = 0;
  fVar20 = param_2 * _UNK_00e20590;
  fVar21 = param_2 * _UNK_00e20178;
  iStack_a4 = 0;
  uVar10 = 0;
  do {
    iVar3 = iStack_a4;
    lVar11 = *param_6;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *plVar15) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_022b7a60;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_0216b7a4(param_6,*plVar15,0);
LAB_022b7a60:
    iVar4 = (*(code *)*puVar6)(param_6,puVar6[1]);
    iVar5 = iStack_a4;
    if (iVar4 <= iVar3) {
      return uVar7;
    }
    lVar11 = *param_6;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *plVar15) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_022b7ac4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_0216b7a4(param_6,*plVar15,0);
LAB_022b7ac4:
    iVar3 = (*(code *)*puVar6)(param_6,puVar6[1]);
    uVar8 = System_Int32__ToString_482d750(&iStack_a4,0);
    uVar8 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cae5d0,uVar8,0);
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
    }
    fVar22 = param_3 * ((float)iVar5 + (float)(iVar3 + -1) * -0.5);
    lVar11 = Dino_BusSand_App_UI_UiKit__Img_228203c
                       (param_1,param_1,fVar22,fVar20,0x3f800000,uVar7,uVar8,0,0,0);
    iVar3 = iStack_a4;
    lVar12 = *param_6;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04caf5e0) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_022b7bbc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_0216b7a4(param_6,*(long *)PTR_DAT_04caf5e0,0);
LAB_022b7bbc:
    iVar5 = (*(code *)*puVar6)(param_6,iVar3,puVar6[1]);
    iVar3 = iStack_a4;
    if (iVar5 == 0x3e9) {
      uVar8 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)PTR_DAT_04caf5f0,0);
    }
    else {
      lVar12 = *param_6;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04caf5e0) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_022b7c58;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0216b7a4(param_6,*(long *)PTR_DAT_04caf5e0,0);
LAB_022b7c58:
      uVar8 = (*(code *)*puVar6)(param_6,iVar3,puVar6[1]);
      uVar8 = Dino_BusSand_App_UI_KitParts__ItemIcon_23100d0(uVar8,0);
    }
    if ((lVar11 == 0) || (UnityEngine_UI_Image__set_sprite_44a7258(lVar11,uVar8,0), lVar11 == 0))
    goto LAB_022b7f50;
    UnityEngine_UI_Image__set_preserveAspect_44afae0(lVar11,1,0);
    uVar8 = System_Int32__ToString_482d750(&iStack_a4,0);
    uVar8 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04caf5e8,uVar8,0);
    iVar3 = iStack_a4;
    lVar11 = *param_6;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04caf5e0) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_022b7d20;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_0216b7a4(param_6,*(long *)PTR_DAT_04caf5e0,0);
LAB_022b7d20:
    iVar5 = (*(code *)*puVar6)(param_6,iVar3,puVar6[1]);
    iVar3 = iStack_a4;
    lVar11 = *param_6;
    uVar1 = uVar8;
    uVar9 = uVar7;
    if (iVar5 != 0x3e9) {
      uVar1 = uVar10;
      uVar9 = uVar16;
      uVar17 = uVar8;
      uVar18 = uVar7;
    }
    uVar16 = uVar9;
    lVar12 = *(long *)PTR_DAT_04caf5e0;
    uVar2 = *(ushort *)(lVar11 + 0x12e);
    uVar13 = (ulong)uVar2;
    if (iVar5 != 0x3e9) {
      if (uVar2 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar12) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_022b7e2c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0216b7a4(param_6,lVar12,0);
LAB_022b7e2c:
      (*(code *)*puVar6)(param_6,iVar3,puVar6[1]);
      uStack_b0 = extraout_x1_00;
      uVar10 = System_Int64__ToString_482e7e4(&uStack_b0,0);
      uVar9 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabb10,uVar10,0);
      uVar10 = uVar18;
      uVar8 = uVar17;
    }
    else {
      if (uVar2 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar12) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_022b7dd8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_0216b7a4(param_6,lVar12,0);
LAB_022b7dd8:
      (*(code *)*puVar6)(param_6,iVar3,puVar6[1]);
      if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = Dino_BusSand_App_UI_UiKit__Num_228348c(extraout_x1,0);
      uVar10 = uVar16;
      uVar8 = uVar1;
    }
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    System_Nullable_Color____ctor_2bc9090
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_c8,
               *(undefined8 *)PTR_DAT_04cac878);
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_d8 = uStack_c0;
    uStack_e0 = uStack_c8;
    uStack_d0 = uStack_b8;
    Dino_BusSand_App_UI_UiKit__Text_2282314
              (param_2,param_3,fVar21,fVar22,fVar19 + param_1 * -0.5,uVar10,uVar8,uVar9,
               *(undefined8 *)PTR_DAT_04caf460,&uStack_e0,0x202,0);
    iStack_a4 = iStack_a4 + 1;
    plVar15 = (long *)PTR_DAT_04caf5d8;
    uVar10 = uVar1;
  } while( true );
}

