/* IL2CPP: Dino.BusSand.View.Fx$$Text
void Dino_BusSand_View_Fx__Text (Dino_BusSand_View_Fx_o* __this, UnityEngine_Vector3_o pos, System_String_o* text, UnityEngine_Color_o color, float size, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.Fx$$Text
   void Dino_BusSand_View_Fx__Text (Dino_BusSand_View_Fx_o* __this, UnityEngine_Vector3_o pos,
   System_String_o* text, UnityEngine_Color_o color, float size, const MethodInfo* method); */

void Dino_BusSand_View_Fx__Text_23993a8
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,long param_9,
               undefined8 param_10)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar3 = PTR_DAT_04cbc238;
  puVar4 = PTR_DAT_04caa070;
  if ((bRam0000000004f9c8f4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cbc240);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cbc248);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc250);
    FUN_02132f7c(PTR_DAT_04cbc258);
    FUN_02132f7c(PTR_DAT_04cbc238);
    bRam0000000004f9c8f4 = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  UnityEngine_GameObject___ctor_43c20cc(lVar5,*(undefined8 *)puVar3,0);
  if (lVar5 != 0) {
    lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0);
    uVar7 = UnityEngine_Component__get_transform_43bcd18(param_9,0);
    puVar3 = PTR_DAT_04cbc240;
    puVar4 = PTR_DAT_04cab208;
    if (lVar6 != 0) {
      UnityEngine_Transform__SetParent_43d1e34(lVar6,uVar7,0,0);
      plVar8 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                 (lVar5,*(undefined8 *)puVar3);
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar5);
      }
      lVar5 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
      puVar3 = PTR_DAT_04ca9ae8;
      if (lVar5 != 0) {
        uVar7 = Dino_BusSand_GameAssets__get_font_237c424(lVar5,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
        if ((uVar9 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_02499808;
        }
        else {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar5 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
          if ((lVar5 == 0) ||
             (uVar7 = Dino_BusSand_GameAssets__get_font_237c424(lVar5,0), plVar8 == (long *)0x0))
          goto LAB_02499808;
          TMPro_TMP_Text__set_font_42cb6ac(plVar8,uVar7,0);
        }
        (**(code **)(*plVar8 + 0x518))(plVar8,param_10,*(undefined8 *)(*plVar8 + 0x520));
        TMPro_TMP_Text__set_fontSize_42cc224(param_8 * 9.0,plVar8,0);
        TMPro_TMP_Text__set_alignment_42cc610(plVar8,0x202,0);
        TMPro_TMP_Text__set_textWrappingMode_42cc8a8(plVar8,0,0);
        (**(code **)(*plVar8 + 0x2a8))
                  (param_4,param_5,param_6,param_7,plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
        uVar2 = _UNK_00e207cc;
        TMPro_TMP_Text__set_outlineWidth_42cc1c4(_UNK_00e207cc,plVar8,0);
        TMPro_TMP_Text__set_outlineColor_42cc098(plVar8,0xff501828,0);
        TMPro_TextMeshPro__set_sortingOrder_430ecfc(plVar8,0x32,0);
        Dino_BusSand_Util__Outline_238dbd8(uVar2,_UNK_00e20994,plVar8);
        lVar5 = TMPro_TMP_Text__get_rectTransform_42cd6a4(plVar8,0);
        if (lVar5 != 0) {
          UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x41400000,0x40400000,lVar5,0);
          lVar5 = TMPro_TextMeshPro__get_transform_430ef6c(plVar8,0);
          puVar4 = PTR_DAT_04cbc250;
          if (lVar5 != 0) {
            UnityEngine_Transform__set_position_43d0f1c(param_1,param_2,param_3,lVar5,0);
            lVar5 = TMPro_TextMeshPro__get_transform_430ef6c(plVar8,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            Dino_BusSand_View_StageLayout__get_FacingRotation_23e8a38(0);
            if (lVar5 != 0) {
              UnityEngine_Transform__set_rotation_43d13f8(lVar5,0);
              lVar5 = TMPro_TextMeshPro__get_transform_430ef6c(plVar8,0);
              if (cRam0000000004f9b65d == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9b65d = '\x01';
              }
              puVar4 = PTR_DAT_04cbc258;
              if (lVar5 != 0) {
                puVar10 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
                UnityEngine_Transform__set_localScale_43d1be0
                          (*puVar10,puVar10[1],puVar10[2],lVar5,0);
                lVar5 = *(long *)(param_9 + 0x68);
                uStack_d8 = 0;
                uStack_e0 = 0;
                uStack_c8 = 0;
                uStack_d0 = 0;
                System_ValueTuple_object__float__float__Vector3____ctor_311f400
                          (0,_UNK_00e20170,param_1,param_2,param_3,&uStack_e0,plVar8,
                           *(undefined8 *)puVar4);
                if (lVar5 != 0) {
                  lVar6 = *(long *)(lVar5 + 0x10);
                  lVar11 = *(long *)PTR_DAT_04cbc248;
                  uStack_b8 = uStack_d8;
                  uStack_c0 = uStack_e0;
                  uStack_a8 = uStack_c8;
                  uStack_b0 = uStack_d0;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar6 != 0) {
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                      lVar6 = lVar6 + (long)(int)uVar1 * 0x20;
                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar6 + 0x28) = uStack_d8;
                      *(undefined8 *)(lVar6 + 0x20) = uStack_e0;
                      *(undefined8 *)(lVar6 + 0x38) = uStack_c8;
                      *(undefined8 *)(lVar6 + 0x30) = uStack_d0;
                      thunk_FUN_02134474(lVar6 + 0x20,0);
                    }
                    else {
                      uStack_98 = uStack_d8;
                      uStack_a0 = uStack_e0;
                      uStack_88 = uStack_c8;
                      uStack_90 = uStack_d0;
                      System_Collections_Generic_List_ValueTuple_object__float__float__Vector3____AddWithResize_39dc4d4
                                (lVar5,&uStack_a0,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                      ;
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02499808:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

