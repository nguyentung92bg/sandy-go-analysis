/* IL2CPP: Dino.BusSand.App.UI.CommonHeadView$$LoadFrame
void Dino_BusSand_App_UI_CommonHeadView__LoadFrame (Dino_BusSand_App_UI_CommonHeadView_o* __this, int32_t frameId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonHeadView$$LoadFrame
   void Dino_BusSand_App_UI_CommonHeadView__LoadFrame (Dino_BusSand_App_UI_CommonHeadView_o* __this,
   int32_t frameId, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommonHeadView__LoadFrame_22cf514(long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  
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
  if (*(int *)(param_1 + 0x40) == param_2) {
    return;
  }
  if (param_2 == 0x493e1) {
    Dino_BusSand_App_UI_CommonHeadView__ClearFrame_22cfb0c(param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_023cf87c;
      UnityEngine_GameObject__SetActive_43c1408(*(long *)(param_1 + 0x30),1,0);
    }
    param_2 = 0x493e1;
LAB_023cf600:
    *(int *)(param_1 + 0x40) = param_2;
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cae570 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_App_Meta_PlayerIdentity__IsDecorate_226cd0c
                    (param_2,*(undefined8 *)PTR_DAT_04caf380,0);
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
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  Dino_BusSand_App_UI_CommonHeadView__ClearFrame_22cfb0c(param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_023cf87c;
    UnityEngine_GameObject__SetActive_43c1408(*(long *)(param_1 + 0x30),0,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = UnityEngine_Object__Instantiate_object__28052a0
                    (lVar3,uVar6,*(undefined8 *)PTR_DAT_04cab478);
  plVar7 = (long *)(param_1 + 0x38);
  *plVar7 = lVar4;
  thunk_FUN_02134474(plVar7,lVar4);
  if (lVar3 != 0) {
    lVar4 = *plVar7;
    uVar6 = UnityEngine_Object__get_name_43c71a4(lVar3,0);
    if (lVar4 != 0) {
      UnityEngine_Object__set_name_43c72ec(lVar4,uVar6,0);
      if (*plVar7 != 0) {
        lVar3 = UnityEngine_GameObject__get_transform_43c1048(*plVar7,0);
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65d = '\x01';
        }
        puVar1 = PTR_DAT_04caa208;
        if (lVar3 != 0) {
          puVar5 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          UnityEngine_Transform__set_localPosition_43cfda8(*puVar5,puVar5[1],puVar5[2],lVar3,0);
          if (*plVar7 != 0) {
            lVar3 = UnityEngine_GameObject__get_transform_43c1048(*plVar7,0);
            if (cRam0000000004f9b65e == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65e = '\x01';
            }
            if (lVar3 != 0) {
              lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
              UnityEngine_Transform__set_localScale_43d1be0
                        (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                         *(undefined4 *)(lVar4 + 0x14),lVar3,0);
              lVar3 = *plVar7;
              if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar3,0);
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

