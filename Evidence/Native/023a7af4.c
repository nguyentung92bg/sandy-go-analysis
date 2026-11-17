/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$Attach
Dino_BusSand_App_UI_CommerceCoinBar_o* Dino_BusSand_App_UI_CommerceCoinBar__Attach (UnityEngine_Transform_o* node, int32_t itemId, bool clickable, System_Action_o* onClick, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$Attach
   Dino_BusSand_App_UI_CommerceCoinBar_o* Dino_BusSand_App_UI_CommerceCoinBar__Attach
   (UnityEngine_Transform_o* node, int32_t itemId, bool clickable, System_Action_o* onClick, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_CommerceCoinBar__Attach_22a7af4
               (long param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c28f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5d90);
    FUN_02132f7c(PTR_DAT_04cb5d98);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c28f = 1;
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
                      (param_1,*(undefined8 *)PTR_DAT_04cb5d90);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar4);
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
      if (lVar3 == 0) goto LAB_023a7c14;
      lVar3 = UnityEngine_GameObject__AddComponent_object__275a54c
                        (lVar3,*(undefined8 *)PTR_DAT_04cb5d98);
    }
    if (lVar3 != 0) {
      Dino_BusSand_App_UI_CommerceCoinBar__Setup_22a7c18(lVar3,param_2,param_3 & 1,param_4);
      return lVar3;
    }
  }
LAB_023a7c14:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

