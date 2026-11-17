/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$AttachDecorate
void Dino_BusSand_App_UI_PlayerSettingPanel__AttachDecorate (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, Dino_BusSand_App_UI_PlayerSettingPanel_Item_o* it, bool plate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$AttachDecorate
   void Dino_BusSand_App_UI_PlayerSettingPanel__AttachDecorate
   (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, Dino_BusSand_App_UI_PlayerSettingPanel_Item_o*
   it, bool plate, const MethodInfo* method); */

void Dino_BusSand_App_UI_PlayerSettingPanel__AttachDecorate_2303248
               (undefined8 param_1,long param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  
  if ((bRam0000000004f9c4e3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cab188);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb6c40);
    bRam0000000004f9c4e3 = 1;
  }
  puVar4 = PTR_DAT_04cae570;
  puVar2 = PTR_DAT_04cab490;
  if (param_2 == 0) goto LAB_02403578;
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04ca9ae8;
  uVar5 = Dino_BusSand_App_Meta_PlayerIdentity__DecoratePath_226db24(uVar1,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  lVar6 = Dino_BusSand_App_UiAssets__Prefab_21513b8(uVar5,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if ((uVar7 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
    if ((uVar7 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar8 = UnityEngine_Object__Instantiate_object__2805310
                        (lVar6,uVar5,0,*(undefined8 *)PTR_DAT_04cad390);
      if ((lVar6 != 0) && (uVar5 = UnityEngine_Object__get_name_43c71a4(lVar6,0), lVar8 != 0)) {
        UnityEngine_Object__set_name_43c72ec(lVar8,uVar5,0);
        plVar9 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
        if ((param_3 & 1) != 0) {
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)0x0;
          }
          else if (*plVar9 != *(long *)PTR_DAT_04cabdb0) {
            plVar9 = (long *)0x0;
          }
          Dino_BusSand_App_UI_CommonNamePlateView__Stretch_22d090c
                    (0x41a00000,0,0xc1a00000,0,plVar9,0);
          uVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
          uVar5 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                            (uVar5,*(undefined8 *)PTR_DAT_04cb6c40,0);
          puVar14 = (undefined8 *)(param_2 + 0x40);
          *puVar14 = uVar5;
          thunk_FUN_02134474(puVar14,uVar5);
          Dino_BusSand_App_UI_CommonNamePlateView__SetAutoSize_22d07f4(0x42100000,*puVar14,0);
          uVar5 = *puVar14;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = Dino_BusSand_App_Meta_PlayerIdentity__get_PlayerName_225b990(0);
          Dino_BusSand_App_UI_CommonNamePlateView__SetTexts_22d0430(uVar5,uVar10,0);
LAB_02403544:
          if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          puVar2 = PTR_DAT_04ca9ae8;
          if ((bRam0000000004f9b90e & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cad3b8,0);
            FUN_02132f7c(PTR_DAT_04ca9ae8);
            FUN_02132f7c(PTR_DAT_04cab188);
            bRam0000000004f9b90e = 1;
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
          if ((uVar7 & 1) == 0) {
            if ((lVar8 == 0) ||
               (lVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                                  (lVar8,1,*(undefined8 *)PTR_DAT_04cad3b8),
               puVar2 = PTR_DAT_04cab188, lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
              uVar7 = 0;
              uVar11 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
              do {
                if (uVar11 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                uVar5 = *(undefined8 *)(lVar6 + 0x20 + uVar7 * 8);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_App_UI_UIParticleSorting__Prepare_217d5f8(uVar5);
                uVar11 = (ulong)*(uint *)(lVar6 + 0x18);
                uVar7 = uVar7 + 1;
              } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
            }
          }
          return;
        }
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65d = '\x01';
        }
        puVar2 = PTR_DAT_04caa208;
        if (plVar9 != (long *)0x0) {
          puVar12 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          UnityEngine_Transform__set_localPosition_43cfda8(*puVar12,puVar12[1],puVar12[2],plVar9,0);
          lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
          if (cRam0000000004f9b65e == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65e = '\x01';
          }
          if (lVar6 != 0) {
            lVar13 = *(long *)(*(long *)puVar2 + 0xb8);
            UnityEngine_Transform__set_localScale_43d1be0
                      (*(undefined4 *)(lVar13 + 0xc),*(undefined4 *)(lVar13 + 0x10),
                       *(undefined4 *)(lVar13 + 0x14),lVar6,0);
            goto LAB_02403544;
          }
        }
      }
LAB_02403578:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

