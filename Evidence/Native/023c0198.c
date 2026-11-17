/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$InitPassport
void Dino_BusSand_App_UI_ContinueBottomPanel__InitPassport (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, UnityEngine_Transform_o* root, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$InitPassport
   void Dino_BusSand_App_UI_ContinueBottomPanel__InitPassport
   (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, UnityEngine_Transform_o* root, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPanel__InitPassport_22c0198(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_04cac440;
  if ((bRam0000000004f9c32e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb6658);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad978);
    FUN_02132f7c(PTR_DAT_04cb6660);
    FUN_02132f7c(PTR_DAT_04caef68);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cb6668);
    FUN_02132f7c(PTR_DAT_04cb0608);
    FUN_02132f7c(PTR_DAT_04cb6670);
    FUN_02132f7c(PTR_DAT_04cb6678);
    FUN_02132f7c(PTR_DAT_04cad9e0);
    FUN_02132f7c(PTR_DAT_04cb0988);
    FUN_02132f7c(PTR_DAT_04cb6680);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c32e = 1;
  }
  uStack_34 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_34 = Dino_BusSand_App_Meta_Economy__ReviveBuses_2204aa8(0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_2 != 0) {
    lVar3 = UnityEngine_Transform__Find_43d4bec(param_2,*(undefined8 *)PTR_DAT_04cadc80,0);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar7);
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    if (lVar3 != 0) {
      uVar5 = UnityEngine_Transform__Find_43d4bec(lVar3,*(undefined8 *)PTR_DAT_04cad9e0,0);
      puVar2 = PTR_DAT_04ca9d18;
      lVar8 = *(long *)PTR_DAT_04ca9d18;
      lVar7 = *(long *)(lVar8 + 0x38);
      if (lVar7 == 0) {
        FUN_0216b4cc(lVar8);
        lVar7 = *(long *)(lVar8 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0216b470();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0216b470();
      }
      uVar9 = **(undefined8 **)(lVar7 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
      }
      uVar9 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cb0988,uVar9,0);
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
      }
      Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar5,uVar9,0);
      uVar5 = UnityEngine_Transform__Find_43d4bec(lVar3,*(undefined8 *)PTR_DAT_04cb6660,0);
      lVar8 = *(long *)puVar2;
      lVar7 = *(long *)(lVar8 + 0x38);
      if (lVar7 == 0) {
        FUN_0216b4cc(lVar8);
        lVar7 = *(long *)(lVar8 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0216b470();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0216b470();
      }
      uVar9 = Dino_BusSand_App_Lang__Get_215f9c0
                        (*(undefined8 *)PTR_DAT_04cb0608,**(undefined8 **)(lVar7 + 0xb8),0);
      Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar5,uVar9,0);
      uVar5 = UnityEngine_Transform__Find_43d4bec(lVar3,*(undefined8 *)PTR_DAT_04cb6678,0);
      uVar9 = System_Int32__ToString_482d750(&uStack_34,0);
      uVar9 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cad978,uVar9,0);
      Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar5,uVar9,0);
      uVar5 = UnityEngine_Transform__Find_43d4bec(lVar3,*(undefined8 *)PTR_DAT_04caef68,0);
      plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
      uStack_38 = uStack_34;
      lVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_38);
      if (plVar6 != (long *)0x0) {
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
          uVar5 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar5,0);
        }
        if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar6[4] = lVar7;
        thunk_FUN_02134474(plVar6 + 4,lVar7);
        uVar9 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cb6670,plVar6,0);
        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar5,uVar9,0);
        uVar5 = UnityEngine_Transform__Find_43d4bec(lVar3,*(undefined8 *)PTR_DAT_04cb6668,0);
        Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar5,0,0);
        lVar3 = UnityEngine_Transform__Find_43d4bec(lVar3,*(undefined8 *)PTR_DAT_04cb6680,0);
        lVar7 = *(long *)puVar1;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar7);
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
        if ((uVar4 & 1) != 0) {
          if (lVar3 == 0) goto LAB_023c0690;
          uVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0);
          uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar9,param_1,*(undefined8 *)PTR_DAT_04cb6658,0);
          Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar5,uVar9,1,*(undefined8 *)PTR_DAT_04cad948,0)
          ;
        }
        return;
      }
    }
  }
LAB_023c0690:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

