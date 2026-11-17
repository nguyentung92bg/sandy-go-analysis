/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Label
TMPro_TextMeshPro_o* Dino_BusSand_View_MechanicLayer__Label (Dino_BusSand_View_MechanicLayer_o* __this, UnityEngine_Transform_o* parent, UnityEngine_Vector3_o world, float size, UnityEngine_Color_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Label
   TMPro_TextMeshPro_o* Dino_BusSand_View_MechanicLayer__Label (Dino_BusSand_View_MechanicLayer_o*
   __this, UnityEngine_Transform_o* parent, UnityEngine_Vector3_o world, float size,
   UnityEngine_Color_o color, const MethodInfo* method); */

long * Dino_BusSand_View_MechanicLayer__Label_23c26b4
                 (undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 long param_9,undefined8 param_10)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  
  puVar3 = PTR_DAT_04caf560;
  puVar2 = PTR_DAT_04caa070;
  if ((bRam0000000004f9c9c4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cbc240);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc250);
    FUN_02132f7c(PTR_DAT_04caf560);
    bRam0000000004f9c9c4 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  UnityEngine_GameObject___ctor_43c20cc(lVar4,*(undefined8 *)puVar3,0);
  if (lVar4 == 0) goto LAB_024c2a64;
  plVar5 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                             (lVar4,*(undefined8 *)PTR_DAT_04cbc240);
  lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
  if (lVar6 == 0) goto LAB_024c2a64;
  UnityEngine_Transform__SetParent_43d1e34(lVar6,param_10,1,0);
  lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
  puVar3 = PTR_DAT_04cab208;
  puVar2 = PTR_DAT_04ca9ae8;
  if (lVar6 == 0) goto LAB_024c2a64;
  UnityEngine_Transform__set_position_43d0f1c(param_1,param_2,param_3,lVar6,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar8 & 1) == 0) {
LAB_024c28c4:
    if (plVar5 == (long *)0x0) goto LAB_024c2a64;
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
    if (lVar6 == 0) goto LAB_024c2a64;
    uVar7 = Dino_BusSand_GameAssets__get_font_237c424(lVar6,0);
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar6);
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    if ((uVar8 & 1) == 0) goto LAB_024c28c4;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
    if ((lVar6 == 0) ||
       (uVar7 = Dino_BusSand_GameAssets__get_font_237c424(lVar6,0), plVar5 == (long *)0x0))
    goto LAB_024c2a64;
    TMPro_TMP_Text__set_font_42cb6ac(plVar5,uVar7,0);
  }
  TMPro_TMP_Text__set_fontSize_42cc224(0x41800000,plVar5,0);
  TMPro_TMP_Text__set_alignment_42cc610(plVar5,0x202,0);
  (**(code **)(*plVar5 + 0x2a8))
            (param_5,param_6,param_7,param_8,plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
  uVar1 = _UNK_00e207cc;
  TMPro_TMP_Text__set_outlineWidth_42cc1c4(_UNK_00e207cc,plVar5,0);
  TMPro_TMP_Text__set_outlineColor_42cc098(plVar5,0xff3d211a,0);
  lVar6 = TMPro_TMP_Text__get_rectTransform_42cd6a4(plVar5,0);
  if (lVar6 != 0) {
    UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x40800000,0x40000000,lVar6,0);
    TMPro_TMP_Text__set_textWrappingMode_42cc8a8(plVar5,0,0);
    Dino_BusSand_Util__Outline_238dbd8(uVar1,_UNK_00e2098c,plVar5,0);
    lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    puVar2 = PTR_DAT_04cbc250;
    if (lVar6 != 0) {
      fVar9 = *(float *)(param_9 + 0x50);
      uVar7 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0xc);
      UnityEngine_Transform__set_localScale_43d1be0
                ((float)uVar7 * fVar9 * param_4,(float)((ulong)uVar7 >> 0x20) * fVar9 * param_4,
                 *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x14) * fVar9 * param_4,
                 lVar6,0);
      lVar4 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      Dino_BusSand_View_StageLayout__get_FacingRotation_23e8a38(0);
      if (lVar4 != 0) {
        UnityEngine_Transform__set_rotation_43d13f8(lVar4,0);
        return plVar5;
      }
    }
  }
LAB_024c2a64:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

