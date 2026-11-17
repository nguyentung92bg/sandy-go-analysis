/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$Tmp
TMPro_TMP_Text_o* Dino_BusSand_App_UI_CommerceUi__Tmp (UnityEngine_Transform_o* node, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$Tmp
   TMPro_TMP_Text_o* Dino_BusSand_App_UI_CommerceUi__Tmp (UnityEngine_Transform_o* node, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_CommerceUi__Tmp_22abf88(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c2a9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabe08);
    FUN_02132f7c(PTR_DAT_04cad790);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c2a9 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  lVar6 = 0;
  if ((uVar2 & 1) == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = UnityEngine_Component__GetComponent_object__26f97e8
                      (param_1,*(undefined8 *)PTR_DAT_04cad790);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar4);
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
    if ((uVar2 & 1) != 0) {
      lVar6 = *(long *)PTR_DAT_04cabe08;
      puVar5 = *(undefined8 **)(lVar6 + 0x38);
      if (puVar5 == (undefined8 *)0x0) {
        FUN_0216b4cc(lVar6);
        puVar5 = *(undefined8 **)(lVar6 + 0x38);
      }
      uVar7 = *puVar5;
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = System_Type__GetTypeFromHandle_483f0b4(uVar7,0);
      lVar4 = UnityEngine_Component__GetComponentInChildren_43bd11c(param_1,uVar7,1,0);
      lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0216b470(lVar6);
      }
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = thunk_FUN_0216e7a0(lVar4,lVar6);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(lVar4,lVar6);
        }
      }
      return lVar3;
    }
  }
  return lVar6;
}

