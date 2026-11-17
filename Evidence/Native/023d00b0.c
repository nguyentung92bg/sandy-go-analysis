/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$LoadNamePlate
void Dino_BusSand_App_UI_CommonNamePlateView__LoadNamePlate (Dino_BusSand_App_UI_CommonNamePlateView_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$LoadNamePlate
   void Dino_BusSand_App_UI_CommonNamePlateView__LoadNamePlate
   (Dino_BusSand_App_UI_CommonNamePlateView_o* __this, int32_t id, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommonNamePlateView__LoadNamePlate_22d00b0(long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((bRam0000000004f9c3a8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab478);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cab188);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb4768);
    FUN_02132f7c(PTR_DAT_04cb6c40);
    bRam0000000004f9c3a8 = 1;
  }
  Dino_BusSand_App_UI_CommonNamePlateView__Setup_22cfd58(param_1);
  puVar1 = PTR_DAT_04cae570;
  if (*(int *)(param_1 + 0x4c) == param_2) {
    return;
  }
  if (param_2 == 0x61a81) {
    Dino_BusSand_App_UI_CommonNamePlateView__Clear_22d0744(param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_023d042c;
      UnityEngine_GameObject__SetActive_43c1408(*(long *)(param_1 + 0x38),1,0);
    }
    param_2 = 0x61a81;
LAB_023d01b0:
    *(int *)(param_1 + 0x4c) = param_2;
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_App_Meta_PlayerIdentity__IsDecorate_226cd0c
                    (param_2,*(undefined8 *)PTR_DAT_04cb4768,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = Dino_BusSand_App_Meta_PlayerIdentity__DecoratePath_226db24(param_2,0);
  if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab490);
  }
  lVar3 = Dino_BusSand_App_UiAssets__Prefab_21513b8(uVar6,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  Dino_BusSand_App_UI_CommonNamePlateView__Clear_22d0744(param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = UnityEngine_Object__Instantiate_object__28052a0
                    (lVar3,uVar6,*(undefined8 *)PTR_DAT_04cab478);
  plVar7 = (long *)(param_1 + 0x40);
  *plVar7 = lVar4;
  thunk_FUN_02134474(plVar7,lVar4);
  if (lVar3 != 0) {
    lVar4 = *plVar7;
    uVar6 = UnityEngine_Object__get_name_43c71a4(lVar3,0);
    if (lVar4 != 0) {
      UnityEngine_Object__set_name_43c72ec(lVar4,uVar6,0);
      if (*plVar7 != 0) {
        uVar6 = UnityEngine_GameObject__get_transform_43c1048(*plVar7,0);
        uVar6 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                          (uVar6,*(undefined8 *)PTR_DAT_04cb6c40,0);
        puVar8 = (undefined8 *)(param_1 + 0x30);
        *puVar8 = uVar6;
        thunk_FUN_02134474(puVar8,uVar6);
        Dino_BusSand_App_UI_CommonNamePlateView__SetAutoSize_22d07f4
                  (*(undefined4 *)(param_1 + 0x48),*puVar8);
        Dino_BusSand_App_UI_CommonNamePlateView__SetTexts_22d0430
                  (*puVar8,*(undefined8 *)(param_1 + 0x50));
        uVar2 = UnityEngine_Object__op_Inequality_43c8dec(*(undefined8 *)(param_1 + 0x38),0,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_023d042c;
          UnityEngine_GameObject__SetActive_43c1408(*(long *)(param_1 + 0x38),0,0);
        }
        if (*plVar7 != 0) {
          plVar5 = (long *)UnityEngine_GameObject__get_transform_43c1048(*plVar7,0);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          uVar9 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
          uVar10 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
          if (plVar5 == (long *)0x0) {
            plVar5 = (long *)0x0;
          }
          else if (*plVar5 != *(long *)PTR_DAT_04cabdb0) {
            plVar5 = (long *)0x0;
          }
          Dino_BusSand_App_UI_CommonNamePlateView__Stretch_22d090c(uVar9,uVar10,uVar9,uVar10,plVar5)
          ;
          lVar3 = *plVar7;
          if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar3,0);
          goto LAB_023d01b0;
        }
      }
    }
  }
LAB_023d042c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

