/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$Of
Dino_BusSand_App_UI_CommonNamePlateView_o* Dino_BusSand_App_UI_CommonNamePlateView__Of (UnityEngine_Transform_o* node, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$Of
   Dino_BusSand_App_UI_CommonNamePlateView_o* Dino_BusSand_App_UI_CommonNamePlateView__Of
   (UnityEngine_Transform_o* node, const MethodInfo* method); */

long Dino_BusSand_App_UI_CommonNamePlateView__Of_22cfc5c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3a2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6c28);
    FUN_02132f7c(PTR_DAT_04cb6c30);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (param_1 != 0) {
    lVar3 = UnityEngine_Component__GetComponent_object__26f97e8
                      (param_1,*(undefined8 *)PTR_DAT_04cb6c28);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar4);
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
      if (lVar3 == 0) goto LAB_023cfd54;
      lVar3 = UnityEngine_GameObject__AddComponent_object__275a54c
                        (lVar3,*(undefined8 *)PTR_DAT_04cb6c30);
    }
    if (lVar3 != 0) {
      Dino_BusSand_App_UI_CommonNamePlateView__Setup_22cfd58(lVar3);
      return lVar3;
    }
  }
LAB_023cfd54:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

