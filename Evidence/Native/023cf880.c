/* IL2CPP: Dino.BusSand.App.UI.CommonHeadView$$InitPlayer
void Dino_BusSand_App_UI_CommonHeadView__InitPlayer (Dino_BusSand_App_UI_CommonHeadView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonHeadView$$InitPlayer
   void Dino_BusSand_App_UI_CommonHeadView__InitPlayer (Dino_BusSand_App_UI_CommonHeadView_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommonHeadView__InitPlayer_22cf880(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long *plVar10;
  
  if ((bRam0000000004f9c39b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4720);
    FUN_02132f7c(PTR_DAT_04cb6c20);
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c39b = 1;
  }
  puVar1 = PTR_DAT_04cae570;
  Dino_BusSand_App_UI_CommonHeadView__Setup_22cf160(param_1);
  puVar2 = PTR_DAT_04cb4720;
  if (*(char *)(param_1 + 0x44) == '\0') {
    *(undefined1 *)(param_1 + 0x44) = 1;
    uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Action_Int32Enum____ctor_35ef240(uVar8,param_1,*(undefined8 *)PTR_DAT_04cb6c20,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_PlayerIdentity__add_Changed_226bbd4(uVar8,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Meta_PlayerIdentity__get_HeadIcon_226beb4(0);
  Dino_BusSand_App_UI_CommonHeadView__RefreshHead_22cf440(param_1,uVar3);
  iVar4 = Dino_BusSand_App_Meta_PlayerIdentity__get_HeadFrame_226d198(0);
  if ((bRam0000000004f9c39f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab478);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cab188);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04caf380);
    bRam0000000004f9c39f = 1;
  }
  Dino_BusSand_App_UI_CommonHeadView__Setup_22cf160(param_1);
  puVar1 = PTR_DAT_04cae570;
  if (*(int *)(param_1 + 0x40) == iVar4) {
    return;
  }
  if (iVar4 == 0x493e1) {
    Dino_BusSand_App_UI_CommonHeadView__ClearFrame_22cfb0c(param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_023cf87c;
      UnityEngine_GameObject__SetActive_43c1408(*(long *)(param_1 + 0x30),1,0);
    }
    iVar4 = 0x493e1;
LAB_023cf600:
    *(int *)(param_1 + 0x40) = iVar4;
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_Meta_PlayerIdentity__IsDecorate_226cd0c
                    (iVar4,*(undefined8 *)PTR_DAT_04caf380,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = Dino_BusSand_App_Meta_PlayerIdentity__DecoratePath_226db24(iVar4,0);
  if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab490);
  }
  lVar6 = Dino_BusSand_App_UiAssets__Prefab_21513b8(uVar8,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  Dino_BusSand_App_UI_CommonHeadView__ClearFrame_22cfb0c(param_1);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_023cf87c;
    UnityEngine_GameObject__SetActive_43c1408(*(long *)(param_1 + 0x30),0,0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar7 = UnityEngine_Object__Instantiate_object__28052a0
                    (lVar6,uVar8,*(undefined8 *)PTR_DAT_04cab478);
  plVar10 = (long *)(param_1 + 0x38);
  *plVar10 = lVar7;
  thunk_FUN_02134474(plVar10,lVar7);
  if (lVar6 != 0) {
    lVar7 = *plVar10;
    uVar8 = UnityEngine_Object__get_name_43c71a4(lVar6,0);
    if (lVar7 != 0) {
      UnityEngine_Object__set_name_43c72ec(lVar7,uVar8,0);
      if (*plVar10 != 0) {
        lVar6 = UnityEngine_GameObject__get_transform_43c1048(*plVar10,0);
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65d = '\x01';
        }
        puVar1 = PTR_DAT_04caa208;
        if (lVar6 != 0) {
          puVar9 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          UnityEngine_Transform__set_localPosition_43cfda8(*puVar9,puVar9[1],puVar9[2],lVar6,0);
          if (*plVar10 != 0) {
            lVar6 = UnityEngine_GameObject__get_transform_43c1048(*plVar10,0);
            if (cRam0000000004f9b65e == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65e = '\x01';
            }
            if (lVar6 != 0) {
              lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
              UnityEngine_Transform__set_localScale_43d1be0
                        (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                         *(undefined4 *)(lVar7 + 0x14),lVar6,0);
              lVar6 = *plVar10;
              if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar6,0);
              goto LAB_023cf600;
            }
          }
        }
      }
    }
  }
LAB_023cf87c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

